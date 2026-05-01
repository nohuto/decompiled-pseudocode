/*
 * XREFs of _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$3 @ 0x1806406FD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall StartupAppMonitor::StartupToastNotifier_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 224));
}
