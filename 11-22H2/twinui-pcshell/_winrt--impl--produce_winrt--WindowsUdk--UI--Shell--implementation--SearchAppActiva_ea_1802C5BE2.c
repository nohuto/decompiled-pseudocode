/*
 * XREFs of _winrt::impl::produce_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs_::get_SplashScreen_::_1_::catch$11 @ 0x1802C5BE2
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs_::get_SplashScreen_::_1_::catch_11(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
