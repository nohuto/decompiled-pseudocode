/*
 * XREFs of ?Release@?$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApplicationViewChangeListener@@@winrt@@WBA@EAAKXZ @ 0x180210410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<NPSMDesktopShellComponent,winrt::immersive_shell_component,IApplicationViewChangeListener>::Release(
        __int64 a1)
{
  return winrt::implements<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::immersive_shell_component,Windows::Internal::UI::Themes::IThemeCoordinator>::Release(a1 - 16);
}
