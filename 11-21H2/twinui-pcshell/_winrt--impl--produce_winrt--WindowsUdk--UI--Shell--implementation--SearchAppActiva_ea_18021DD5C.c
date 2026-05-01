/*
 * XREFs of _winrt::impl::produce_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs_::GetDeferral_::_1_::catch$8 @ 0x18021DD5C
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs_::GetDeferral_::_1_::catch_8(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
