/*
 * XREFs of ?FallbackTelemetryCallback@AudioSrvPolicyManagerTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x18001C690
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicyManagerTelemetryProvider@@P6AXXZ@Z @ 0x180011580 (-get@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicy.c)
 */

void __fastcall AudioSrvPolicyManagerTelemetryProvider::FallbackTelemetryCallback(
        __int64 a1,
        const struct wil::FailureInfo *a2)
{
  char v3; // di
  LPVOID v4; // rax
  __int64 v5; // rdx

  v3 = a1;
  v4 = wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::get(
         a1,
         (void (__cdecl *)())_lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_);
  LOBYTE(v5) = v3;
  (*(void (__fastcall **)(LPVOID, __int64, const struct wil::FailureInfo *))(*(_QWORD *)v4 + 16LL))(v4, v5, a2);
}
