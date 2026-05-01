/*
 * XREFs of ?GetTrustLevel@?$produce_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1806E2A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,void>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 40;
  if ( !a1 )
    v2 = 64LL;
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetTrustLevel(
           v2,
           a2);
}
