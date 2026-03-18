/*
 * XREFs of ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C01D3A34
 * Callers:
 *     ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x1C01BDE40 (-AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C01BFBD4 (-CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C01D3AE4 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ReleasePointerCapture(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v6; // rdx
  struct CPointerCaptureInfo *v8; // rbx
  __int64 v9; // r8

  v3 = a3;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v6 = *(_QWORD *)(a2 + 40);
  if ( !v6 )
    return 0LL;
  v8 = (struct CPointerCaptureInfo *)((v3 != 0 ? 0x88 : 0) + v6 + 32);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_Wmasfot__private_reporting,
    29140109LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
    1,
    3);
  CTouchProcessor::CheckAndDismissWindowResizeHighlight(this, v8, v9);
  CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, v8);
  return 1LL;
}
