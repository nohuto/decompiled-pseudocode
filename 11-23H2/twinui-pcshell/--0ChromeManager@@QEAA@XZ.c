/*
 * XREFs of ??0ChromeManager@@QEAA@XZ @ 0x180102AA0
 * Callers:
 *     ??$MakeAndInitialize@VChromeManager@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVChromeManager@@AEAPEAUIUnknown@@@Z @ 0x1801034F8 (--$MakeAndInitialize@VChromeManager@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVChrom.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
ChromeManager *__fastcall ChromeManager::ChromeManager(ChromeManager *this)
{
  *(_QWORD *)this = &CPinnedList::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 9) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,ITabletModeChromeManager>::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,ITabletModeChromeManager>>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,ITabletModeChromeManager>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChromeManager>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,ITabletModeChromeManager>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ChromeManager::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,ITabletModeChromeManager>>'};
  *((_QWORD *)this + 3) = &ChromeManager::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChromeManager>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,ITabletModeChromeManager>>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  return this;
}
