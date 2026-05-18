/*
 * XREFs of ?CalculateKernel_GaussianWeight@ImageProcessingEffectBlur@Engine@Spectre@@KAMM@Z @ 0x18009CA00
 * Callers:
 *     <none>
 * Callees:
 *     _o_expf_0 @ 0x18000C014 (_o_expf_0.c)
 *     _o_sqrtf_0 @ 0x18000C074 (_o_sqrtf_0.c)
 */

float __fastcall Spectre::Engine::ImageProcessingEffectBlur::CalculateKernel_GaussianWeight(float a1)
{
  o_expf_0();
  return COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(a1 * a1) / 0.22222224) ^ _xmm)
       * (float)(1.0 / (float)(o_sqrtf_0(6.2831855) * 0.33333334));
}
