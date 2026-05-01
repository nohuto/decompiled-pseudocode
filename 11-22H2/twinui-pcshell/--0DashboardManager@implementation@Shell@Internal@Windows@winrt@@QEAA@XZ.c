/*
 * XREFs of ??0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008ABC8
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180088B1C (--0-$heap_implements@V-$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Win.c)
 * Callees:
 *     ??0IViewWrapper@ViewManagerInterop@Shell@Internal@Windows@winrt@@QEAA@$$T@Z @ 0x18008A8A4 (--0IViewWrapper@ViewManagerInterop@Shell@Internal@Windows@winrt@@QEAA@$$T@Z.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x18008AB3C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1800BCCE4 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
winrt::Windows::Internal::Shell::implementation::DashboardManager *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::DashboardManager(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  _QWORD *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8

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
  winrt::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper::IViewWrapper((_QWORD *)this + 15);
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = v3;
  winrt::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper::IViewWrapper((_QWORD *)this + 18);
  *((_QWORD *)this + 19) = v4;
  *((_QWORD *)this + 20) = v4;
  *((_QWORD *)this + 21) = v4;
  *((_QWORD *)this + 22) = v4;
  *((_QWORD *)this + 23) = v4;
  *((_QWORD *)this + 24) = v4;
  *((_QWORD *)this + 25) = v4;
  *((_DWORD *)this + 52) = v4;
  *((_WORD *)this + 106) = 1;
  *((_QWORD *)this + 27) = v4;
  *((_QWORD *)this + 28) = v4;
  winrt::immersive_shell_component::register_service_information<_GUID const>(v5, &SID_DashboardManager);
  return this;
}
