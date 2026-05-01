/*
 * XREFs of ??0CIconLoadingFunctions@@QEAA@XZ @ 0x18049812C
 * Callers:
 *     ??$MakeAndInitialize@VCIconLoadingFunctions@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCIconLoadingFunctions@@@Z @ 0x180231006 (--$MakeAndInitialize@VCIconLoadingFunctions@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCIconLoadin.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180082710 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

CIconLoadingFunctions *__fastcall CIconLoadingFunctions::CIconLoadingFunctions(CIconLoadingFunctions *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((CIconLoadingFunctions *)((char *)this + 16));
  *((_QWORD *)this + 9) = 1LL;
  *(_QWORD *)this = &CIconLoadingFunctions::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoadingFunctions,Microsoft::WRL::FtmBase>>::`vftable'{for `IIconLoadingFunctions'};
  *v2 = &CIconLoadingFunctions::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = &CIconLoadingFunctions::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoadingFunctions,Microsoft::WRL::FtmBase>>,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CIconLoadingFunctions::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CIconLoadingFunctions::`vftable'{for `IIconLoadingFunctions'};
  *v2 = &CIconLoadingFunctions::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = &CIconLoadingFunctions::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoadingFunctions,Microsoft::WRL::FtmBase>>,IWeakReferenceSource>'};
  return this;
}
