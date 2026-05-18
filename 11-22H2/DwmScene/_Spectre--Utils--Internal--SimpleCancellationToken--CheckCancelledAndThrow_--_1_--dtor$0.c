/*
 * XREFs of _Spectre::Utils::Internal::SimpleCancellationToken::CheckCancelledAndThrow_::_1_::dtor$0 @ 0x1800E47BB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Spectre::Utils::Internal::SimpleCancellationToken::CheckCancelledAndThrow_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 32));
}
