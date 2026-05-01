/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs_winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs_::get_Id_::_1_::catch$9 @ 0x180728FCA
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs_winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs_::get_Id_::_1_::catch_9(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
