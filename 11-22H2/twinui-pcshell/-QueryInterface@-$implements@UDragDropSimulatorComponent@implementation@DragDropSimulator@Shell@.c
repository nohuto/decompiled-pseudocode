/*
 * XREFs of ?QueryInterface@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6D70
 * Callers:
 *     ?QueryInterface@?$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIFocusSessionComponent@3456@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18028E370 (-QueryInterface@-$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?QueryInterface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18028E390 (-QueryInterface@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvid.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(a1 + 32);
}
