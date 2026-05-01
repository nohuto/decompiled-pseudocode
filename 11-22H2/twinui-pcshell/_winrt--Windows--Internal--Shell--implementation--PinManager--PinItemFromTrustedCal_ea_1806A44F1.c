/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemFromTrustedCaller_::_1_::dtor$7 @ 0x1806A44F1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::PinItemFromTrustedCaller_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 472));
}
