/*
 * XREFs of ?SetRenderTargetDynamicScaling@RenderOutput@Engine@Spectre@@UEAA_NMM@Z @ 0x18002CB50
 * Callers:
 *     ?SetRenderTargetDynamicScaling@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@UEAA_NMM@Z @ 0x1800CA8B0 (-SetRenderTargetDynamicScaling@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@UEAA_NMM@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::RenderOutput::SetRenderTargetDynamicScaling(
        Spectre::Engine::RenderOutput *this,
        float a2,
        float a3)
{
  bool result; // al

  if ( a2 < 0.1 || a2 > 1.0 || a3 < 0.1 || a3 > 1.0 )
    return 0;
  *((float *)this + 48) = a2;
  result = 1;
  *((float *)this + 49) = a3;
  return result;
}
