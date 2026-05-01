/*
 * XREFs of ?QueryInterface@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8540
 * Callers:
 *     ?QueryInterface@?$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020DC10 (-QueryInterface@-$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@@winrt@@W.c)
 *     ?QueryInterface@?$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@@winrt@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020DC30 (-QueryInterface@-$implements@VTouchGestureComponent@@Uimmersive_shell_component@win_ea_18020DC30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(a1 + 32);
}
