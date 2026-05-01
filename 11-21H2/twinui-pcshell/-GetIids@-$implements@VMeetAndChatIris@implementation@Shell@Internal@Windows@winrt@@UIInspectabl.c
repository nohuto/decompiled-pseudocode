/*
 * XREFs of ?GetIids@?$implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UIInspectable@@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180577FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris,IInspectable>::GetIids(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::NonDelegatingGetIids(a1 + 8);
}
