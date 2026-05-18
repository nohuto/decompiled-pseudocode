/*
 * XREFs of _SpectreRenderer::RuntimeClassInitialize_::_1_::dtor$5 @ 0x1800E4689
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SpectreRenderer::RuntimeClassInitialize_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>(a2 + 288);
}
