/*
 * XREFs of _Spectre::Engine::D3D11::RenderDeviceD3D11::CopyBackBufferPixels_::_1_::dtor$1 @ 0x1800F1694
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::CopyBackBufferPixels_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_lock<std::mutex>::~unique_lock<std::mutex>(a2 + 208);
}
