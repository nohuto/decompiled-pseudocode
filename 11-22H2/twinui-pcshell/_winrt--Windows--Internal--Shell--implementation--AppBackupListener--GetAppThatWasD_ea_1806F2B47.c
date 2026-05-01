/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted_::_1_::dtor$2 @ 0x1806F2B47
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 136), a2);
}
