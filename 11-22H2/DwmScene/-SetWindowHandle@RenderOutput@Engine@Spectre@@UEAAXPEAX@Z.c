/*
 * XREFs of ?SetWindowHandle@RenderOutput@Engine@Spectre@@UEAAXPEAX@Z @ 0x18002CBB0
 * Callers:
 *     ?SetWindowHandle@RenderOutputD3D11Window@D3D11@Engine@Spectre@@UEAAXPEAX@Z @ 0x1800CAB00 (-SetWindowHandle@RenderOutputD3D11Window@D3D11@Engine@Spectre@@UEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::RenderOutput::SetWindowHandle(Spectre::Engine::RenderOutput *this, void *a2)
{
  *((_QWORD *)this + 19) = a2;
}
