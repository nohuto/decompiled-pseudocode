/*
 * XREFs of _SpectreRenderer::Render_::_1_::dtor$4 @ 0x1800E4641
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SpectreRenderer::Render_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>(a2 + 248);
}
