/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils_winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics_::GetInstance_::_1_::catch$5 @ 0x180283DC7
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils_winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics_::GetInstance_::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
