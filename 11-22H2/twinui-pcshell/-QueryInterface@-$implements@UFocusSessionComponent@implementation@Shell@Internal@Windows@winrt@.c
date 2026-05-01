/*
 * XREFs of ?QueryInterface@?$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIFocusSessionComponent@3456@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18028E370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::IFocusSessionComponent>::QueryInterface(
        __int64 a1)
{
  return winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::QueryInterface(a1 - 8);
}
