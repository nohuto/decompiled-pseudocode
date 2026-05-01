/*
 * XREFs of ?WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1800628C8
 * Callers:
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x180062710 (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 *     ?StartUalmWatcher@UwpWindowManagerBridge@@AEAAJXZ @ 0x1804037F0 (-StartUalmWatcher@UwpWindowManagerBridge@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewWatcherStarted(__int64 a1)
{
  _DWORD *v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_DWORD **)(wil::details::static_lazy<ViewManagerInteropLogging>::get(
                      a1,
                      _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 5u )
    tlgWriteTransfer_EventWriteTransfer((int)v1, (int)&dword_1806B2015, 0, 0, 2u, &v2);
}
