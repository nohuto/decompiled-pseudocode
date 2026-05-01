/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted_::_1_::dtor$5 @ 0x1806F2B6B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 96));
}
