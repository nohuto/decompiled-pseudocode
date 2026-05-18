/*
 * XREFs of ??_GRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800D8EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D8DF8 (--1RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic *__fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::`scalar deleting destructor'(
        Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic *this,
        char a2)
{
  Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::~RenderOutputD3D11Holographic(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
