/*
 * XREFs of PpmConvertTime @ 0x14029394C
 * Callers:
 *     PopGetIdleTimesCallback @ 0x140293600 (PopGetIdleTimesCallback.c)
 *     PpmUpdateTimeAccumulation @ 0x1402939BC (PpmUpdateTimeAccumulation.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140304CE0 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmSnapPerformanceAccumulation @ 0x1403051E0 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     PpmConvertTimeTo @ 0x140387A68 (PpmConvertTimeTo.c)
 *     PopCalculateCsSummary @ 0x140397424 (PopCalculateCsSummary.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140399210 (PpmSnapDripsAccountingSnapshot.c)
 *     PopCalculateIdleInformation @ 0x14039AD4C (PopCalculateIdleInformation.c)
 *     PoNotifySystemTimeSet @ 0x1403B65EC (PoNotifySystemTimeSet.c)
 *     PpmParkApplyPolicy @ 0x1403CEDC4 (PpmParkApplyPolicy.c)
 *     PpmApplyIdlePolicy @ 0x1403D1F00 (PpmApplyIdlePolicy.c)
 *     PpmConvertTimeFrom @ 0x1403D81D0 (PpmConvertTimeFrom.c)
 *     PpmGetThroughputInfoCallback @ 0x14045E870 (PpmGetThroughputInfoCallback.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1405C7D34 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmTraceExitLatency @ 0x1405C8ECC (PpmTraceExitLatency.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1405D1548 (PopDiagTraceCsResiliencyExit.c)
 *     PpmTranslateIdleAccounting @ 0x1405D73F0 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x1405D7630 (PpmTranslatePlatformIdleAccounting.c)
 *     PopDiagTraceHiberStats @ 0x1407FDC18 (PopDiagTraceHiberStats.c)
 *     PopCalculateWakeTimeAdjustment @ 0x1408052DC (PopCalculateWakeTimeAdjustment.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140A48CA4 (PopDiagComputeEarlyHiberStats.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140A529EC (PopSstDiagInitializeResumeTimer.c)
 *     PpmInitIdlePolicy @ 0x140B25110 (PpmInitIdlePolicy.c)
 *     PopInitDripsWakeAccounting @ 0x140B29B34 (PopInitDripsWakeAccounting.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmConvertTime(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9

  v3 = a1;
  if ( a1 && a2 && a2 != a3 )
  {
    if ( is_mul_ok(a1, a3) )
      return a1 * (unsigned __int128)a3 / a2;
    else
      return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
  }
  return v3;
}
