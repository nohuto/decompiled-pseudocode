/*
 * XREFs of _Spectre::dtor$1::Engine::CreateResource_Spectre::Engine::VertexLayout__::_1_::dtor$1 @ 0x1800E3B63
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::dtor_1::Engine::CreateResource_Spectre::Engine::VertexLayout__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>(a2 + 56);
}
