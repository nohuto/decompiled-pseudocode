/*
 * XREFs of ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x180043904
 * Callers:
 *     ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x1800324B0 (-ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x1800351A0 (-GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J.c)
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18003FC10 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 */

void __fastcall wil::details::ReportFeatureCaughtException(
        wil::details *this,
        struct wil::ThreadErrorContext *a2,
        struct DiagnosticsInfo *a3,
        const struct DiagnosticsInfo *a4)
{
  unsigned int v5; // esi
  const struct DiagnosticsInfo *v7; // r9
  unsigned int v8[40]; // [rsp+20h] [rbp-A8h] BYREF

  v5 = (unsigned int)a2;
  memset_0(v8, 0, 0x98uLL);
  if ( wil::ThreadErrorContext::GetCaughtExceptionError(this, (struct wil::FailureInfo *)v8, a3) )
    wil::details::RecordFeatureError((wil::details *)v5, (__int64)v8, (const struct wil::FailureInfo *)a3, v7);
}
