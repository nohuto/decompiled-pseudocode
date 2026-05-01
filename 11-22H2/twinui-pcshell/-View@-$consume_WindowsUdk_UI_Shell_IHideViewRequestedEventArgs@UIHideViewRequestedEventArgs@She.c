/*
 * XREFs of ?View@?$consume_WindowsUdk_UI_Shell_IHideViewRequestedEventArgs@UIHideViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005C828
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_5e82962a6040908e6ed2656b2b7c60f3___::Invoke @ 0x18005C7B0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18005C7B0.c)
 *     _lambda_2e8c3009fb6c7eb5169b41625b9541b8_::operator() @ 0x1804175A0 (_lambda_2e8c3009fb6c7eb5169b41625b9541b8_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IHideViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IHideViewRequestedEventArgs>::View(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 48LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  return v4;
}
