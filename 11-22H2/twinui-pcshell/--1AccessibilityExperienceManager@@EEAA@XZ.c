/*
 * XREFs of ??1AccessibilityExperienceManager@@EEAA@XZ @ 0x18053BDC4
 * Callers:
 *     ??_EAccessibilityExperienceManager@@EEAAPEAXI@Z @ 0x18053C074 (--_EAccessibilityExperienceManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180142264 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AccessibilityExperienceManager::~AccessibilityExperienceManager(AccessibilityExperienceManager *this)
{
  __int64 *v2; // rsi
  struct wil::details::wnf_subscription_state_base *v3; // rdx
  wil::details *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx

  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &AccessibilityExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 6) = &AccessibilityExperienceManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &AccessibilityExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 15) = &AccessibilityExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 16) = &AccessibilityExperienceManager::`vftable'{for `IImmersiveLayoutChanges'};
  *((_QWORD *)this + 17) = &AccessibilityExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 18) = &AccessibilityExperienceManager::`vftable'{for `Windows::UI::Internal::Input::IEyeControlManager'};
  *((_QWORD *)this + 19) = &AccessibilityExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 20) = &AccessibilityExperienceManager::`vftable'{for `IPrivilegedOperationsConsumer'};
  *((_QWORD *)this + 21) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = (__int64 *)((char *)this + 224);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 51);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 50);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 47);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 46);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 8);
  v4 = (wil::details *)*((_QWORD *)this + 39);
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, v3);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 38);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 35);
  v6 = *((_QWORD *)this + 34);
  if ( v6 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 32);
  v7 = (void *)*((_QWORD *)this + 29);
  if ( v7 )
    CoTaskMemFree(v7);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>((__int64 *)this);
}
