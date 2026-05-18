/*
 * XREFs of ?CalculateFramingDistanceFromRadius@ViewerCamera@Engine@Spectre@@QEBAMM@Z @ 0x180092180
 * Callers:
 *     ?GetClosestAllowedDistance@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092C64 (-GetClosestAllowedDistance@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 * Callees:
 *     _o_sqrtf_0 @ 0x18000C074 (_o_sqrtf_0.c)
 *     _o_tanf_0 @ 0x18000C080 (_o_tanf_0.c)
 *     ?UpdateAspectRatioAutomatic@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005D88C (-UpdateAspectRatioAutomatic@Camera@Engine@Spectre@@IEBAXXZ.c)
 */

float __fastcall Spectre::Engine::ViewerCamera::CalculateFramingDistanceFromRadius(
        Spectre::Engine::ViewerCamera *this,
        float a2)
{
  float v3; // xmm7_4
  float v4; // xmm3_4
  float v5; // xmm7_4
  float v6; // xmm6_4

  Spectre::Engine::Camera::UpdateAspectRatioAutomatic(this);
  v3 = o_tanf_0((float)(*((float *)this + 82) * 0.017453292) * 0.5);
  v4 = v3 * v3;
  v5 = v3 / (float)(1.0 / *((float *)this + 83));
  v6 = o_sqrtf_0((float)(1.0 / v4) + 1.0) * a2;
  return fmaxf(v6, o_sqrtf_0((float)(1.0 / (float)(v5 * v5)) + 1.0) * a2);
}
