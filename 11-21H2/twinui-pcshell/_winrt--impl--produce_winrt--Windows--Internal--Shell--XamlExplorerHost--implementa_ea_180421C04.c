/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_winrt::Windows::Foundation::IClosable_::Close_::_1_::catch$1 @ 0x180421C04
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_winrt::Windows::Foundation::IClosable_::Close_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
