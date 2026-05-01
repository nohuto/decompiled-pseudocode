/*
 * XREFs of ??$WindowEventDispatcher_OnAppViewActivationShowRequested@H@ViewManagerInteropTraceLogging@@SAX$$QEAH@Z @ 0x18005961C
 * Callers:
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800592A0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewActivationShowRequested<int>(int *a1)
{
  __int64 result; // rax
  _DWORD *v3; // rcx
  int v4; // eax
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  result = wil::details::static_lazy<ViewManagerInteropLogging>::get(
             a1,
             _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v3 = *(_DWORD **)(result + 8);
  if ( *v3 > 5u )
  {
    v4 = *a1;
    v9 = 0;
    v5 = v4;
    v8 = 4;
    v7 = &v5;
    return tlgWriteTransfer_EventWriteTransfer((int)v3, (int)&dword_1806B14C3, 0, 0, 3u, &v6);
  }
  return result;
}
