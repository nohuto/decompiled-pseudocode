/*
 * XREFs of ?AddRef@?$implements@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIInputSwitchExperienceManager@@@winrt@@WBA@EAAKXZ @ 0x1802AC9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager,winrt::immersive_shell_component,IInputSwitchExperienceManager>::AddRef(
        __int64 a1)
{
  return winrt::implements<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,winrt::immersive_shell_component,IImeContextMenuExperienceManager>::AddRef(a1 - 16);
}
