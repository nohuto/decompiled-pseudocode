/*
 * XREFs of ??0VirtualDesktopItemCollection@@QEAA@XZ @ 0x180565B40
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x180565A54 (--$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0ObservableObjectArray@@QEAA@XZ @ 0x180564690 (--0ObservableObjectArray@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
VirtualDesktopItemCollection *__fastcall VirtualDesktopItemCollection::VirtualDesktopItemCollection(
        VirtualDesktopItemCollection *this)
{
  unsigned __int64 v2; // rdi

  ObservableObjectArray::ObservableObjectArray(this);
  v2 = (unsigned __int64)this + 144;
  *((_QWORD *)this + 18) = &VirtualDesktopNotificationBase<IVirtualDesktopNotification>::`vftable';
  *((_DWORD *)this + 39) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::`vftable'{for `Microsoft::WRL::Details::Selector<ObservableObjectArray,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>'};
  *((_QWORD *)this + 18) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &VirtualDesktopItemCollection::`vftable'{for `Microsoft::WRL::Details::Selector<ObservableObjectArray,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>'};
  *(_QWORD *)v2 = &VirtualDesktopItemCollection::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>'};
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 22) = v2 & -(__int64)(this != 0LL);
  return this;
}
