/*
 * XREFs of _tlgKeywordOn @ 0x1C0019F3C
 * Callers:
 *     RaidAdapterRequestComplete @ 0x1C000E5C0 (RaidAdapterRequestComplete.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C00105B0 (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C001272C (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C00133C4 (RaUnitDeviceUsageNotificationIrp.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C00139B8 (StorpTelemetryMiniportEventUnit.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C001C3C0 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C001C880 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001C918 (RaUnitTelemetryIdIoctl.c)
 *     StorpLogPerAdapterStatistics @ 0x1C001CC3C (StorpLogPerAdapterStatistics.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C001CDA0 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C0020D28 (StorpTelemetryNvmeHealthInfo.c)
 *     RaidAdapterCompleteInitialization @ 0x1C00346D8 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterResetBus @ 0x1C00379D0 (RaidAdapterResetBus.c)
 *     StorpMarkDeviceFailed @ 0x1C0049684 (StorpMarkDeviceFailed.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C004BF18 (RaidAdapterSetMaxOperationalPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C004C570 (RaidRegisterForRuntimePowerManagement.c)
 *     RaUnitStartResetIo @ 0x1C005F780 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00610B0 (RaidUnitCompleteResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C006B4FC (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C006B950 (StorpCSExitTelemetry.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C006CDD8 (StorpLogPhysicalTopologyInfo.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C006D3D0 (StorpLogRegisterAdapterPerfStates.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1C006D58C (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1C006D8A8 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C006EC10 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C006F0E8 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C006F5C8 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C006F8D8 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C006FC44 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C006FF8C (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C00703CC (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C0070804 (StorpTelemetryMarkUnitResponsive.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0070974 (StorpTelemetryMarkUnitUnresponsive.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C0070B18 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportLogError @ 0x1C0070E34 (StorpTelemetryMiniportLogError.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C007106C (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0071388 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaUnitStartDeviceIrp @ 0x1C00A15D8 (RaUnitStartDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00A73DC (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidInitializeAdapter @ 0x1C00A7724 (RaidInitializeAdapter.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & qword_1C00920D8) != 0 && (a2 & qword_1C00920E0) == qword_1C00920E0 )
    return 1;
  return v2;
}
