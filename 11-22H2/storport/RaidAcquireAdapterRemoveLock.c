/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C0007534
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0007490 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterPowerIrp @ 0x1C0011558 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0011898 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0011E18 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDevice @ 0x1C0011EBC (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0011F70 (RaidAdapterQuerySystemPowerIrp.c)
 *     StorpQueueWorkItem @ 0x1C001408C (StorpQueueWorkItem.c)
 *     RaidAdapterPnpIrp @ 0x1C0015794 (RaidAdapterPnpIrp.c)
 *     StorpLogStatistics @ 0x1C001B410 (StorpLogStatistics.c)
 *     StorpLogPerAdapterStatistics @ 0x1C001CC3C (StorpLogPerAdapterStatistics.c)
 *     StorEtwResetCounters @ 0x1C00214EC (StorEtwResetCounters.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x1C003CFF0 (RaidPnPAsyncStartCompleteWorker.c)
 *     StorAdapterWatchForRegistryChanges @ 0x1C0044CB0 (StorAdapterWatchForRegistryChanges.c)
 *     StorEnableRegistryKeyNotification @ 0x1C0044F24 (StorEnableRegistryKeyNotification.c)
 *     RaUnitGetInstances @ 0x1C005DD38 (RaUnitGetInstances.c)
 *     RaUnitStorageFreeDumpInfo @ 0x1C005FA90 (RaUnitStorageFreeDumpInfo.c)
 *     StorEtwEnableCallback @ 0x1C0067570 (StorEtwEnableCallback.c)
 *     RaWmiDispatchIrp @ 0x1C00A28B4 (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAcquireAdapterRemoveLock(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 296)) )
    return (unsigned int)-1073741738;
  return v1;
}
