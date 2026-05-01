/*
 * XREFs of ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z @ 0x18017E8B4
 * Callers:
 *     DllMain @ 0x18018F894 (DllMain.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1802D9BA8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

__int64 (__fastcall *__fastcall wil::SetResultLoggingCallback(__int64 (__fastcall *a1)(_QWORD)))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  const struct wil::FailureInfo *v2; // rdx
  _BYTE v3[168]; // [rsp+20h] [rbp-A8h] BYREF

  result = wil::details::g_pfnLoggingCallback;
  if ( wil::details::g_pfnLoggingCallback && a1 && wil::details::g_pfnLoggingCallback != a1 )
  {
    memset_0(v3, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v3, v2);
  }
  wil::details::g_pfnLoggingCallback = a1;
  return result;
}
