/*
 * XREFs of _Spectre::UpdateScene::Engine::UpdateScene_::_1_::dtor$1 @ 0x1800E42F1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::UpdateScene::Engine::UpdateScene_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>(a2 + 144);
}
