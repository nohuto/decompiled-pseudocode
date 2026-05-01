/*
 * XREFs of ?AddRef@?$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIFocusSessionComponent@3456@@winrt@@WBA@EAAKXZ @ 0x18028E310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::IFocusSessionComponent>::AddRef(
        __int64 a1)
{
  return winrt::implements<TouchGestureComponent,winrt::immersive_shell_component>::AddRef(a1 - 16);
}
