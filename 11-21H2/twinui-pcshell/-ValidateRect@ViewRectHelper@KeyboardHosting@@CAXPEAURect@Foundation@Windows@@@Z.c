/*
 * XREFs of ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x18022F208
 * Callers:
 *     ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x18046AD94 (-GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@0@Z.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x1800BEA64 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NUtagRECT@@@Z @ 0x180460EC0 (-IsRectNull@KeyboardHosting@@YA_NUtagRECT@@@Z.c)
 */

void __fastcall KeyboardHosting::ViewRectHelper::ValidateRect(__m128i *a1)
{
  HWND ForegroundWindow; // rax
  struct tagRECT v3; // xmm6
  struct tagRECT *v4; // rdx
  __m128 v5; // xmm3
  float v6; // xmm2_4
  __m128i v7; // [rsp+20h] [rbp-48h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-38h] BYREF

  ForegroundWindow = GetForegroundWindow();
  v3 = 0LL;
  Rect = 0LL;
  if ( ForegroundWindow )
  {
    GetWindowRect(ForegroundWindow, &Rect);
    v3 = Rect;
  }
  v7 = *a1;
  if ( !KeyboardHosting::IsRectNull((float *)v7.m128i_i32) )
  {
    if ( *(float *)&a1->m128i_i32[2] < 1.0 )
      a1->m128i_i32[2] = 1065353216;
    if ( *(float *)&a1->m128i_i32[3] < 1.0 )
      a1->m128i_i32[3] = 1065353216;
    v7 = (__m128i)v3;
    if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)&v7, v4) )
    {
      v5 = (__m128)_mm_loadu_si128(a1);
      v6 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
      *(float *)a1->m128i_i32 = (float)(int)v5.m128_f32[0];
      *(float *)&a1->m128i_i32[1] = (float)(int)v6;
      *(float *)&a1->m128i_i32[2] = (float)((int)(float)(_mm_shuffle_ps(v5, v5, 170).m128_f32[0] + v5.m128_f32[0])
                                          - (int)v5.m128_f32[0]);
      *(float *)&a1->m128i_i32[3] = (float)((int)(float)(_mm_shuffle_ps(v5, v5, 255).m128_f32[0] + v6) - (int)v6);
    }
  }
}
