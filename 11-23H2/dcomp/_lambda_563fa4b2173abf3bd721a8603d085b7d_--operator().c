/*
 * XREFs of _lambda_563fa4b2173abf3bd721a8603d085b7d_::operator() @ 0x18008CECC
 * Callers:
 *     _dynamic_initializer_for__g_header_init_ResultStowedExceptionInitialize__ @ 0x1800018A0 (_dynamic_initializer_for__g_header_init_ResultStowedExceptionInitialize__.c)
 * Callees:
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800E53E8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

__int64 lambda_563fa4b2173abf3bd721a8603d085b7d_::operator()()
{
  const struct wil::FailureInfo *v1; // rdx
  const struct wil::FailureInfo *v2; // rdx
  _BYTE v3[168]; // [rsp+20h] [rbp-A8h] BYREF

  if ( wil::details::g_pfnOriginateCallback
    && (char *)wil::details::g_pfnOriginateCallback != (char *)wil::details::RaiseRoOriginateOnWilExceptions )
  {
    memset_0(v3, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v3, v1);
  }
  wil::details::g_pfnOriginateCallback = (__int64 (__fastcall *)(_QWORD))wil::details::RaiseRoOriginateOnWilExceptions;
  if ( wil::details::g_pfnFailfastWithContextCallback
    && (void (__fastcall *)(wil::details *__hidden, const struct wil::FailureInfo *))wil::details::g_pfnFailfastWithContextCallback != wil::details::FailfastWithContextCallback )
  {
    memset_0(v3, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v3, v2);
  }
  wil::details::g_pfnFailfastWithContextCallback = (__int64)wil::details::FailfastWithContextCallback;
  return 1LL;
}
