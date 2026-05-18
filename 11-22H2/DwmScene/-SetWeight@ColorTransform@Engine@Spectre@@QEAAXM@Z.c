/*
 * XREFs of ?SetWeight@ColorTransform@Engine@Spectre@@QEAAXM@Z @ 0x180091124
 * Callers:
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     ?Clamp@Math@Utils@Spectre@@YAMMMM@Z @ 0x18001112C (-Clamp@Math@Utils@Spectre@@YAMMMM@Z.c)
 */

void __fastcall Spectre::Engine::ColorTransform::SetWeight(
        Spectre::Engine::ColorTransform *this,
        float a2,
        __int64 a3,
        float a4)
{
  *((float *)this + 40) = Spectre::Utils::Math::Clamp(this, 0.0, 1.0, a4);
}
