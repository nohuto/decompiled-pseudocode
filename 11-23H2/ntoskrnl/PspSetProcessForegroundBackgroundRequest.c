/*
 * XREFs of PspSetProcessForegroundBackgroundRequest @ 0x1407C0620
 * Callers:
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     PsSetProcessPriorityByClass @ 0x1407C05F0 (PsSetProcessPriorityByClass.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     PspSetProcessPriorityByClass @ 0x1403502D8 (PspSetProcessPriorityByClass.c)
 */

_QWORD *__fastcall PspSetProcessForegroundBackgroundRequest(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v4; // rbp
  unsigned int v8; // r14d
  BOOL v9; // r12d
  int v11; // ecx

  CurrentThread = KeGetCurrentThread();
  v4 = (volatile signed __int64 *)(a1 + 1080);
  --CurrentThread->KernelApcDisable;
  v8 = a3 != 0 ? 0x20000 : 0x10000;
  v9 = 1;
  ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2172), v8);
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 2172);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2172), ~v8);
    v9 = (v11 & (a3 != 0 ? 0x10000 : 0x20000)) != 0;
  }
  PspSetProcessPriorityByClass(a1, v9);
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
