/*
 * XREFs of ??_ERenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800C90A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800C8FF8 (--1RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::D3D11::RenderOutputD3D11Gdi *__fastcall Spectre::Engine::D3D11::RenderOutputD3D11Gdi::`vector deleting destructor'(
        Spectre::Engine::D3D11::RenderOutputD3D11Gdi *this,
        char a2)
{
  Spectre::Engine::D3D11::RenderOutputD3D11Gdi::~RenderOutputD3D11Gdi(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
