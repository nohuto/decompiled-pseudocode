/*
 * XREFs of ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x1804172CC
 * Callers:
 *     ??_GCActionCenterExperienceManager@@UEAAPEAXI@Z @ 0x180417B30 (--_GCActionCenterExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?revoke@?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ @ 0x1800659EC (-revoke@-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x180094E18 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellViewC.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x180094EB8 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_180094EB8.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x18012D354 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180174C24 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18038D934 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CActionCenterExperienceManager::~CActionCenterExperienceManager(CActionCenterExperienceManager *this)
{
  __int64 *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  struct _TP_TIMER *v4; // rcx
  struct wil::details::wnf_subscription_state_base *v5; // rdx
  wil::details *v6; // rcx

  *(_QWORD *)this = &CActionCenterExperienceManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 2) = &CActionCenterExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 4) = &CActionCenterExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IActionCenterExperienceManager'};
  *((_QWORD *)this + 5) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 6) = &CActionCenterExperienceManager::`vftable'{for `IEdgeUiTouchInvocation'};
  *((_QWORD *)this + 7) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 8) = &CActionCenterExperienceManager::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 9) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 10) = &CActionCenterExperienceManager::`vftable'{for `Windows::Foundation::IClosable'};
  *((_QWORD *)this + 11) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 14) = &CActionCenterExperienceManager::`vftable';
  v2 = (__int64 *)((char *)this + 920);
  if ( *v2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v2);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ((_QWORD *)this + 113);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((_QWORD *)this + 111);
  if ( *((_QWORD *)this + 110) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CActionCenterExperienceManager *)((char *)this + 880));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease((volatile signed __int32 **)this + 107);
  if ( *((_QWORD *)this + 106) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CActionCenterExperienceManager *)((char *)this + 848));
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 99);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::revoke((__int64 *)this + 95);
  if ( *((_QWORD *)this + 95) )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)this + 95);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 93);
  v4 = (struct _TP_TIMER *)*((_QWORD *)this + 85);
  if ( v4 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v4);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 84);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 83);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 82);
  SmartCookie::Unregister((CActionCenterExperienceManager *)((char *)this + 512));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((__int64)this + 512);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 63);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 62);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 61);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 59);
  WindowsDeleteString(*((HSTRING *)this + 56));
  *((_QWORD *)this + 56) = 0LL;
  v6 = (wil::details *)*((_QWORD *)this + 55);
  if ( v6 )
    wil::details::delete_wnf_subscription_state(v6, v5);
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CActionCenterExperienceManager *)((char *)this + 400));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CActionCenterExperienceManager *)((char *)this + 368));
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 44);
  if ( *((_QWORD *)this + 43) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CActionCenterExperienceManager *)((char *)this + 344));
  CSingleViewShellExperience::~CSingleViewShellExperience((CActionCenterExperienceManager *)((char *)this + 128));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>((__int64)this);
}
