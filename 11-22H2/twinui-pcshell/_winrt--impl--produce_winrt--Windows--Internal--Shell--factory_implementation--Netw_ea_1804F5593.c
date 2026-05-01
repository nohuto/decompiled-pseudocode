/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils_winrt::Windows::Foundation::IActivationFactory_::ActivateInstance_::_1_::catch$3 @ 0x1804F5593
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils_winrt::Windows::Foundation::IActivationFactory_::ActivateInstance_::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 80) = *winrt::to_hresult((_DWORD *)(a2 + 80));
  return 0LL;
}
