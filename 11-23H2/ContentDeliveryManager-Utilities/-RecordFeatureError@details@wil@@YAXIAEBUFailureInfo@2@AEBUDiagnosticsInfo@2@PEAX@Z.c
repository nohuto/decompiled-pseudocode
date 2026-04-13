/*
 * XREFs of ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18003B644
 * Callers:
 *     ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x180031820 (-ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18003E2A0 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18002B230 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureError(
        wil::details *this,
        const struct wil::FailureInfo *a2,
        const struct DiagnosticsInfo *a3,
        struct DiagnosticsInfo *a4)
{
  unsigned int v4; // ebx
  struct DiagnosticsInfo v5[50]; // [rsp+20h] [rbp-1A8h] BYREF

  v4 = (unsigned int)this;
  wil::details::StagingFailureInformation::StagingFailureInformation(v5, a2, a3, a4);
  if ( g_wil_details_internalRecordFeatureError )
  {
    g_wil_details_internalRecordFeatureError(v4, v5);
  }
  else if ( g_wil_details_apiRecordFeatureError )
  {
    g_wil_details_apiRecordFeatureError(v4, v5);
  }
}
