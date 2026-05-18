/*
 * XREFs of _Spectre::Engine::D3D11::RenderOutputD3D11::UpdateRenderTarget_::_1_::dtor$1 @ 0x1800F1898
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Spectre::Engine::D3D11::RenderOutputD3D11::UpdateRenderTarget_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_lock<std::mutex>::~unique_lock<std::mutex>(a2 + 104);
}
