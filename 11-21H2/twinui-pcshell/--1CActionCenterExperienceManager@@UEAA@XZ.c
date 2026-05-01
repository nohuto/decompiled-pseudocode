/*
 * XREFs of ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18034D03C
 * Callers:
 *     ??_GCActionCenterExperienceManager@@UEAAPEAXI@Z @ 0x18034D950 (--_GCActionCenterExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?revoke@?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ @ 0x18000ABE0 (-revoke@-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180069558 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180069820 (--1-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadPool.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E4540 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x1800F445C (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellViewC.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x1800F44F0 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_1800F44F0.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x18012D6A4 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ?Release@HString@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x18017A3CC (-Release@HString@Wrappers@WRL@Microsoft@@QEAAXXZ.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5460 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1802DB2BC (--1SmartCookie@@QEAA@XZ.c)
 */

void __fastcall CActionCenterExperienceManager::~CActionCenterExperienceManager(CActionCenterExperienceManager *this)
{
  __int64 *v2; // rcx
  struct wil::details::wnf_subscription_state_base *v3; // rdx
  volatile int *v4; // rdx
  volatile int *v5; // rdx

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
  v2 = (__int64 *)((char *)this + 848);
  if ( *v2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v2);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ((_QWORD *)this + 104);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((_QWORD *)this + 102);
  if ( *((_QWORD *)this + 101) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CActionCenterExperienceManager *)((char *)this + 808));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease((volatile signed __int32 **)this + 98);
  winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::revoke((__int64 *)this + 93);
  if ( *((_QWORD *)this + 93) )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)this + 93);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 91);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>((struct _TP_TIMER **)this + 84);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 83);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 82);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 81);
  SmartCookie::~SmartCookie((CActionCenterExperienceManager *)((char *)this + 504));
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)this + 62);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 61);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 60);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 58);
  Microsoft::WRL::Wrappers::HString::Release((HSTRING *)this + 55);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(
    (wil::details **)this + 54,
    v3);
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
    (CActionCenterExperienceManager *)((char *)this + 392),
    v4);
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
    (CActionCenterExperienceManager *)((char *)this + 360),
    v5);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 43);
  CSingleViewShellExperience::~CSingleViewShellExperience((CActionCenterExperienceManager *)((char *)this + 128));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>();
}
