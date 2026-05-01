/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BuildRegistryKeyMap_::_1_::dtor$1 @ 0x1806F2360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BuildRegistryKeyMap_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 304), a2);
}
