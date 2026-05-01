/*
 * XREFs of ??0?$heap_implements@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1800883D0
 * Callers:
 *     ??$make@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x180088040 (--$make@V-$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??0DashboardActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800889DC (--0DashboardActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::implementation::DashboardActivator *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>>(
        winrt::Windows::Internal::Shell::implementation::DashboardActivator *a1)
{
  winrt::Windows::Internal::Shell::implementation::DashboardActivator::DashboardActivator(a1);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>'};
  *((_QWORD *)a1 + 2) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>'};
  *((_QWORD *)a1 + 2) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>'};
  return a1;
}
