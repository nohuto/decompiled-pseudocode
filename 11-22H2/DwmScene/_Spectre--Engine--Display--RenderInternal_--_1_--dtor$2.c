/*
 * XREFs of _Spectre::Engine::Display::RenderInternal_::_1_::dtor$2 @ 0x1800E3D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Display::RenderInternal_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>(a2 + 80);
}
