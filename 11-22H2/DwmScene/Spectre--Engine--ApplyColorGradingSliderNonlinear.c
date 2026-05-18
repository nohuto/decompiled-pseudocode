/*
 * XREFs of Spectre::Engine::ApplyColorGradingSliderNonlinear @ 0x180064ADC
 * Callers:
 *     Spectre::Engine::GetColorGradingData @ 0x180066AC0 (Spectre--Engine--GetColorGradingData.c)
 * Callees:
 *     powf @ 0x18000C05C (powf.c)
 */

float __fastcall Spectre::Engine::ApplyColorGradingSliderNonlinear(float a1)
{
  float v1; // xmm6_4
  float v2; // xmm0_4

  v1 = a1 / 100.0;
  v2 = powf(COERCE_FLOAT(COERCE_UNSIGNED_INT(a1 / 100.0) & _xmm), 2.0);
  if ( v1 < 0.0 )
    v2 = v2 * -1.0;
  return v2 * 100.0;
}
