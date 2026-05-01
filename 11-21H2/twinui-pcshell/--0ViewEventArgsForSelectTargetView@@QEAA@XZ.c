/*
 * XREFs of ??0ViewEventArgsForSelectTargetView@@QEAA@XZ @ 0x180029D5C
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@PEAUIPropertySet@Collections@Foundation@Windows@@H@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForSelectTargetView@@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@$$QEAH@Z @ 0x180029CA4 (--$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@PEAUIPropertySet@Collections@Foundati.c)
 * Callees:
 *     ??0ViewEventArgsBase@@QEAA@XZ @ 0x18009C86C (--0ViewEventArgsBase@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
ViewEventArgsForSelectTargetView *__fastcall ViewEventArgsForSelectTargetView::ViewEventArgsForSelectTargetView(
        ViewEventArgsForSelectTargetView *this)
{
  ViewEventArgsBase::ViewEventArgsBase(this);
  *((_QWORD *)this + 11) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 9) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ViewEventArgsForSelectTargetView::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 9) = &ViewEventArgsForSelectTargetView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>'};
  *((_BYTE *)this + 96) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  return this;
}
