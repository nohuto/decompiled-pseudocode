/*
 * XREFs of ??0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800CE868
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1800CDF4C (--0-$heap_implements@V-$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Win.c)
 * Callees:
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x18009D2F4 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x1800CEFE4 (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??0TaskbarLayout@Shell@UI@WindowsUdk@winrt@@QEAA@$$T@Z @ 0x1800F4970 (--0TaskbarLayout@Shell@UI@WindowsUdk@winrt@@QEAA@$$T@Z.c)
 */

// Hidden C++ exception states: #wind=8
winrt::Windows::Internal::Shell::implementation::DashboardManager *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::DashboardManager(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  _QWORD *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r8

  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::IDashboardManager>::`vftable';
  *(_QWORD *)this = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)this + 1) = &winrt::impl::producers_base<winrt::immersive_shell_component,std::tuple<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  winrt::immersive_shell_component::immersive_shell_component((winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)this + 24));
  *(_QWORD *)this = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardManager,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)this + 1) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardManager,IEdgeUiTouchInvocation,void>'};
  *v2 = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 4) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 5) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 7) = &winrt::Windows::Internal::Shell::implementation::DashboardManager::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_BYTE *)this + 188) = 1;
  winrt::WindowsUdk::UI::Shell::TaskbarLayout::TaskbarLayout((char *)this + 192);
  *((_QWORD *)this + 25) = v3;
  winrt::immersive_shell_component::register_service_information<_GUID const>(v4, (__int128 *)&SID_DashboardManager);
  return this;
}
