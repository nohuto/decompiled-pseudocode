/*
 * XREFs of ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18052F908
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18052FAEC (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@1PEAU9Foundation@8@PEA_N3@Z @ 0x18052FE54 (-GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRe.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x18074B6A4 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 *     ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x18074B9F8 (-ShiftRectIntoContainer@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 */

_OWORD *__fastcall KeyboardHosting::ViewRectHelper::GetRelativePosition(
        _OWORD *a1,
        _DWORD *a2,
        float *a3,
        _DWORD *a4,
        __int64 a5)
{
  float v6; // xmm0_4
  LONG v8; // r14d
  int v9; // esi
  LONG v12; // ecx
  LONG v13; // r15d
  float v14; // xmm0_4
  __m128i v15; // xmm0
  int v16; // edx
  __int32 v17; // r8d
  const struct tagRECT *v18; // r9
  int v19; // ecx
  __int128 v20; // xmm0
  _OWORD *result; // rax
  __m128i v22; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v23; // [rsp+40h] [rbp-30h] BYREF
  __m128i v24; // [rsp+50h] [rbp-20h] BYREF

  v6 = a3[3] + a3[1];
  v8 = (int)a3[1];
  v9 = a2[6];
  v22.m128i_i64[0] = a5;
  v12 = (int)*a3;
  v23.top = v8;
  v13 = (int)v6;
  v23.left = v12;
  v14 = a3[2];
  v23.bottom = v13;
  v23.right = (int)(float)(v14 + *a3);
  v15 = *(__m128i *)Windows::UI::Immersive::QueryRelativePosition(&v24, &v23, &v22);
  v24 = v15;
  if ( v9 == 1 )
  {
    v16 = v24.m128i_i32[1];
    if ( v24.m128i_i32[1] >= a4[3] && v8 <= a4[1] && v8 - a4[1] >= v22.m128i_i32[1] )
    {
      v16 = v8;
      v24.m128i_i32[1] = v8;
      v24.m128i_i32[3] = v8 + v22.m128i_i32[1];
    }
    goto LABEL_15;
  }
  if ( _mm_srli_si128(v15, 8).m128i_i32[1] > a4[1] || v13 < a4[3] || v13 - a4[3] < v22.m128i_i32[1] )
  {
    v16 = v24.m128i_i32[1];
  }
  else
  {
    v24.m128i_i32[3] = v13;
    v16 = v13 - v22.m128i_i32[1];
    v24.m128i_i32[1] = v13 - v22.m128i_i32[1];
  }
  if ( v9 == 2 )
  {
LABEL_15:
    v24.m128i_i32[0] = *a4 + a2[3];
    v17 = v24.m128i_i32[0];
    v24.m128i_i32[2] = v24.m128i_i32[0] + v22.m128i_i32[0];
    goto LABEL_16;
  }
  if ( ((v9 - 4) & 0xFFFFFFFB) == 0 )
  {
    v16 = a4[1] + a2[4];
    v24.m128i_i32[1] = v16;
    v24.m128i_i32[3] = v16 + v22.m128i_i32[1];
  }
  v17 = v24.m128i_i32[0];
LABEL_16:
  v18 = (const struct tagRECT *)(unsigned int)(int)a3[2];
  v22 = v24;
  v19 = (int)a3[3];
  if ( v24.m128i_i32[2] - v17 > (int)v18 )
    v22.m128i_i32[2] = (_DWORD)v18 + v17;
  if ( v24.m128i_i32[3] - v16 > v19 )
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
