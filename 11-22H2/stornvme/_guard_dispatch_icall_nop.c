/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1C00047E0
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00028F0 (NVMeCompletionDpcRoutine.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0003C6C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0003CE8 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0003DD4 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     StorNVMeDriverUnload @ 0x1C00044D0 (StorNVMeDriverUnload.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1C0004800 (_guard_xfg_dispatch_icall_nop.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000C6F4 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C000CC80 (NVMeControllerAsyncResetWorker.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025504 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
