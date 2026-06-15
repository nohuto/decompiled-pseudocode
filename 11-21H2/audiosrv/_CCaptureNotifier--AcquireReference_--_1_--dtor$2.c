/*
 * XREFs of _CCaptureNotifier::AcquireReference_::_1_::dtor$2 @ 0x180104453
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CCaptureNotifier::AcquireReference_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>((_Mtx_t *)(a2 + 128));
}
