/*
 * XREFs of _Spectre::Engine::D3D11::RenderOutputD3D11::Present_::_1_::dtor$0 @ 0x1800E5F4B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Spectre::Engine::D3D11::RenderOutputD3D11::Present_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_lock<std::mutex>::~unique_lock<std::mutex>(a2 + 32);
}
