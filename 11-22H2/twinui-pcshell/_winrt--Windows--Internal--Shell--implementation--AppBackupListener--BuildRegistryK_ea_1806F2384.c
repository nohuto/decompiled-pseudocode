/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BuildRegistryKeyMap_::_1_::dtor$4 @ 0x1806F2384
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BuildRegistryKeyMap_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 272), a2);
}
