/*
 * XREFs of ??_GRenderOutputD3D11Window@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800C90E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1RenderOutputD3D11Window@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800C9044 (--1RenderOutputD3D11Window@D3D11@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::D3D11::RenderOutputD3D11Window *__fastcall Spectre::Engine::D3D11::RenderOutputD3D11Window::`scalar deleting destructor'(
        Spectre::Engine::D3D11::RenderOutputD3D11Window *this,
        char a2)
{
  Spectre::Engine::D3D11::RenderOutputD3D11Window::~RenderOutputD3D11Window(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
