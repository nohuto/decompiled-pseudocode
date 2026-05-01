/*
 * XREFs of ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x18046AD94
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18046B180 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x1800BEA64 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x18022F208 (-ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z.c)
 */

__m128i *__fastcall KeyboardHosting::ViewRectHelper::GetAvoidanceRect(__m128i *a1, __m128i *a2, __m128i *a3)
{
  __m128 v6; // xmm2
  float v7; // xmm1_4
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  KeyboardHosting::ViewRectHelper::ValidateRect(a2);
  KeyboardHosting::ViewRectHelper::ValidateRect(a3);
  *a1 = 0LL;
  v9 = *a2;
  if ( !KeyboardHosting::IsRectNull((float *)v9.m128i_i32) )
  {
    v9 = *a3;
    if ( !KeyboardHosting::IsRectNull((float *)v9.m128i_i32) )
    {
      v6 = (__m128)_mm_loadu_si128(a2);
      v7 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
      v9.m128i_i32[0] = (int)v6.m128_f32[0];
      v9.m128i_i32[2] = (int)(float)(_mm_shuffle_ps(v6, v6, 170).m128_f32[0] + v6.m128_f32[0]);
      v9.m128i_i32[1] = (int)v7;
LABEL_9:
      v9.m128i_i32[3] = (int)(float)(_mm_shuffle_ps(v6, v6, 255).m128_f32[0] + v7);
      *a1 = v9;
      return a1;
    }
  }
  v9 = *a2;
  if ( !KeyboardHosting::IsRectNull((float *)v9.m128i_i32) )
  {
    v6 = (__m128)_mm_loadu_si128(a2);
LABEL_8:
    v9.m128i_i32[0] = (int)v6.m128_f32[0];
    v7 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
    v9.m128i_i32[1] = (int)v7;
    v9.m128i_i32[2] = (int)(float)(_mm_shuffle_ps(v6, v6, 170).m128_f32[0] + v6.m128_f32[0]);
    goto LABEL_9;
  }
  v9 = *a3;
  if ( !KeyboardHosting::IsRectNull((float *)v9.m128i_i32) )
  {
    v6 = (__m128)_mm_loadu_si128(a3);
    goto LABEL_8;
  }
  return a1;
}
