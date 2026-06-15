/*
 * XREFs of ?FallbackTelemetryCallback@AudioSrvTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x1800C3760
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 */

void __fastcall AudioSrvTelemetryProvider::FallbackTelemetryCallback(__int64 a1, const struct wil::FailureInfo *a2)
{
  char v3; // di
  __int64 *v4; // rax
  __int64 v5; // rdx

  v3 = a1;
  v4 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  LOBYTE(v5) = v3;
  (*(void (__fastcall **)(__int64 *, __int64, const struct wil::FailureInfo *))(*v4 + 16))(v4, v5, a2);
}
