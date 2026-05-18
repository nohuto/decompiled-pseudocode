/*
 * XREFs of _Spectre::Engine::D3D11::RenderDeviceD3D11::SetAntialiasingQuality_::_1_::dtor$1 @ 0x1800E7CE5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::SetAntialiasingQuality_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>(a2 + 128);
}
