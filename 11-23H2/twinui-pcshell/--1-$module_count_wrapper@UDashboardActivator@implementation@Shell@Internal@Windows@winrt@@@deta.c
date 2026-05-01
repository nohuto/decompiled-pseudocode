/*
 * XREFs of ??1?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180088444
 * Callers:
 *     ??_G?$heap_implements@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801BCBC8 (--_G-$heap_implements@V-$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>(
        winrt::Windows::Internal::Shell::implementation::DashboardActivator *this)
{
  *(_QWORD *)this = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>'};
  *((_QWORD *)this + 2) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  winrt::Windows::Internal::Shell::implementation::DashboardActivator::~DashboardActivator(this);
}
