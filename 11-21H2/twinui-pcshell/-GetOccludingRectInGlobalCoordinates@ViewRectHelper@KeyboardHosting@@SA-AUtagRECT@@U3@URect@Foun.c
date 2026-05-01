/*
 * XREFs of ?GetOccludingRectInGlobalCoordinates@ViewRectHelper@KeyboardHosting@@SA?AUtagRECT@@U3@URect@Foundation@Windows@@@Z @ 0x18046AF18
 * Callers:
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18045C7D4 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180461AA8 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x1800BEA64 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 */

unsigned int *__fastcall KeyboardHosting::ViewRectHelper::GetOccludingRectInGlobalCoordinates(
        _OWORD *a1,
        _OWORD *a2,
        __int128 *a3)
{
  __int128 v3; // xmm1
  float *v4; // r8
  unsigned int *v5; // r9
  __m128i v6; // xmm0
  float v7; // xmm1_4
  float v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a3;
  *a1 = *a2;
  *(_OWORD *)v9 = v3;
  if ( !KeyboardHosting::IsRectNull(v9) )
  {
    *v5 += (int)*v4;
    v6 = _mm_cvtsi32_si128(*v5);
    v5[1] += (int)v4[1];
    v7 = (float)(int)v5[1] + v4[3];
    v5[2] = (int)(float)(_mm_cvtepi32_ps(v6).m128_f32[0] + v4[2]);
    v5[3] = (int)v7;
  }
  return v5;
}
