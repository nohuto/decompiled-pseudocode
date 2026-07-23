/*
 * XREFs of PopIsDetailedSleepReliabilityDiagEnabled @ 0x140997130
 * Callers:
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x14098ACC8 (PopUpdatePowerActionWatchdogTimeouts.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140996FEC (PopEnableSystemSleepCheckpoint.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 */

char PopIsDetailedSleepReliabilityDiagEnabled()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopSleepReliabilityDiagLock, 0LL);
  v1 = PopSleepReliabilityDetailedDiagEnabled;
  PopReleaseRwLock((__int64 *)&PopSleepReliabilityDiagLock);
  return v1;
}
