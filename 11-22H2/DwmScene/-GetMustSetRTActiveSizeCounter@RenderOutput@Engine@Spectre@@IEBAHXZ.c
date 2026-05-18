/*
 * XREFs of ?GetMustSetRTActiveSizeCounter@RenderOutput@Engine@Spectre@@IEBAHXZ @ 0x18002C2B0
 * Callers:
 *     ?SetRenderTargetDynamicScaling@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@UEAA_NMM@Z @ 0x1800CA8B0 (-SetRenderTargetDynamicScaling@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@UEAA_NMM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::RenderOutput::GetMustSetRTActiveSizeCounter(Spectre::Engine::RenderOutput *this)
{
  return *((unsigned int *)this + 50);
}
