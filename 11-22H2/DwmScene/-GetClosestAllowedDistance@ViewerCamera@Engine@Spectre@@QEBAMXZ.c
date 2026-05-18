/*
 * XREFs of ?GetClosestAllowedDistance@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092C64
 * Callers:
 *     ?Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180093500 (-Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     ?CalculateFramingDistanceFromRadius@ViewerCamera@Engine@Spectre@@QEBAMM@Z @ 0x180092180 (-CalculateFramingDistanceFromRadius@ViewerCamera@Engine@Spectre@@QEBAMM@Z.c)
 */

float __fastcall Spectre::Engine::ViewerCamera::GetClosestAllowedDistance(Spectre::Engine::ViewerCamera *this)
{
  float result; // xmm0_4
  float v3; // xmm1_4

  if ( !*((_DWORD *)this + 454) )
    return *((float *)this + 457);
  v3 = Spectre::Engine::ViewerCamera::CalculateFramingDistanceFromRadius(this, *((float *)this + 453));
  result = *((float *)this + 457);
  if ( result <= v3 )
    return v3;
  return result;
}
