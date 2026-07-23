/*
 * XREFs of SmcCacheCreatePrepare @ 0x1409D7FD0
 * Callers:
 *     SmcProcessCreateRequest @ 0x1409D809C (SmcProcessCreateRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     SmRegistrationCtxStart @ 0x140861AA0 (SmRegistrationCtxStart.c)
 *     SmcCacheManagerStart @ 0x1409DAE58 (SmcCacheManagerStart.c)
 */

__int64 __fastcall SmcCacheCreatePrepare(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v2; // rsi
  int v4; // ebp

  CurrentThread = KeGetCurrentThread();
  v2 = (volatile signed __int64 *)(a1 - 136);
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 - 136, 0LL);
  if ( (*(_DWORD *)(a1 - 152) & 8) == 0 )
  {
    v4 = SmRegistrationCtxStart((_QWORD *)(a1 + 560));
    if ( v4 >= 0 )
      *(_DWORD *)(a1 - 152) |= 8u;
  }
  if ( (*(_DWORD *)(a1 - 152) & 0xC) == 8 )
  {
    v4 = SmcCacheManagerStart(a1, *(_QWORD *)(a1 + 560));
    if ( v4 >= 0 )
      *(_DWORD *)(a1 - 152) |= 4u;
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
