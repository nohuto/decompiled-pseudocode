/*
 * XREFs of ?StartAnimation@?$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@@Z @ 0x18065C2EC
 * Callers:
 *     ?StartDismissAnimation@TouchEdgeGripperWindow@@AEAAXXZ @ 0x18065C390 (-StartDismissAnimation@TouchEdgeGripperWindow@@AEAAXXZ.c)
 *     ?StartInvokeAnimation@TouchEdgeGripperWindow@@AEAAXXZ @ 0x18065C6A4 (-StartInvokeAnimation@TouchEdgeGripperWindow@@AEAAXXZ.c)
 *     ?StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180776240 (-StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     ?StartInvokeAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18077661C (-StartInvokeAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement9<winrt::Windows::UI::Xaml::UIElement>::StartAnimation(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  signed int v5; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    v6 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v3)(
      v3,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement9>,
      &v6);
    v3 = v6;
    v4 = v6;
  }
  else
  {
    v4 = 0LL;
  }
  v7 = v3;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 224LL))(v3, *a2);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
}
