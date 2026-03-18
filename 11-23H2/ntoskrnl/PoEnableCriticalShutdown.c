/*
 * XREFs of PoEnableCriticalShutdown @ 0x1408643D4
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14080A920 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14032CCE4 (PopQueueWorkItem.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x14086441C (PopCancelIgnoreBatteryStatusChange.c)
 */

__int64 PoEnableCriticalShutdown()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
  byte_140C3C8D4 = 1;
  PopReleaseRwLock(&PopThermalStateTransitionContext);
  PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
  return PopCancelIgnoreBatteryStatusChange();
}
