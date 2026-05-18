/*
 * XREFs of ?SetRenderingModeOverride@Material@Engine@Spectre@@SAXW4ERenderingMode@23@0@Z @ 0x180044860
 * Callers:
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Material::SetRenderingModeOverride(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a1;
  Spectre::Engine::Material::s_renderingModeOverride[a1] = a2;
  return result;
}
