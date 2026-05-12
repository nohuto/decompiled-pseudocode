/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x1C0019D9C
 * Callers:
 *     RaidAdapterRequestComplete @ 0x1C000E5C0 (RaidAdapterRequestComplete.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C00105B0 (StorpTelemetryMiniportEventWStr.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C00133C4 (RaUnitDeviceUsageNotificationIrp.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C00139B8 (StorpTelemetryMiniportEventUnit.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C001C3C0 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C001CDA0 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C0020D28 (StorpTelemetryNvmeHealthInfo.c)
 *     RaidAdapterCompleteInitialization @ 0x1C00346D8 (RaidAdapterCompleteInitialization.c)
 *     StorpMarkDeviceFailed @ 0x1C0049684 (StorpMarkDeviceFailed.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C006CDD8 (StorpLogPhysicalTopologyInfo.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1C006D58C (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1C006D8A8 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C006EC10 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C006F0E8 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C006F5C8 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C006F8D8 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C006FC44 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C006FF8C (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C00703CC (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C0070B18 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportLogError @ 0x1C0070E34 (StorpTelemetryMiniportLogError.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C007106C (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C00A15D8 (RaUnitStartDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00A73DC (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall tlgCreate1Sz_wchar_t(__int64 a1, _WORD *a2)
{
  __int64 v2; // rax
  int v3; // r8d

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    v3 = 2 * v2 + 2;
  }
  else
  {
    a2 = &unk_1C0087730;
    v3 = 2;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = 0;
}
