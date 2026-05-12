/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x1C0019338
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001E48 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     RaidAdapterRequestComplete @ 0x1C0010E50 (RaidAdapterRequestComplete.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C001319C (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C0013718 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017AEC (RaUnitDeviceUsageNotificationIrp.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C0018B30 (StorpTelemetryMiniportEventWStr.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0020490 (StorpLogPhysicalTopologyInfo.c)
 *     RaidAdapterCompleteInitialization @ 0x1C0033A68 (RaidAdapterCompleteInitialization.c)
 *     StorpMarkDeviceFailed @ 0x1C0046668 (StorpMarkDeviceFailed.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1C005F95C (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1C005FC78 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C00608A8 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C0060D80 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0061260 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0061570 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C00618DC (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C0061C24 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C0062430 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C006274C (StorpTelemetryMiniportEventUnit.c)
 *     StorpTelemetryMiniportLogError @ 0x1C0062C18 (StorpTelemetryMiniportLogError.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C0062FA4 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C00632C0 (StorpTelemetryNvmeHealthInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C0087C34 (RaUnitStartDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C008CE90 (RaidAdapterSurpriseRemovalIrp.c)
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
    a2 = &unk_1C0070530;
    v3 = 2;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = 0;
}
