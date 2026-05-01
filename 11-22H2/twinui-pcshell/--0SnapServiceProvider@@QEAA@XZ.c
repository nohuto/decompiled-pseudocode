/*
 * XREFs of ??0SnapServiceProvider@@QEAA@XZ @ 0x18010B44C
 * Callers:
 *     ??$MakeAndInitialize@VSnapServiceProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSnapServiceProvider@@@Z @ 0x18010B3C4 (--$MakeAndInitialize@VSnapServiceProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSnapServicePr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
SnapServiceProvider *__fastcall SnapServiceProvider::SnapServiceProvider(SnapServiceProvider *this)
{
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>::`vftable';
  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISnapServiceProviderInternal,ISnapServiceProvider>::`vftable'{for `ISnapServiceProviderInternal'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISnapServiceProviderInternal,ISnapServiceProvider>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISnapServiceProvider>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SnapServiceProvider::`vftable'{for `ISnapServiceProviderInternal'};
  *((_QWORD *)this + 1) = &SnapServiceProvider::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISnapServiceProvider>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  return this;
}
