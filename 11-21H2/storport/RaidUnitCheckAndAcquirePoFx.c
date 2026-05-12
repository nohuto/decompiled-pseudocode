/*
 * XREFs of RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8
 * Callers:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C00015CC (RaidUnitAdaptiveIdleTimeout.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0003640 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaidStartIoPacket @ 0x1C0009C70 (RaidStartIoPacket.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C000C2D0 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C000C400 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     StorPortUnitIdleCondition @ 0x1C000C470 (StorPortUnitIdleCondition.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C000C7B4 (StorUpdateCrashDumpPowerReady.c)
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C000FA68 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00117BC (RaidUnitPoFxIdleComponent.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C0016BAC (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0016D0C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorPortUnitIdleState @ 0x1C0025000 (StorPortUnitIdleState.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C003B960 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0042078 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C0048AF0 (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C0049D28 (RaidUnitCancelWaitWakeIrp.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C0049DA0 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C0049EF0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitMaintenanceTime @ 0x1C0049F84 (RaidUnitMaintenanceTime.c)
 *     RaidUnitPowerSettingCallback @ 0x1C004A150 (RaidUnitPowerSettingCallback.c)
 *     StorPortUnitDirectedPowerDown @ 0x1C004AE40 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerDownCompletion @ 0x1C004AF60 (StorPortUnitDirectedPowerDownCompletion.c)
 *     StorPortUnitDirectedPowerUp @ 0x1C004B300 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C004B62C (StorPortUnitPoFxD0Completion.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C004B780 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C004B870 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C004B990 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C004BD30 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitPowerCapIoctl @ 0x1C0051740 (RaUnitPowerCapIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C0053284 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C0053310 (RaUnitStoragePowerIdle.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0056138 (RaidUnitSubmitResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C005DF98 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C005E3EC (StorpCSExitTelemetry.c)
 *     RaidUnitCreateDumpData @ 0x1C0085160 (RaidUnitCreateDumpData.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0088388 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0089D80 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidUnitCheckAndAcquirePoFx(__int64 a1)
{
  BOOLEAN result; // al

  result = 0;
  if ( *(char *)(a1 + 449) < 0 )
    return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  return result;
}
