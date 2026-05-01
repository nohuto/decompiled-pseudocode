/*
 * XREFs of ??0AltEscHotkeyHandler@@QEAA@XZ @ 0x18056A6EC
 * Callers:
 *     ??$MakeAndInitialize@VAltEscHotkeyHandler@@V1@AEAPEAUIWeakReference@WeakReference@@@Details@WRL@Microsoft@@YAJPEAPEAVAltEscHotkeyHandler@@AEAPEAUIWeakReference@WeakReference@@@Z @ 0x18056A634 (--$MakeAndInitialize@VAltEscHotkeyHandler@@V1@AEAPEAUIWeakReference@WeakReference@@@Details@WRL@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

AltEscHotkeyHandler *__fastcall AltEscHotkeyHandler::AltEscHotkeyHandler(AltEscHotkeyHandler *this)
{
  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>,IWeakReferenceSource>>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>,IWeakReferenceSource>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &AltEscHotkeyHandler::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>,IWeakReferenceSource>>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>,IWeakReferenceSource>>'};
  *((_QWORD *)this + 6) = &AltEscHotkeyHandler::`vftable'{for `CImpWorkerWndProc'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  return this;
}
