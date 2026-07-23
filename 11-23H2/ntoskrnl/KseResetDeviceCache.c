/*
 * XREFs of KseResetDeviceCache @ 0x140976CAC
 * Callers:
 *     KseQueryDeviceData @ 0x1408082D0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140976B00 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KsepCacheReset @ 0x14097791C (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rcx
  volatile signed __int64 *v2; // rdi

  if ( dword_140C64D34 == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = qword_140C64D78;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    KsepCacheReset(qword_140C64D78);
    v2 = (volatile signed __int64 *)qword_140C64D78;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C64D78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
