/*
 * XREFs of ?WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180098650
 * Callers:
 *     ?UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x180097A50 (-UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?UnregisterForViewEvents@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x1803F2A90 (-UnregisterForViewEvents@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_UnregisteringForWindowEvents(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int16 *v2; // rax
  REGHANDLE v3; // rcx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  void *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v1 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
         a1,
         _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v1 > 5u )
  {
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v2 = *(unsigned __int16 **)(v1 + 8);
    v3 = *(_QWORD *)(v1 + 32);
    UserData.Ptr = (ULONGLONG)v2;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v2;
    v6 = &unk_1806B18A1;
    UserData.Reserved = 2;
    v7 = 54;
    v8 = 1;
    EventWriteTransfer(v3, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
}
