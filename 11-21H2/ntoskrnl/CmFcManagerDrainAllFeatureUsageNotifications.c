/*
 * XREFs of CmFcManagerDrainAllFeatureUsageNotifications @ 0x140922C5C
 * Callers:
 *     CmFcShutdownSystem @ 0x140911208 (CmFcShutdownSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140832E84 (CmFcpManagerDrainUsageNotifications.c)
 */

char CmFcManagerDrainAllFeatureUsageNotifications()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C49588, 0LL);
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1);
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C49588, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140C49588);
  KeAbPostRelease((ULONG_PTR)&stru_140C49588);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
