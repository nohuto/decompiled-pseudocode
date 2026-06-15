/*
 * XREFs of ?FallbackTelemetryCallback@AudioDgTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x14001C7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 */

void __fastcall AudioDgTelemetryProvider::FallbackTelemetryCallback(__int64 a1, const struct wil::FailureInfo *a2)
{
  char v3; // di
  __int64 *v4; // rax
  __int64 v5; // rdx

  v3 = a1;
  v4 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
         a1,
         _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
  LOBYTE(v5) = v3;
  (*(void (__fastcall **)(__int64 *, __int64, const struct wil::FailureInfo *))(*v4 + 16))(v4, v5, a2);
}
