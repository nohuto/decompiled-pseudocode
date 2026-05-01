/*
 * XREFs of ?QueryInterface@?$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@@winrt@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020DC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<TouchGestureComponent,winrt::immersive_shell_component>::QueryInterface(
        __int64 a1)
{
  return winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::QueryInterface(a1 - 16);
}
