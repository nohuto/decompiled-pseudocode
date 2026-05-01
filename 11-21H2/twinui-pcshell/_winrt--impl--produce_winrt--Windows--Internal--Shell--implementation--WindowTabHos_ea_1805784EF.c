/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_::IsSupported_::_1_::catch$1 @ 0x1805784EF
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_::IsSupported_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 80) = *winrt::to_hresult((_DWORD *)(a2 + 80));
  return 0LL;
}
