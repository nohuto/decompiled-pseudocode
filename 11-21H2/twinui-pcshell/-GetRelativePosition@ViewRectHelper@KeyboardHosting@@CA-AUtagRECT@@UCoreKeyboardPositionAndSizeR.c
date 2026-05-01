/*
 * XREFs of ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18046AF8C
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18046B180 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x1805F4C90 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 *     ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1805F4FE0 (-ShiftRectIntoContainer@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 */

_OWORD *__fastcall KeyboardHosting::ViewRectHelper::GetRelativePosition(
        _OWORD *a1,
        _DWORD *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5)
{
  __m128 v5; // xmm2
  int v9; // ebx
  float v10; // xmm1_4
  __m128i v12; // xmm0
  __int32 v13; // r9d
  int v14; // ecx
  int v15; // edx
  __int32 v16; // r8d
  int v17; // ecx
  const struct tagRECT *v18; // r9
  int v19; // ecx
  __int128 v20; // xmm0
  _OWORD *result; // rax
  __m128i v22; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v23; // [rsp+40h] [rbp-30h] BYREF
  __m128i v24; // [rsp+50h] [rbp-20h] BYREF

  v5 = (__m128)_mm_loadu_si128((const __m128i *)a3);
  v22.m128i_i64[0] = a5;
  v9 = a2[6];
  v10 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v23.left = (int)v5.m128_f32[0];
  v23.top = (int)v10;
  v23.bottom = (int)(float)(_mm_shuffle_ps(v5, v5, 255).m128_f32[0] + v10);
  v23.right = (int)(float)(_mm_shuffle_ps(v5, v5, 170).m128_f32[0] + v5.m128_f32[0]);
  v12 = *(__m128i *)Windows::UI::Immersive::QueryRelativePosition(&v24, &v23, &v22);
  v24 = v12;
  if ( v9 == 1 )
  {
    v15 = v24.m128i_i32[1];
    if ( v24.m128i_i32[1] >= a4[3] )
    {
      v17 = (int)*(float *)(a3 + 4);
      if ( v17 <= a4[1] && v17 - a4[1] >= v22.m128i_i32[1] )
      {
        v24.m128i_i32[1] = (int)*(float *)(a3 + 4);
        v24.m128i_i32[3] = v17 + v22.m128i_i32[1];
        v15 = v17;
      }
    }
    goto LABEL_15;
  }
  v13 = a4[1];
  if ( _mm_srli_si128(v12, 8).m128i_i32[1] > v13
    || (v14 = (int)(float)(*(float *)(a3 + 12) + *(float *)(a3 + 4)), v14 < a4[3])
    || v14 - a4[3] < v22.m128i_i32[1] )
  {
    v15 = v24.m128i_i32[1];
  }
  else
  {
    v24.m128i_i32[3] = (int)(float)(*(float *)(a3 + 12) + *(float *)(a3 + 4));
    v15 = v14 - v22.m128i_i32[1];
    v24.m128i_i32[1] = v14 - v22.m128i_i32[1];
  }
  if ( v9 == 2 )
  {
LABEL_15:
    v24.m128i_i32[0] = *a4 + a2[3];
    v16 = v24.m128i_i32[0];
    v24.m128i_i32[2] = v24.m128i_i32[0] + v22.m128i_i32[0];
    goto LABEL_16;
  }
  if ( ((v9 - 4) & 0xFFFFFFFB) == 0 )
  {
    v15 = v13 + a2[4];
    v24.m128i_i32[1] = v15;
    v24.m128i_i32[3] = v15 + v22.m128i_i32[1];
  }
  v16 = v24.m128i_i32[0];
LABEL_16:
  v18 = (const struct tagRECT *)(unsigned int)(int)*(float *)(a3 + 8);
  v22 = v24;
  v19 = (int)*(float *)(a3 + 12);
  if ( v24.m128i_i32[2] - v16 > (int)v18 )
    v22.m128i_i32[2] = (_DWORD)v18 + v16;
  if ( v24.m128i_i32[3] - v15 > v19 )
    v22.m128i_i32[3] = v19 + v22.m128i_i32[1];
  v24 = v22;
  v20 = (__int128)*Windows::UI::Immersive::ShiftRectIntoContainer(
                     (Windows::UI::Immersive *)&v22,
                     &v23,
                     (const struct Windows::UI::Immersive::CConstraint *)&v24,
                     v18);
  result = a1;
  *a1 = v20;
  return result;
}
