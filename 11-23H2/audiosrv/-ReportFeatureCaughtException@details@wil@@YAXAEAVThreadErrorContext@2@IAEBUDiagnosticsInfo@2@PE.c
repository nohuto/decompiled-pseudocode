/*
 * XREFs of ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x18011EE78
 * Callers:
 *     ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x18011D110 (-ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18011C468 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x18011D9EC (-GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J.c)
 */

void __fastcall wil::details::ReportFeatureCaughtException(
        wil::details *this,
        struct wil::ThreadErrorContext *a2,
        const struct DiagnosticsInfo *a3,
        const struct DiagnosticsInfo *a4)
{
  unsigned int v5; // edi
  void *v7; // r9
  _BYTE v8[160]; // [rsp+20h] [rbp-258h] BYREF
  struct DiagnosticsInfo v9[50]; // [rsp+C0h] [rbp-1B8h] BYREF

  v5 = (unsigned int)a2;
  memset_0(v8, 0, 0x98uLL);
  if ( wil::ThreadErrorContext::GetCaughtExceptionError(this, (struct wil::FailureInfo *)v8, a3) )
  {
    wil::details::StagingFailureInformation::StagingFailureInformation(v9, (const struct wil::FailureInfo *)v8, a3, v7);
    if ( g_wil_details_internalRecordFeatureError )
    {
      g_wil_details_internalRecordFeatureError(v5, v9);
    }
    else if ( g_wil_details_apiRecordFeatureError )
    {
      g_wil_details_apiRecordFeatureError(v5, v9);
    }
  }
}
