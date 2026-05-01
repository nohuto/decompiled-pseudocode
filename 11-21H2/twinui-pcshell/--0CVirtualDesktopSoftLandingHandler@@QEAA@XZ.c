/*
 * XREFs of ??0CVirtualDesktopSoftLandingHandler@@QEAA@XZ @ 0x18010B868
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopSoftLandingHandler@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopSoftLandingHandler@@AEAPEAUIApplicationViewCollection@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x18010B970 (--$MakeAndInitialize@VCVirtualDesktopSoftLandingHandler@@V1@AEAPEAUIApplicationViewCollection@@A.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18010B0F4 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopSoftLandingHandler@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18010B93C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$VirtualDesktopNotifi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
CVirtualDesktopSoftLandingHandler *__fastcall CVirtualDesktopSoftLandingHandler::CVirtualDesktopSoftLandingHandler(
        CVirtualDesktopSoftLandingHandler *this)
{
  size_t size_of; // rax
  _QWORD *v3; // rax

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopSoftLandingHandler,IApplicationViewChangeListener>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopSoftLandingHandler,IApplicationViewChangeListener>();
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopSoftLandingHandler,IApplicationViewChangeListener>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopSoftLandingHandler,IApplicationViewChangeListener>::`vftable'{for `IVirtualDesktopSoftLandingHandler'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopSoftLandingHandler,IApplicationViewChangeListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewChangeListener>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CVirtualDesktopSoftLandingHandler::`vftable';
  *((_QWORD *)this + 1) = &CVirtualDesktopSoftLandingHandler::`vftable'{for `IVirtualDesktopSoftLandingHandler'};
  *((_QWORD *)this + 2) = &CVirtualDesktopSoftLandingHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewChangeListener>'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)this + 23) = v3;
  return this;
}
