/*
 * XREFs of ??_ERenderOutputD3D11Xaml@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800C9060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1RenderOutputD3D11@D3D11@Engine@Spectre@@MEAA@XZ @ 0x1800C8FA0 (--1RenderOutputD3D11@D3D11@Engine@Spectre@@MEAA@XZ.c)
 */

Spectre::Engine::D3D11::RenderOutputD3D11Xaml *__fastcall Spectre::Engine::D3D11::RenderOutputD3D11Xaml::`vector deleting destructor'(
        Spectre::Engine::D3D11::RenderOutputD3D11Xaml *this,
        char a2)
{
  Spectre::Engine::D3D11::RenderOutputD3D11::~RenderOutputD3D11(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
