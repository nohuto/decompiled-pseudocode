/*
 * XREFs of ??0ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x1800894BC
 * Callers:
 *     ??0?$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x18008C408 (--0-$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@de.c)
 * Callees:
 *     ??0?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@QEAA@XZ @ 0x180089638 (--0-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_sh.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180093A9C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1800BCCE4 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=11
winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *__fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::ThemeCoordinator(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this)
{
  __int64 size_of; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  winrt::implements<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::immersive_shell_component,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::implements<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::immersive_shell_component,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>();
  *(_QWORD *)this = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,IImmersiveMonitorNotification,void>'};
  *((_QWORD *)this + 1) = &wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,IImmersiveSessionIdleNotification,void>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)this + 4) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 5) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 6) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 8) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable';
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *(GUID *)((char *)this + 184) = GUID_NULL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  size_of = std::_Get_size_of_n<48>(1LL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *((_QWORD *)this + 27) = v3;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  v4 = std::_Get_size_of_n<48>(1LL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(v4);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *((_QWORD *)this + 29) = v5;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  winrt::immersive_shell_component::register_service_information<_GUID const>(
    (char *)this + 32,
    &winrt::impl::guid_v<winrt::Windows::Internal::UI::Themes::IThemeCoordinator>);
  return this;
}
