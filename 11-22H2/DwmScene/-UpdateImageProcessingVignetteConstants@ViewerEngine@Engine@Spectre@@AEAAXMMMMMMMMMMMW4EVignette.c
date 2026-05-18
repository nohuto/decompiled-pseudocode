/*
 * XREFs of ?UpdateImageProcessingVignetteConstants@ViewerEngine@Engine@Spectre@@AEAAXMMMMMMMMMMMW4EVignetteBlendMode@23@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@AEAV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@6@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@333@Z @ 0x18006AD5C
 * Callers:
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     _o_sqrtf_0 @ 0x18000C074 (_o_sqrtf_0.c)
 *     _o_tanf_0 @ 0x18000C080 (_o_tanf_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetVector4@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUVector4@Math@Utils@3@@Z @ 0x1800859E4 (-SetVector4@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ViewerEngine::UpdateImageProcessingVignetteConstants(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        float a11,
        float a12,
        int a13,
        __int64 a14,
        _QWORD *a15)
{
  float v15; // xmm7_4
  std::_Ref_count_base *v16; // rcx

  v15 = o_tanf_0((float)(a11 * 0.017453292) * 0.5);
  o_sqrtf_0((float)(v15 * a12) * v15);
  Spectre::Engine::ShaderPropertyBlock::SetVector4(*a15);
  Spectre::Engine::ShaderPropertyBlock::SetVector4(*a15);
  Spectre::Engine::ShaderPropertyBlock::SetVector4(*a15);
  Spectre::Engine::ShaderPropertyBlock::SetVector4(*a15);
  v16 = *(std::_Ref_count_base **)(a14 + 8);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
}
