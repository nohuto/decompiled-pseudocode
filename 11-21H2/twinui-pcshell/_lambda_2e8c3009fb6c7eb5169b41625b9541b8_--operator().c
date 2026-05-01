/*
 * XREFs of _lambda_2e8c3009fb6c7eb5169b41625b9541b8_::operator() @ 0x18034D410
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_2e8c3009fb6c7eb5169b41625b9541b8___::Invoke @ 0x18034EAC0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18034EAC0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IHideViewRequestedEventArgs@UIHideViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AW4ShellView@Shell@UI@WindowsUdk@3@XZ @ 0x1800FABF4 (-View@-$consume_WindowsUdk_UI_Shell_IHideViewRequestedEventArgs@UIHideViewRequestedEventArgs@She.c)
 *     ??$As@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180177960 (--$As@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?SetVisibilityWithoutAnimations@CActionCenterExperienceManager@@UEAAJE@Z @ 0x18034F800 (-SetVisibilityWithoutAnimations@CActionCenterExperienceManager@@UEAAJE@Z.c)
 *     ?put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z @ 0x180351720 (-put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_2e8c3009fb6c7eb5169b41625b9541b8_::operator()(
        _QWORD *a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 *a3)
{
  signed int v6; // eax
  CActionCenterExperienceManager *v7; // rcx
  int v8; // [rsp+40h] [rbp+8h] BYREF
  winrt::Windows::Foundation::IUnknown *v9; // [rsp+48h] [rbp+10h]
  __int64 *v10; // [rsp+50h] [rbp+18h]
  struct IInspectable *v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a2;
  v11 = 0LL;
  Microsoft::WRL::WeakRef::As<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
    (Microsoft::WRL::WeakRef *)(a1 + 1),
    &v11);
  if ( v11
    && !(unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IHideViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IHideViewRequestedEventArgs>::View(a3) )
  {
    v8 = 0;
    v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)*a3 + 56LL))(*a3, &v8);
    if ( v6 < 0 )
      winrt::throw_hresult(v6);
    v7 = (CActionCenterExperienceManager *)(*a1 + 24LL);
    if ( v8 == 1 )
      CActionCenterExperienceManager::SetVisibilityWithoutAnimations(v7, 0);
    else
      CActionCenterExperienceManager::put_IsVisible(v7, 0);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  if ( *a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a3);
}
