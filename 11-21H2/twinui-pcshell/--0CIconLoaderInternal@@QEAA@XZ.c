/*
 * XREFs of ??0CIconLoaderInternal@@QEAA@XZ @ 0x18049809C
 * Callers:
 *     ??$MakeAndInitialize@VCIconLoaderInternal@@V1@AEAPEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVCIconLoaderInternal@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x180230F66 (--$MakeAndInitialize@VCIconLoaderInternal@@V1@AEAPEAUIApplicationViewIconLoader@@@Details@WRL@Mi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

CIconLoaderInternal *__fastcall CIconLoaderInternal::CIconLoaderInternal(CIconLoaderInternal *this)
{
  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoaderInternal>>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoaderInternal>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoaderInternal>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoaderInternal>>,IWeakReferenceSource>>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoaderInternal>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoaderInternal>>,IWeakReferenceSource>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CIconLoaderInternal::`vftable';
  *((_QWORD *)this + 1) = &CIconLoaderInternal::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoaderInternal>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoaderInternal>>,IWeakReferenceSource>>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoaderInternal>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoaderInternal>>,IWeakReferenceSource>>'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
