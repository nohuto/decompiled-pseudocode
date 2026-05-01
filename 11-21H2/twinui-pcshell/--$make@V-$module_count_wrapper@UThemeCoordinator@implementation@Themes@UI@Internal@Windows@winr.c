/*
 * XREFs of ??$make@V?$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?AU?$com_ptr@UIObjectWithSite@@@0@XZ @ 0x1800CED20
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800CEC10 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UThemeCoordinator@implementation@Themes@UI@Int.c)
 * Callees:
 *     ??0?$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x1800CEDB0 (--0-$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@de.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>,>(
        _QWORD *a1)
{
  _QWORD *v3; // [rsp+30h] [rbp+8h]

  v3 = operator new(0x88uLL);
  memset_0(v3, 0, 0x88uLL);
  wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>(v3);
  *v3 = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,std::tuple<Windows::Internal::UI::Themes::IThemeCoordinator>>'};
  v3[1] = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  v3[2] = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  v3[3] = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  v3[5] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>>::`vftable'{for `winrt::immersive_shell_component'};
  *a1 = v3 + 1;
  return a1;
}
