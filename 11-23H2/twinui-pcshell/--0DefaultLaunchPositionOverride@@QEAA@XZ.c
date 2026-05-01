/*
 * XREFs of ??0DefaultLaunchPositionOverride@@QEAA@XZ @ 0x180061150
 * Callers:
 *     ??$MakeAndInitialize@VDefaultLaunchPositionOverride@@UIDefaultLaunchPositionOverride@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDefaultLaunchPositionOverride@@@Z @ 0x180060FE4 (--$MakeAndInitialize@VDefaultLaunchPositionOverride@@UIDefaultLaunchPositionOverride@@$$V@Detail.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
DefaultLaunchPositionOverride *__fastcall DefaultLaunchPositionOverride::DefaultLaunchPositionOverride(
        DefaultLaunchPositionOverride *this)
{
  *(_QWORD *)this = &CWRLObjectWithGITSite::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 13) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,IDefaultLaunchPositionOverride>::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IDefaultLaunchPositionOverride>>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,IDefaultLaunchPositionOverride>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDefaultLaunchPositionOverride>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IDefaultLaunchPositionOverride>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,IDefaultLaunchPositionOverride>::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IDefaultLaunchPositionOverride>>'};
  *((_QWORD *)this + 5) = &DefaultLaunchPositionOverride::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDefaultLaunchPositionOverride>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IDefaultLaunchPositionOverride>>'};
  return this;
}
