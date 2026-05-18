/*
 * XREFs of Spectre::Engine::GetColorGradingData @ 0x180066AC0
 * Callers:
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     _o_fmodf_0 @ 0x18000C038 (_o_fmodf_0.c)
 *     ?Clamp@Math@Utils@Spectre@@YAMMMM@Z @ 0x18001112C (-Clamp@Math@Utils@Spectre@@YAMMMM@Z.c)
 *     ?FromHSB@Color@Math@Utils@Spectre@@SA?AU1234@MMM@Z @ 0x18001C1C0 (-FromHSB@Color@Math@Utils@Spectre@@SA-AU1234@MMM@Z.c)
 *     Spectre::Engine::ApplyColorGradingSliderNonlinear @ 0x180064ADC (Spectre--Engine--ApplyColorGradingSliderNonlinear.c)
 */

float *__fastcall Spectre::Engine::GetColorGradingData(float *a1, __int64 a2, __int64 a3, float a4)
{
  Spectre::Utils::Math *v5; // rcx
  float v6; // xmm6_4
  Spectre::Utils::Math *v7; // rcx
  float v8; // xmm9_4
  float v9; // xmm12_4
  Spectre::Utils::Math *v10; // rcx
  float v11; // xmm0_4
  __int64 v12; // rdx
  __int64 v13; // r8
  float v14; // xmm6_4
  float *result; // rax

  Spectre::Utils::Math::Clamp((Spectre::Utils::Math *)a1, 0.0, 360.0, a4);
  v6 = Spectre::Utils::Math::Clamp(v5, -100.0, 100.0, a4);
  v8 = Spectre::Utils::Math::Clamp(v7, -100.0, 100.0, a4);
  v9 = Spectre::Engine::ApplyColorGradingSliderNonlinear(v6) * 0.5;
  v11 = Spectre::Utils::Math::Clamp(v10, -100.0, 100.0, a4);
  v14 = Spectre::Engine::ApplyColorGradingSliderNonlinear(v11);
  if ( v9 < 0.0 )
    o_fmodf_0();
  Spectre::Utils::Math::Color::FromHSB((__int64)a1, v12, v13, (float)(v14 * 0.25) + 50.0);
  result = a1;
  *(__m128 *)a1 = _mm_mul_ps((__m128)_xmm, *(__m128 *)a1);
  a1[3] = (float)(v8 * 0.0099999998) + 1.0;
  return result;
}
