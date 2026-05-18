/*
 * XREFs of _Spectre::Engine::Display::AttachOutput_::_1_::dtor$0 @ 0x1800E77C1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Spectre::Engine::Display::AttachOutput_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 112));
}
