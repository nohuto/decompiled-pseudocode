/*
 * XREFs of _Spectre::Utils::Internal::SimpleCancellationToken::SetCancelledCallback_::_1_::dtor$1 @ 0x1800F1E64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Spectre::Utils::Internal::SimpleCancellationToken::SetCancelledCallback_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 40));
}
