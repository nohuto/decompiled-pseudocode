/*
 * XREFs of ?SetEnabled@LightProbe@Engine@Spectre@@QEAAX_N@Z @ 0x180051C04
 * Callers:
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::LightProbe::SetEnabled(Spectre::Engine::LightProbe *this, char a2)
{
  *((_BYTE *)this + 88) = a2;
}
