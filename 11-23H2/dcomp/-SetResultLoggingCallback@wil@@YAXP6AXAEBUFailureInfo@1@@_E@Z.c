/*
 * XREFs of ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z @ 0x18008DFC0
 * Callers:
 *     DllMain @ 0x18009C1A4 (DllMain.c)
 * Callees:
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800E53E8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

__int64 (__fastcall *wil::SetResultLoggingCallback())(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  const struct wil::FailureInfo *v1; // rdx
  _BYTE v2[168]; // [rsp+20h] [rbp-A8h] BYREF

  result = wil::details::g_pfnLoggingCallback;
  if ( wil::details::g_pfnLoggingCallback
    && (char *)wil::details::g_pfnLoggingCallback != (char *)WilResultLoggingCallback_MaybeFailFast )
  {
    memset_0(v2, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v2, v1);
  }
  wil::details::g_pfnLoggingCallback = (__int64 (__fastcall *)(_QWORD))WilResultLoggingCallback_MaybeFailFast;
  return result;
}
