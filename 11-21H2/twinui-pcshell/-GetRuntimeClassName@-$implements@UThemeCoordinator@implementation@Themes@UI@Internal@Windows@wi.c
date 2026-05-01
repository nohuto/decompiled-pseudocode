/*
 * XREFs of ?GetRuntimeClassName@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@3456@@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1805DDA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::immersive_shell_component,Windows::Internal::UI::Themes::IThemeCoordinator>::GetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetRuntimeClassName(
           a1 + 40,
           a2);
}
