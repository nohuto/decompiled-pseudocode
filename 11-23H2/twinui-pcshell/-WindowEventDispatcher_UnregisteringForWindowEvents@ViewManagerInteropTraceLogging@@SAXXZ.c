/*
 * XREFs of ?WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18009E08C
 * Callers:
 *     ?UnregisterForViewEvents@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x18009DF70 (-UnregisterForViewEvents@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x1804CB800 (-UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_UnregisteringForWindowEvents(__int64 a1)
{
  _DWORD *v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_DWORD **)(wil::details::static_lazy<ViewManagerInteropLogging>::get(
                      a1,
                      _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 5u )
    tlgWriteTransfer_EventWriteTransfer((int)v1, (int)&dword_180858D3B, 0, 0, 2u, &v2);
}
