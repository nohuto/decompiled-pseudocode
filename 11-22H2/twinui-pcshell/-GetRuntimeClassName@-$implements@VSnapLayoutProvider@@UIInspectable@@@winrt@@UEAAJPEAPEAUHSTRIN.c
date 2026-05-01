/*
 * XREFs of ?GetRuntimeClassName@?$implements@VSnapLayoutProvider@@UIInspectable@@@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180636F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<SnapLayoutProvider,IInspectable>::GetRuntimeClassName(__int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::NonDelegatingGetRuntimeClassName(a1 + 8);
}
