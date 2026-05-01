/*
 * XREFs of ??0?$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x18008C408
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18008C0B4 (--0-$heap_implements@V-$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal.c)
 * Callees:
 *     ??0ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x1800894BC (--0ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *a1)
{
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::ThemeCoordinator(a1);
  *(_QWORD *)a1 = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,IImmersiveMonitorNotification,void>'};
  *((_QWORD *)a1 + 1) = &wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,IImmersiveSessionIdleNotification,void>'};
  *((_QWORD *)a1 + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)a1 + 4) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 5) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 6) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 8) = &wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
