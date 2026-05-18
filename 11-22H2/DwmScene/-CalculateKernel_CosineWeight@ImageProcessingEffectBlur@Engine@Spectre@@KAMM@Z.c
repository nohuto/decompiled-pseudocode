/*
 * XREFs of ?CalculateKernel_CosineWeight@ImageProcessingEffectBlur@Engine@Spectre@@KAMM@Z @ 0x18009C9D0
 * Callers:
 *     <none>
 * Callees:
 *     cosf @ 0x18000C008 (cosf.c)
 */

float __fastcall Spectre::Engine::ImageProcessingEffectBlur::CalculateKernel_CosineWeight(float a1)
{
  return (float)(cosf(a1 * 3.1415927) * 0.5) + 0.5;
}
