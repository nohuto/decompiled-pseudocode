/*
 * XREFs of ?UpdateImageProcessingColorCurveConstants@ViewerEngine@Engine@Spectre@@AEAAXUColor@Math@Utils@3@000AEAV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@8@22@Z @ 0x18006ABE0
 * Callers:
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     ?SetColor@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUColor@Math@Utils@3@@Z @ 0x1800853D8 (-SetColor@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 */

__int64 __fastcall Spectre::Engine::ViewerEngine::UpdateImageProcessingColorCurveConstants(
        __int64 a1,
        __m128 *a2,
        __m128 *a3,
        __m128 *a4,
        __m128 *a5,
        _QWORD *a6)
{
  __m128 v6; // xmm4
  __int64 v7; // rcx
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 v10; // xmm2

  v6 = *a2;
  v7 = *a6;
  v8 = _mm_mul_ps(*a2, *a3);
  v9 = _mm_mul_ps(*a4, *a2);
  a3->m128_i32[0] = v8.m128_i32[0];
  a3->m128_i32[1] = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  a3->m128_i32[2] = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
  a3->m128_i32[3] = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
  v10 = _mm_mul_ps(*a5, v6);
  a4->m128_i32[1] = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
  a4->m128_i32[2] = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  a4->m128_i32[0] = v9.m128_i32[0];
  a5->m128_i32[0] = v10.m128_i32[0];
  a5->m128_i32[3] = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
  a4->m128_i32[3] = _mm_shuffle_ps(v9, v9, 255).m128_u32[0];
  a5->m128_i32[1] = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
  a5->m128_i32[2] = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
  Spectre::Engine::ShaderPropertyBlock::SetColor(v7);
  Spectre::Engine::ShaderPropertyBlock::SetColor(*a6);
  return Spectre::Engine::ShaderPropertyBlock::SetColor(*a6);
}
