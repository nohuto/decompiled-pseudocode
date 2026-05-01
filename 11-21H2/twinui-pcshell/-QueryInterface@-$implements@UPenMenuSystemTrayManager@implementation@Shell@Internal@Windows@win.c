/*
 * XREFs of ?QueryInterface@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8620
 * Callers:
 *     ?QueryInterface@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F6EE0 (-QueryInterface@-$implements@UPenMenuSystemTrayManager@implementation@Shell@Interna_ea_1801F6EE0.c)
 *     ?QueryInterface@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F6EF0 (-QueryInterface@-$implements@UPenMenuSystemTrayManager@implementation@Shell@Interna_ea_1801F6EF0.c)
 *     ?QueryInterface@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F6F00 (-QueryInterface@-$implements@UPenMenuSystemTrayManager@implementation@Shell@Interna_ea_1801F6F00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,winrt::immersive_shell_component,IPenMenuSystemTrayManager>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(a1 + 40);
}
