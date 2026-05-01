/*
 * XREFs of ??0?$heap_implements@V?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180088B1C
 * Callers:
 *     ??$make@V?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x180088364 (--$make@V-$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@.c)
 * Callees:
 *     ??0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008ABC8 (--0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::implementation::DashboardManager *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>>(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *a1)
{
  winrt::Windows::Internal::Shell::implementation::DashboardManager::DashboardManager(a1);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardManager,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)a1 + 1) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardManager,IEdgeUiTouchInvocation,void>'};
  *((_QWORD *)a1 + 3) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 4) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 5) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 7) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardManager,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)a1 + 1) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardManager,IEdgeUiTouchInvocation,void>'};
  *((_QWORD *)a1 + 3) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 4) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 5) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 7) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable';
  return a1;
}
