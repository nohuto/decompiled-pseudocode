/*
 * XREFs of PoEnableCriticalShutdown @ 0x140864614
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14080ABF0 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x14086465C (PopCancelIgnoreBatteryStatusChange.c)
 */

__int64 PoEnableCriticalShutdown()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
  byte_140C3C754 = 1;
  PopReleaseRwLock(&PopThermalStateTransitionContext);
  PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
  return PopCancelIgnoreBatteryStatusChange();
}
