/*
 * XREFs of ?Release@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@UEAAKXZ @ 0x1800D6940
 * Callers:
 *     ?Release@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@W7EAAKXZ @ 0x18029A8B0 (-Release@-$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windo_ea_18029A8B0.c)
 *     ?Release@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@WBA@EAAKXZ @ 0x18029A8C0 (-Release@-$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windo_ea_18029A8C0.c)
 *     ?Release@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@WBI@EAAKXZ @ 0x18029A8D0 (-Release@-$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windo_ea_18029A8D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,winrt::immersive_shell_component,IPenMenuSystemTrayManager>::Release(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingRelease(a1 + 40);
}
