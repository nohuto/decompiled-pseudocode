/*
 * XREFs of ?Release@?$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@@winrt@@WBA@EAAKXZ @ 0x18020DC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<TouchGestureComponent,winrt::immersive_shell_component>::Release(__int64 a1)
{
  return winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::Release(a1 - 16);
}
