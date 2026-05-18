/*
 * XREFs of _Spectre::Engine::D3D11::RenderOutputD3D11Gdi::UpdateBackBufferTexture_::_1_::dtor$0 @ 0x1800F186B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@QEAA@XZ @ 0x18000D430 (--1-$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderOutputD3D11Gdi::UpdateBackBufferTexture_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    Microsoft::WRL::ComPtr<ID3D11DeviceContext1>::~ComPtr<ID3D11DeviceContext1>(*(void **)(a2 + 72));
  }
}
