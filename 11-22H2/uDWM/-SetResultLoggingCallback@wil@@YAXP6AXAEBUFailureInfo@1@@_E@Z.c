/*
 * XREFs of ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z @ 0x180058488
 * Callers:
 *     DllMain @ 0x18005F354 (DllMain.c)
 * Callees:
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18009E0C8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

__int64 wil::SetResultLoggingCallback()
{
  __int64 result; // rax
  const struct wil::FailureInfo *v1; // rdx
  _BYTE v2[168]; // [rsp+20h] [rbp-A8h] BYREF

  result = wil::details::g_pfnLoggingCallback;
  if ( wil::details::g_pfnLoggingCallback
    && (void (__fastcall *)(const struct wil::FailureInfo *))wil::details::g_pfnLoggingCallback != WilResultLoggingCallback_MaybeFailFast )
  {
    memset_0(v2, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v2, v1);
  }
  wil::details::g_pfnLoggingCallback = (__int64)WilResultLoggingCallback_MaybeFailFast;
  return result;
}
