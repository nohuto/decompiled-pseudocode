/*
 * XREFs of powf @ 0x18000C05C
 * Callers:
 *     Spectre::Engine::ApplyColorGradingSliderNonlinear @ 0x180064ADC (Spectre--Engine--ApplyColorGradingSliderNonlinear.c)
 *     ?ToLinearRGB@Color@Math@Utils@Spectre@@QEBA?AU1234@XZ @ 0x180067DC0 (-ToLinearRGB@Color@Math@Utils@Spectre@@QEBA-AU1234@XZ.c)
 *     ?UpdateImageProcessingExposureConstants@ViewerEngine@Engine@Spectre@@AEAAXM_NAEAV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x18006AD14 (-UpdateImageProcessingExposureConstants@ViewerEngine@Engine@Spectre@@AEAAXM_NAEAV-$shared_ptr@VS.c)
 *     Spectre::Engine::D3D11::_anonymous_namespace_::CalculateFinalDepthBias @ 0x1800D4CAC (Spectre--Engine--D3D11--_anonymous_namespace_--CalculateFinalDepthBias.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf(float X, float Y)
{
  return _o_powf(X, Y);
}
