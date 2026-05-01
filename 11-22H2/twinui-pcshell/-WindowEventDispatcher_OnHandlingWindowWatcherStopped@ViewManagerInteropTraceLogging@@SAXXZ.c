/*
 * XREFs of ?WindowEventDispatcher_OnHandlingWindowWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1804DAD60
 * Callers:
 *     ?OnWindowWatcherStopped@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1804D9F50 (-OnWindowWatcherStopped@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@Applicatio.c)
 *     ?OnWindowWatcherStopped@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1804E05F0 (-OnWindowWatcherStopped@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@Applica.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_OnHandlingWindowWatcherStopped(__int64 a1)
{
  _DWORD *v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_DWORD *)wil::details::static_lazy<ViewManagerInteropLogging>::get(
                   a1,
                   _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v1, (unsigned __int8 *)dword_18085961F, 0LL, 0LL, 2u, &v2);
}
