/*
 * XREFs of ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@_E@Z @ 0x1800142A4
 * Callers:
 *     DllMain @ 0x180062AAC (DllMain.c)
 * Callees:
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180096568 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

__int64 (__fastcall *wil::SetResultTelemetryFallback())(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax
  const struct wil::FailureInfo *v1; // rdx
  _BYTE v2[168]; // [rsp+20h] [rbp-A8h] BYREF

  result = wil::details::g_pfnTelemetryCallback;
  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)WindowFrameLoggingTelemetry::FallbackTelemetryCallback )
  {
    memset_0(v2, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v2, v1);
  }
  wil::details::g_pfnTelemetryCallback = (__int64 (__fastcall *)(_QWORD, _QWORD))WindowFrameLoggingTelemetry::FallbackTelemetryCallback;
  return result;
}
