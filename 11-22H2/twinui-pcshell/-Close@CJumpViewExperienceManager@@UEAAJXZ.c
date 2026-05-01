/*
 * XREFs of ?Close@CJumpViewExperienceManager@@UEAAJXZ @ 0x1801AC640
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?revoke@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAAXXZ @ 0x18012C638 (-revoke@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@_ea_18012C638.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?StopMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ @ 0x1801E3C00 (-StopMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@wil@@QEAA_NXZ @ 0x1801E3C78 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CJumpViewExperienceManager::Close(CJumpViewExperienceManager *this)
{
  __int64 v2; // rsi
  int (__fastcall *v3)(__int64, GUID *, GUID *, __int64 *); // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 98) )
  {
    v2 = *((_QWORD *)this + 43);
    if ( v2 )
    {
      v5 = 0LL;
      v3 = *(int (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
      if ( v3(v2, &IID_IActiveZBandNotificationForMonitorService, &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704, &v5) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, *((unsigned int *)this + 98));
      *((_DWORD *)this + 98) = 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
    }
  }
  if ( *((_DWORD *)this + 96) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 46) + 32LL))(*((_QWORD *)this + 46));
    *((_DWORD *)this + 96) = 0;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 46);
  }
  if ( *((_DWORD *)this + 97) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 32LL))(*((_QWORD *)this + 47));
    *((_DWORD *)this + 97) = 0;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 47);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 44);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 43);
  _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAAXXZ((__int64 *)this + 107);
  v5 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(
    (CJumpViewExperienceManager *)((char *)this + 848),
    (winrt::Windows::Foundation::IUnknown *)&v5);
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::GetImpl'::`2'::impl) )
    CJumpViewExperienceManager::StopMouseHoverHook((CJumpViewExperienceManager *)((char *)this - 24));
  return 0LL;
}
