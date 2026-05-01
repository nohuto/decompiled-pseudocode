/*
 * XREFs of ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18050C644
 * Callers:
 *     ??_GTouchKeyboardExperienceManager@@EEAAPEAXI@Z @ 0x18050D524 (--_GTouchKeyboardExperienceManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800A5C6C (-UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A6D50 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800A6DD0 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ @ 0x1800D3E20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x18012D354 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x1801A1054 (--1-$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@-$abi.c)
 *     ??1InputAppPreloader@KeyboardHosting@@QEAA@XZ @ 0x1801B32E0 (--1InputAppPreloader@KeyboardHosting@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@1@@Z @ 0x18050AAD0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@.c)
 *     ??1TouchKeyboardThemeInfo@TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18050CD34 (--1TouchKeyboardThemeInfo@TouchKeyboardExperienceManager@@QEAA@XZ.c)
 *     ?revoke@?$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAAXXZ @ 0x18051D5C0 (-revoke@-$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@.c)
 */

void __fastcall TouchKeyboardExperienceManager::~TouchKeyboardExperienceManager(TouchKeyboardExperienceManager *this)
{
  __int64 *v2; // r15
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct wil::details::wnf_subscription_state_base *v6; // rdx
  wil::details *v7; // rcx
  wil::details *v8; // rcx
  wil::details *v9; // rcx
  wil::details *v10; // rcx
  wil::details *v11; // rcx
  wil::details *v12; // rcx
  wil::details *v13; // rcx
  wil::details *v14; // rcx
  wil::details *v15; // rcx
  wil::details *v16; // rcx
  wil::details *v17; // rcx
  wil::details *v18; // rcx
  wil::details *v19; // rcx
  wil::details *v20; // rcx
  wil::details *v21; // rcx
  wil::details *v22; // rcx
  wil::details *v23; // rcx
  wil::details *v24; // rcx
  wil::details *v25; // rcx
  wil::details *v26; // rcx
  void *v27; // rcx
  std::_Ref_count_base *v28; // rcx
  __int64 v29; // rdx
  void *v30; // rbx
  void *v31; // rcx
  HWINEVENTHOOK v32; // rcx
  HWINEVENTHOOK v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rsi
  std::_Ref_count_base *v36; // rcx
  struct wil::details::wnf_subscription_state_base *v37; // rdx
  wil::details *v38; // rcx
  wil::details *v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rbx
  RTL_SRWLOCK *v42; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v43; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)this = &TouchKeyboardExperienceManager::`vftable';
  *((_QWORD *)this + 1) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 6) = &TouchKeyboardExperienceManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 15) = &TouchKeyboardExperienceManager::`vftable'{for `IApplicationFrameEventHandler'};
  *((_QWORD *)this + 16) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 17) = &TouchKeyboardExperienceManager::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 18) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 19) = &TouchKeyboardExperienceManager::`vftable'{for `IApplicationStateChangeHandler'};
  *((_QWORD *)this + 20) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 21) = &TouchKeyboardExperienceManager::`vftable'{for `IGlobalRudeWindowNotifications'};
  *((_QWORD *)this + 22) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 23) = &TouchKeyboardExperienceManager::`vftable'{for `IDWMStoryboardListener'};
  *((_QWORD *)this + 24) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 25) = &TouchKeyboardExperienceManager::`vftable'{for `Windows::Internal::Shell::Text::IInputExperienceHost'};
  *((_QWORD *)this + 26) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  TouchKeyboardExperienceManager::s_currentTouchKeyboardExperienceManager = 0LL;
  v2 = (__int64 *)((char *)this + 808);
  v3 = *((_QWORD *)this + 101);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
  }
  v4 = *((_QWORD *)this + 102);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 102);
  }
  v5 = *((_QWORD *)this + 103);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 96LL))(v5);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 103);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 100);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl) )
    _revoke___event_revoker_UITapInvokeSetting_TouchKeyboard_Shell_Internal_Windows_winrt___MP8type___abi_UITapInvokeSetting_TouchKeyboard_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAAXXZ((char *)this + 2200);
  TouchKeyboardExperienceManager::UnsubscribeTouchKeyboardWnfNotifications(this);
  v7 = (wil::details *)*((_QWORD *)this + 297);
  if ( v7 )
    wil::details::delete_wnf_subscription_state(v7, v6);
  v8 = (wil::details *)*((_QWORD *)this + 296);
  if ( v8 )
    wil::details::delete_wnf_subscription_state(v8, v6);
  v9 = (wil::details *)*((_QWORD *)this + 295);
  if ( v9 )
    wil::details::delete_wnf_subscription_state(v9, v6);
  v10 = (wil::details *)*((_QWORD *)this + 294);
  if ( v10 )
    wil::details::delete_wnf_subscription_state(v10, v6);
  v11 = (wil::details *)*((_QWORD *)this + 293);
  if ( v11 )
    wil::details::delete_wnf_subscription_state(v11, v6);
  v12 = (wil::details *)*((_QWORD *)this + 292);
  if ( v12 )
    wil::details::delete_wnf_subscription_state(v12, v6);
  v13 = (wil::details *)*((_QWORD *)this + 291);
  if ( v13 )
    wil::details::delete_wnf_subscription_state(v13, v6);
  v14 = (wil::details *)*((_QWORD *)this + 290);
  if ( v14 )
    wil::details::delete_wnf_subscription_state(v14, v6);
  v15 = (wil::details *)*((_QWORD *)this + 289);
  if ( v15 )
    wil::details::delete_wnf_subscription_state(v15, v6);
  v16 = (wil::details *)*((_QWORD *)this + 288);
  if ( v16 )
    wil::details::delete_wnf_subscription_state(v16, v6);
  v17 = (wil::details *)*((_QWORD *)this + 287);
  if ( v17 )
    wil::details::delete_wnf_subscription_state(v17, v6);
  v18 = (wil::details *)*((_QWORD *)this + 286);
  if ( v18 )
    wil::details::delete_wnf_subscription_state(v18, v6);
  v19 = (wil::details *)*((_QWORD *)this + 285);
  if ( v19 )
    wil::details::delete_wnf_subscription_state(v19, v6);
  v20 = (wil::details *)*((_QWORD *)this + 284);
  if ( v20 )
    wil::details::delete_wnf_subscription_state(v20, v6);
  v21 = (wil::details *)*((_QWORD *)this + 283);
  if ( v21 )
    wil::details::delete_wnf_subscription_state(v21, v6);
  v22 = (wil::details *)*((_QWORD *)this + 282);
  if ( v22 )
    wil::details::delete_wnf_subscription_state(v22, v6);
  v23 = (wil::details *)*((_QWORD *)this + 281);
  if ( v23 )
    wil::details::delete_wnf_subscription_state(v23, v6);
  v24 = (wil::details *)*((_QWORD *)this + 280);
  if ( v24 )
    wil::details::delete_wnf_subscription_state(v24, v6);
  v25 = (wil::details *)*((_QWORD *)this + 279);
  if ( v25 )
    wil::details::delete_wnf_subscription_state(v25, v6);
  v26 = (wil::details *)*((_QWORD *)this + 278);
  if ( v26 )
    wil::details::delete_wnf_subscription_state(v26, v6);
  v27 = (void *)*((_QWORD *)this + 277);
  if ( v27 )
    operator delete(v27);
  __1__event_revoker_UITapInvokeSetting_TouchKeyboard_Shell_Internal_Windows_winrt___MP8type___abi_UITapInvokeSetting_TouchKeyboard_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAA_XZ((__int64 *)this + 275);
  if ( *((_QWORD *)this + 274) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TouchKeyboardExperienceManager *)((char *)this + 2192));
  v28 = (std::_Ref_count_base *)*((_QWORD *)this + 273);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  std::wstring::_Tidy_deallocate((__int64)this + 2112);
  std::wstring::_Tidy_deallocate((__int64)this + 2080);
  TouchKeyboardExperienceManager::TouchKeyboardThemeInfo::~TouchKeyboardThemeInfo((TouchKeyboardExperienceManager *)((char *)this + 1552));
  TouchKeyboardExperienceManager::TouchKeyboardThemeInfo::~TouchKeyboardThemeInfo((TouchKeyboardExperienceManager *)((char *)this + 1024));
  v30 = (void *)*((_QWORD *)this + 122);
  if ( v30 )
  {
    KeyboardHosting::InputAppPreloader::~InputAppPreloader(*((KeyboardHosting::InputAppPreloader **)this + 122));
    operator delete(v30);
  }
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)this + 864,
    v29);
  if ( *((_QWORD *)this + 104) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TouchKeyboardExperienceManager *)((char *)this + 832));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 103);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 102);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 100);
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((TouchKeyboardExperienceManager *)((char *)this + 744));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((TouchKeyboardExperienceManager *)((char *)this + 712));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((TouchKeyboardExperienceManager *)((char *)this + 680));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((TouchKeyboardExperienceManager *)((char *)this + 648));
  v31 = (void *)*((_QWORD *)this + 80);
  if ( v31 )
    DeleteObject(v31);
  v32 = (HWINEVENTHOOK)*((_QWORD *)this + 79);
  if ( v32 )
    UnhookWinEvent(v32);
  v33 = (HWINEVENTHOOK)*((_QWORD *)this + 78);
  if ( v33 )
    UnhookWinEvent(v33);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 74);
  if ( *((_QWORD *)this + 73) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 73);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 13);
  std::wstring::_Tidy_deallocate((__int64)this + 488);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 57);
  v34 = *((_QWORD *)this + 54);
  if ( v34 )
  {
    v35 = *((_QWORD *)this + 55);
    while ( v34 != v35 )
    {
      v36 = *(std::_Ref_count_base **)(v34 + 8);
      if ( v36 )
        std::_Ref_count_base::_Decref(v36);
      v34 += 16LL;
    }
    std::_Deallocate<16,0>(
      *((void **)this + 54),
      (*((_QWORD *)this + 56) - *((_QWORD *)this + 54)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 56) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 384));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 47);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 46);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 45);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 44);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 43);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 42);
  v38 = (wil::details *)*((_QWORD *)this + 41);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v37);
  v39 = (wil::details *)*((_QWORD *)this + 40);
  if ( v39 )
    wil::details::delete_wnf_subscription_state(v39, v37);
  v40 = *((_QWORD *)this + 39);
  if ( v40 )
  {
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v40 + 152), &v42);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 148), 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &v42,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'((wil::details::registry_watcher_state *)v40);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v42);
  }
  v41 = *((_QWORD *)this + 38);
  if ( v41 )
  {
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v41 + 152), &v43);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + 148), 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &v43,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'((wil::details::registry_watcher_state *)v41);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v43);
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>,void *>>>(
    (__int64)this + 256,
    (__int64)this + 256,
    *(__int64 **)(*((_QWORD *)this + 32) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 32), 0x38uLL);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>((__int64 *)this);
}
