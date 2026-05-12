/*
 * XREFs of RaidUnitCheckAndAcquirePoFx @ 0x1C0008978
 * Callers:
 *     RaidStartIoPacket @ 0x1C00050F0 (RaidStartIoPacket.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0008784 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0008870 (RaidUnitPoFxActivateComponent.c)
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000FC84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00121D4 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C00124B0 (StorUpdateCrashDumpPowerReady.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C001272C (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C00127AC (StorPortUnitPoFxD0Completion.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C0012890 (RaidUnitCancelWaitWakeIrp.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C001A1F8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C001A298 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     StorPortUnitIdleState @ 0x1C0024F60 (StorPortUnitIdleState.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C004BACC (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C004D120 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C004D2B0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitMaintenanceTime @ 0x1C004D344 (RaidUnitMaintenanceTime.c)
 *     RaidUnitPowerSettingCallback @ 0x1C004D510 (RaidUnitPowerSettingCallback.c)
 *     StorPortUnitDirectedPowerDown @ 0x1C004E820 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerDownCompletion @ 0x1C004E940 (StorPortUnitDirectedPowerDownCompletion.c)
 *     StorPortUnitDirectedPowerUp @ 0x1C004ECF0 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C004F038 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C004F140 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C004F230 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C004F350 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C004F6F0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitPowerCapIoctl @ 0x1C005E0FC (RaUnitPowerCapIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C005FC48 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C005FCD4 (RaUnitStoragePowerIdle.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0062F04 (RaidUnitSubmitResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C006B4FC (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C006B950 (StorpCSExitTelemetry.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0071388 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C00A2EDC (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C00A370C (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaidUnitCreateDumpData @ 0x1C00AA828 (RaidUnitCreateDumpData.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidUnitCheckAndAcquirePoFx(__int64 a1)
{
  BOOLEAN result; // al

  result = 0;
  if ( *(char *)(a1 + 449) < 0 )
    return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  return result;
}
