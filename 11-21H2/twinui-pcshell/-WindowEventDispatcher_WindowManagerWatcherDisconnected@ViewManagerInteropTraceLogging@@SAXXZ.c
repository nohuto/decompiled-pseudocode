/*
 * XREFs of ?WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1803FACB4
 * Callers:
 *     _lambda_99fecce93f01391543c16575634a6bf3_::operator() @ 0x1803F9EF8 (_lambda_99fecce93f01391543c16575634a6bf3_--operator().c)
 *     _lambda_aec0846700b42ca4e39c995f67d0b5b9_::operator() @ 0x1803FA32C (_lambda_aec0846700b42ca4e39c995f67d0b5b9_--operator().c)
 *     _lambda_840f656ae392d3edda757dfeed14128c_::operator() @ 0x18040116C (_lambda_840f656ae392d3edda757dfeed14128c_--operator().c)
 *     _lambda_d2a465ae199f4521f0e17712fd5e9c58_::operator() @ 0x180401B68 (_lambda_d2a465ae199f4521f0e17712fd5e9c58_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherDisconnected(__int64 a1)
{
  _DWORD *v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_DWORD *)wil::details::static_lazy<ViewManagerInteropLogging>::get(
                   a1,
                   _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v1, (unsigned __int8 *)dword_1806B2050, 0LL, 0LL, 2u, &v2);
}
