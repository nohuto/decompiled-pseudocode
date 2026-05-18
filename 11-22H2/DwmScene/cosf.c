/*
 * XREFs of cosf @ 0x18000C008
 * Callers:
 *     ?Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180093500 (-Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     Spectre::Engine::_anonymous_namespace_::RotateVectorAroundY @ 0x180096AEC (Spectre--Engine--_anonymous_namespace_--RotateVectorAroundY.c)
 *     ?CalculateKernel_CosineWeight@ImageProcessingEffectBlur@Engine@Spectre@@KAMM@Z @ 0x18009C9D0 (-CalculateKernel_CosineWeight@ImageProcessingEffectBlur@Engine@Spectre@@KAMM@Z.c)
 *     ?UpdateLightConstants@LightGatherer@Engine@Spectre@@CA?AV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@std@@AEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@@Z @ 0x1800A4764 (-UpdateLightConstants@LightGatherer@Engine@Spectre@@CA-AV-$array@V-$shared_ptr@$$CBVShadowMapCam.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl cosf(float X)
{
  return _o_cosf(X);
}
