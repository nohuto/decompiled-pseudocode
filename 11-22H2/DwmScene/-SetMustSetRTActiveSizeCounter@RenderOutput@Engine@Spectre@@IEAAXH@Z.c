/*
 * XREFs of ?SetMustSetRTActiveSizeCounter@RenderOutput@Engine@Spectre@@IEAAXH@Z @ 0x18002CB00
 * Callers:
 *     ?UpdateRenderTarget@RenderOutput@Engine@Spectre@@UEAAXMMMM@Z @ 0x18002D130 (-UpdateRenderTarget@RenderOutput@Engine@Spectre@@UEAAXMMMM@Z.c)
 *     ?SetRenderTargetDynamicScaling@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@UEAA_NMM@Z @ 0x1800CA8B0 (-SetRenderTargetDynamicScaling@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@UEAA_NMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::RenderOutput::SetMustSetRTActiveSizeCounter(
        Spectre::Engine::RenderOutput *this,
        int a2)
{
  *((_DWORD *)this + 50) = a2;
}
