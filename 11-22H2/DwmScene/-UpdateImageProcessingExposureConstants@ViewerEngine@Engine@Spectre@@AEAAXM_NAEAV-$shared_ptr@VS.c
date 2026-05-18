/*
 * XREFs of ?UpdateImageProcessingExposureConstants@ViewerEngine@Engine@Spectre@@AEAAXM_NAEAV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x18006AD14
 * Callers:
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     powf @ 0x18000C05C (powf.c)
 */

double __fastcall Spectre::Engine::ViewerEngine::UpdateImageProcessingExposureConstants(
        __int64 a1,
        float a2,
        char a3,
        _QWORD *a4,
        __int64 a5)
{
  if ( !a3 )
    LODWORD(a2) ^= _xmm;
  powf(2.0, a2);
  return Spectre::Engine::ShaderPropertyBlock::SetScalar(*a4);
}
