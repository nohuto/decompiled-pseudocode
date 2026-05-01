/*
 * XREFs of ??1XamlAllUpViewHost@@UEAA@XZ @ 0x18042EEA0
 * Callers:
 *     ??_GXamlAllUpViewHost@@UEAAPEAXI@Z @ 0x180430F60 (--_GXamlAllUpViewHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister @ 0x18000FA10 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotifi.c)
 *     ??1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x180018180 (--1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease @ 0x18003FB90 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::TabletModeChangeRegistration_::InternalRelease @ 0x1800442D8 (Microsoft--WRL--ComPtr__anonymous_namespace_--TabletModeChangeRegistration_--InternalRelease.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@0@@Z @ 0x18042C49C (--$_Destroy_range@V-$allocator@V-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$Com.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlAllUpViewHost::~XamlAllUpViewHost(XamlAllUpViewHost *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int64 *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  *(_QWORD *)this = &XamlAllUpViewHost::`vftable'{for `Microsoft::WRL::ChainInterfaces<IAllUpViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &XamlAllUpViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 15) = &XamlAllUpViewHost::`vftable';
  *((_QWORD *)this + 16) = &XamlAllUpViewHost::`vftable'{for `ITabletModeChangeListener'};
  *((_QWORD *)this + 17) = &XamlAllUpViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>'};
  if ( *((_QWORD *)this + 86) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 88LL))(*((_QWORD *)this + 21));
    if ( v2 < 0 )
    {
      __abi_WinRTraiseException(v2);
      __debugbreak();
    }
  }
  if ( *((_QWORD *)this + 87) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 72LL))(*((_QWORD *)this + 22));
    if ( v3 < 0 )
    {
      __abi_WinRTraiseException(v3);
      __debugbreak();
    }
  }
  if ( *((_QWORD *)this + 88) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 80LL))(*((_QWORD *)this + 23));
    if ( v4 < 0 )
    {
      __abi_WinRTraiseException(v4);
      __debugbreak();
    }
  }
  XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlAllUpViewHost *)((char *)this + 368));
  v5 = (__int64 *)*((_QWORD *)this + 41);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<MonitorFrame>>>(v5, *((__int64 **)this + 42));
    std::_Deallocate<16,0>(
      *((void **)this + 41),
      (*((_QWORD *)this + 43) - *((_QWORD *)this + 41)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 41) = 0LL;
    *((_QWORD *)this + 42) = 0LL;
    *((_QWORD *)this + 43) = 0LL;
  }
  EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister((__int64)this + 312);
  Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease((__int64 *)this + 40);
  v6 = *((_QWORD *)this + 38);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
    Microsoft::WRL::ComPtr__anonymous_namespace_::TabletModeChangeRegistration_::InternalRelease((__int64 *)this + 38);
  }
  Microsoft::WRL::ComPtr__anonymous_namespace_::TabletModeChangeRegistration_::InternalRelease((__int64 *)this + 38);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 35);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 32);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 31);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 26);
  v7 = *((_QWORD *)this + 25);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 23);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 22);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 21);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 20);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *((_QWORD *)this + 19);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  *((_DWORD *)this + 37) = -1073741823;
  CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>((__int64)this);
}
