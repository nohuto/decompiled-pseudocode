/*
 * XREFs of PspProcessClose @ 0x1407BE340
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     PsTerminateProcess @ 0x140683794 (PsTerminateProcess.c)
 *     PspRundownProcess @ 0x1409B3F8C (PspRundownProcess.c)
 */

__int64 __fastcall PspProcessClose(__int64 a1, ULONG_PTR a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v7; // rsi
  signed __int32 v8; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a4 > 1 || (result = *(unsigned int *)(a2 + 1520), (_DWORD)result) )
  {
    if ( (*(_DWORD *)(a2 + 2172) & 0x8000) == 0 )
    {
      result = *(_QWORD *)(a2 + 1352);
      if ( *(_QWORD *)(a1 + 1088) == result )
      {
        result = *(unsigned int *)(a1 + 1124);
        if ( (result & 0x40000008) != 0 )
          return PsTerminateProcess(a2);
      }
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (volatile signed __int64 *)(a2 + 1080);
    v8 = 0x2000000;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 1080, 0LL);
    if ( !*(_DWORD *)(a2 + 1520) )
    {
      _m_prefetchw((const void *)(a2 + 1124));
      v8 = _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 8u);
    }
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    result = (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (v8 & 0x2000000) == 0 )
      return PspRundownProcess((PVOID)a2);
  }
  return result;
}
