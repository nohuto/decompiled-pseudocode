/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1C00049B0
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002A40 (NVMeCompletionDpcRoutine.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0003DC0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0003E48 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0003F38 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     StorNVMeDriverUnload @ 0x1C00046A0 (StorNVMeDriverUnload.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1C00049D0 (_guard_xfg_dispatch_icall_nop.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000C774 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C000CD00 (NVMeControllerAsyncResetWorker.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
