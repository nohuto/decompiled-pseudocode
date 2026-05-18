/*
 * XREFs of ?Clamp@Math@Utils@Spectre@@YAMMMM@Z @ 0x18001112C
 * Callers:
 *     ??0RenderOutputDwm@@QEAA@UOutputDescription@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@5@IIIM@Z @ 0x180010E24 (--0RenderOutputDwm@@QEAA@UOutputDescription@Engine@Spectre@@V-$shared_ptr@VRenderDevice@Engine@S.c)
 *     ?FromHSB@Color@Math@Utils@Spectre@@SA?AU1234@MMM@Z @ 0x18001C1C0 (-FromHSB@Color@Math@Utils@Spectre@@SA-AU1234@MMM@Z.c)
 *     ?LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z @ 0x18003C918 (-LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z.c)
 *     Spectre::Engine::GetColorGradingData @ 0x180066AC0 (Spectre--Engine--GetColorGradingData.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 *     ?SetWeight@ColorTransform@Engine@Spectre@@QEAAXM@Z @ 0x180091124 (-SetWeight@ColorTransform@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetElevationLowerLimit@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180092FA0 (-SetElevationLowerLimit@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetElevationUpperLimit@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180092FF8 (-SetElevationUpperLimit@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180093500 (-Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     ?ApplyBloom@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@6@2@Z @ 0x180095DA0 (-ApplyBloom@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@AEBV-$shared_ptr.c)
 *     ?CalculateBlurConstants@ImageProcessingEffectBlur@Engine@Spectre@@IEBAXAEAV?$array@UVector4@Math@Utils@Spectre@@$0BA@@std@@0MM@Z @ 0x18009C688 (-CalculateBlurConstants@ImageProcessingEffectBlur@Engine@Spectre@@IEBAXAEAV-$array@UVector4@Math.c)
 * Callees:
 *     <none>
 */

float __fastcall Spectre::Utils::Math::Clamp(Spectre::Utils::Math *this, float a2, float a3, float a4)
{
  float v4; // xmm0_4
  float v5; // xmm0_4

  v5 = fmaxf(v4, a2);
  return fminf(v5, a3);
}
