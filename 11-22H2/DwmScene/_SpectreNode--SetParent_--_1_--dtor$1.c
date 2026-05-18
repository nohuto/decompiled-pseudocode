/*
 * XREFs of _SpectreNode::SetParent_::_1_::dtor$1 @ 0x1800E42CD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SpectreNode::SetParent_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>(a2 + 176);
}
