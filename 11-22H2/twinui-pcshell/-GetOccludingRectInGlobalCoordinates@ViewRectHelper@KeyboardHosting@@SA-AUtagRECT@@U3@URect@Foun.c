/*
 * XREFs of ?GetOccludingRectInGlobalCoordinates@ViewRectHelper@KeyboardHosting@@SA?AUtagRECT@@U3@URect@Foundation@Windows@@@Z @ 0x1802DE180
 * Callers:
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18050E368 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180514044 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x1800BE690 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 */

unsigned int *__fastcall KeyboardHosting::ViewRectHelper::GetOccludingRectInGlobalCoordinates(
        _OWORD *a1,
        const struct Windows::Foundation::Rect *a2,
        KeyboardHosting *a3)
{
  float *v3; // r8
  unsigned int *v4; // r9
  __m128i v5; // xmm0
  float v6; // xmm1_4

  *a1 = *(_OWORD *)a2;
  if ( !KeyboardHosting::IsRectNull(a3, a2) )
  {
    *v4 += (int)*v3;
    v5 = _mm_cvtsi32_si128(*v4);
    v4[1] += (int)v3[1];
    v6 = (float)(int)v4[1] + v3[3];
    v4[2] = (int)(float)(_mm_cvtepi32_ps(v5).m128_f32[0] + v3[2]);
    v4[3] = (int)v6;
  }
  return v4;
}
