/*
 * XREFs of ??0SwitcherTabViewManagerWrapper@@QEAA@PEAUITabViewManager@@@Z @ 0x18042E0A4
 * Callers:
 *     ??$Make@VSwitcherTabViewManagerWrapper@@AEBQEAUITabViewManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSwitcherTabViewManagerWrapper@@@12@AEBQEAUITabViewManager@@@Z @ 0x180499F48 (--$Make@VSwitcherTabViewManagerWrapper@@AEBQEAUITabViewManager@@@Details@WRL@Microsoft@@YA-AV-$C.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
SwitcherTabViewManagerWrapper *__fastcall SwitcherTabViewManagerWrapper::SwitcherTabViewManagerWrapper(
        SwitcherTabViewManagerWrapper *this,
        struct ITabViewManager *a2)
{
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ITabViewManager>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ITabViewManager>::`vftable'{for `ITabViewManager'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ITabViewManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SwitcherTabViewManagerWrapper::`vftable';
  *((_QWORD *)this + 1) = &SwitcherTabViewManagerWrapper::`vftable'{for `ITabViewManager'};
  *((_QWORD *)this + 2) = &SwitcherTabViewManagerWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 5) = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 5);
  return this;
}
