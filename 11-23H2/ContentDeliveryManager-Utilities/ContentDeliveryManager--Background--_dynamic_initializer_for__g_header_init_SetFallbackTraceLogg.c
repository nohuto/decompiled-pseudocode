/*
 * XREFs of ContentDeliveryManager::Background::_dynamic_initializer_for__g_header_init_SetFallbackTraceLoggingProvider__ @ 0x180004520
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180042338 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

__int64 ContentDeliveryManager::Background::_dynamic_initializer_for__g_header_init_SetFallbackTraceLoggingProvider__()
{
  __int64 result; // rax
  const struct wil::FailureInfo *v1; // rdx
  _BYTE v2[168]; // [rsp+20h] [rbp-A8h] BYREF

  result = wil::details::g_pfnTelemetryCallback;
  if ( wil::details::g_pfnTelemetryCallback
    && (void (*)(bool, const struct wil::FailureInfo *))wil::details::g_pfnTelemetryCallback != ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::FallbackTelemetryCallback )
  {
    memset_0(v2, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v2, v1);
  }
  wil::details::g_pfnTelemetryCallback = (__int64)ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::FallbackTelemetryCallback;
  g_header_init_SetFallbackTraceLoggingProvider = 1;
  return result;
}
