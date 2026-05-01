/*
 * XREFs of ?StartInvokeAnimation@TouchEdgeGripperWindow@@AEAAXXZ @ 0x18065C6A4
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_f88d4aa7a173ec7d874197d211fc8411___::Invoke @ 0x18065B730 (winrt--impl--delegate_winrt--Windows--UI--Xaml--RoutedEventHandler__lambda_f88d4aa7a173ec7d87419.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StartAnimation@?$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@@Z @ 0x18065C2EC (-StartAnimation@-$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchEdgeGripperWindow::StartInvokeAnimation(TouchEdgeGripperWindow *this)
{
  __int64 *v1; // rdi
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-38h] BYREF

  v1 = (__int64 *)((char *)this + 120);
  v2 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*((_QWORD *)this + 17);
  if ( v2 )
  {
    v7 = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v7);
    v3 = v7;
    v6 = v7;
  }
  else
  {
    v6 = 0LL;
    v3 = 0LL;
  }
  winrt::impl::consume_Windows_UI_Xaml_IUIElement9<winrt::Windows::UI::Xaml::UIElement>::StartAnimation(v1, &v6);
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  v5 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                   v4,
                   (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_18087187F, 0LL, 0LL, 2u, &v8);
}
