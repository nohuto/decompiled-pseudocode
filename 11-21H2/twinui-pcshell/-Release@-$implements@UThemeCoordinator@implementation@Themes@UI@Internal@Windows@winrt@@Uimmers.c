/*
 * XREFs of ?Release@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@3456@@winrt@@UEAAKXZ @ 0x1800FA110
 * Callers:
 *     ?Release@?$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIImeContextMenuExperienceManager@@@winrt@@W7EAAKXZ @ 0x1802103F0 (-Release@-$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmer.c)
 *     ?Release@?$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApplicationViewChangeListener@@@winrt@@WBA@EAAKXZ @ 0x180210410 (-Release@-$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApplicatio.c)
 *     ?Release@?$implements@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIInputSwitchExperienceManager@@@winrt@@WBI@EAAKXZ @ 0x180210430 (-Release@-$implements@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@Uimmer.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAIXZ @ 0x1800FA2A4 (-subtract_reference@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::immersive_shell_component,Windows::Internal::UI::Themes::IThemeCoordinator>::Release(
        __int64 a1)
{
  volatile __int64 *v1; // rbx
  unsigned int v2; // edi

  v1 = (volatile __int64 *)(a1 + 40);
  v2 = winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::subtract_reference(a1 + 40);
  if ( !v2 )
  {
    _InterlockedExchange64(v1 + 1, 1LL);
    if ( v1 )
      (*(void (__fastcall **)(volatile __int64 *, __int64))(*v1 + 8))(v1, 1LL);
  }
  return v2;
}
