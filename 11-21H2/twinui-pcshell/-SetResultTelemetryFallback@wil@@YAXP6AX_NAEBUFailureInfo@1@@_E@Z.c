/*
 * XREFs of ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@_E@Z @ 0x18017C7A4
 * Callers:
 *     _dynamic_initializer_for__g_header_init_ResultLoggingInitialize__ @ 0x180002710 (_dynamic_initializer_for__g_header_init_ResultLoggingInitialize__.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1802D9BA8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

__int64 (__fastcall *wil::SetResultTelemetryFallback())(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax
  const struct wil::FailureInfo *v1; // rdx
  _BYTE v2[168]; // [rsp+20h] [rbp-A8h] BYREF

  result = wil::details::g_pfnTelemetryCallback;
  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)wil::ErrorHandlingHelpers::FallbackTelemetryCallback )
  {
    memset_0(v2, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v2, v1);
  }
  wil::details::g_pfnTelemetryCallback = (__int64 (__fastcall *)(_QWORD, _QWORD))wil::ErrorHandlingHelpers::FallbackTelemetryCallback;
  return result;
}
