/*
 * XREFs of ?HasHolographicSpaceProvider@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEBA_NXZ @ 0x1800D97E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::HasHolographicSpaceProvider(
        Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic *this)
{
  return std::operator!=<Spectre::Engine::Scene>((_QWORD *)this + 67);
}
