/*
 * XREFs of _Spectre::Engine::Display::RenderInternal_::_1_::dtor$1 @ 0x1800E7809
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Display::RenderInternal_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>(a2 + 240);
}
