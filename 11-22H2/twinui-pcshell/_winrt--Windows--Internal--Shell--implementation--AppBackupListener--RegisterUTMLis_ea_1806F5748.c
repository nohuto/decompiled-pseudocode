/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterUTMListeners_::_1_::dtor$11 @ 0x1806F5748
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterUTMListeners_::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 256));
}
