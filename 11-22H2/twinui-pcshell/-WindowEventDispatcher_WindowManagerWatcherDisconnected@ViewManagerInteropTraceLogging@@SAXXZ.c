/*
 * XREFs of ?WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1804DADC8
 * Callers:
 *     _lambda_99fecce93f01391543c16575634a6bf3_::operator() @ 0x1804D884C (_lambda_99fecce93f01391543c16575634a6bf3_--operator().c)
 *     _lambda_aec0846700b42ca4e39c995f67d0b5b9_::operator() @ 0x1804D8C64 (_lambda_aec0846700b42ca4e39c995f67d0b5b9_--operator().c)
 *     _lambda_420994182feb68798a6ba33cec143f0f_::operator() @ 0x1804DFBFC (_lambda_420994182feb68798a6ba33cec143f0f_--operator().c)
 *     _lambda_71ff6fbdffe959cf5c08784a2795046e_::operator() @ 0x1804DFF84 (_lambda_71ff6fbdffe959cf5c08784a2795046e_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherDisconnected(__int64 a1)
{
  _DWORD *v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_DWORD *)wil::details::static_lazy<ViewManagerInteropLogging>::get(
                   a1,
                   _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v1, (unsigned __int8 *)dword_1808595D9, 0LL, 0LL, 2u, &v2);
}
