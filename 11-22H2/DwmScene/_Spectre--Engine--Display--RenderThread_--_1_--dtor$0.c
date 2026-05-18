/*
 * XREFs of _Spectre::Engine::Display::RenderThread_::_1_::dtor$0 @ 0x1800E781B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Spectre::Engine::Display::RenderThread_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 80));
}
