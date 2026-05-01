/*
 * XREFs of ?WindowEventDispatcher_OnAppViewWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1803FABE4
 * Callers:
 *     ?OnAppViewWatcherStopped@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1803FA850 (-OnAppViewWatcherStopped@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@Applicat.c)
 *     ?OnUwpWindowWatcherStopped@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1804027B0 (-OnUwpWindowWatcherStopped@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindow.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewWatcherStopped(__int64 a1)
{
  _DWORD *v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_DWORD *)wil::details::static_lazy<ViewManagerInteropLogging>::get(
                   a1,
                   _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v1, (unsigned __int8 *)dword_1806B1FD8, 0LL, 0LL, 2u, &v2);
}
