/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C000BA44
 * Callers:
 *     StorEtwResetCounters @ 0x1C0002B64 (StorEtwResetCounters.c)
 *     StorpLogPerAdapterStatistics @ 0x1C0003300 (StorpLogPerAdapterStatistics.c)
 *     StorpLogStatistics @ 0x1C00037DC (StorpLogStatistics.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000BAC0 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterPowerIrp @ 0x1C00147E8 (RaidAdapterPowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0014A90 (RaidAdapterPowerDownDevice.c)
 *     RaUnitStorageFreeDumpInfo @ 0x1C00170BC (RaUnitStorageFreeDumpInfo.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0017A14 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0017EE0 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C001A098 (RaidAdapterPnpIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C001E2E8 (RaidAdapterPowerUpDevice.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x1C003B200 (RaidPnPAsyncStartCompleteWorker.c)
 *     StorpQueueWorkItem @ 0x1C00470B0 (StorpQueueWorkItem.c)
 *     StorEtwEnableCallback @ 0x1C005A5CC (StorEtwEnableCallback.c)
 *     RaWmiDispatchIrp @ 0x1C0089494 (RaWmiDispatchIrp.c)
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
