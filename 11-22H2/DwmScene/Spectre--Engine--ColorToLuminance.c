/*
 * XREFs of Spectre::Engine::ColorToLuminance @ 0x180051890
 * Callers:
 *     ?UpdateCachedState@LightProbe@Engine@Spectre@@AEAAXXZ @ 0x180051CA0 (-UpdateCachedState@LightProbe@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall Spectre::Engine::ColorToLuminance(float *a1)
{
  return (float)((float)(a1[1] * 0.71520001) + (float)(*a1 * 0.21259999)) + (float)(a1[2] * 0.0722);
}
