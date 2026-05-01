/*
 * XREFs of ?GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@1PEAU9Foundation@8@PEA_N3@Z @ 0x18052FE54
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180536860 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x1800BE690 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18052F908 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetViewRectNearFocusedElement(
        __int128 *a1,
        float *a2,
        float *a3,
        __int64 a4,
        bool *a5,
        char *a6)
{
  float v6; // xmm1_4
  char v7; // si
  const struct Windows::Foundation::Rect *v11; // rdx
  int v12; // r13d
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __m128i *RelativePosition; // rax
  float v21; // xmm3_4
  __m128i v22; // xmm1
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // xmm0_8
  unsigned __int64 v25; // rdx
  float v26; // xmm4_4
  float v27; // xmm3_4
  int v28; // eax
  float v29; // xmm1_4
  float v30; // xmm2_4
  bool v31; // cc
  float v32; // xmm1_4
  float v33; // xmm2_4
  __int64 result; // rax
  __int128 v35; // [rsp+30h] [rbp-69h] BYREF
  _DWORD v36[4]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v37; // [rsp+50h] [rbp-49h] BYREF
  _OWORD v38[4]; // [rsp+60h] [rbp-39h] BYREF

  v6 = a3[1];
  v7 = 0;
  *(_OWORD *)a4 = 0LL;
  v11 = (const struct Windows::Foundation::Rect *)(unsigned int)(int)*a3;
  *a5 = 0;
  *a6 = 0;
  v12 = (int)v6;
  if ( KeyboardHosting::IsRectNull((KeyboardHosting *)(a1 + 3), v11) )
  {
    LODWORD(v35) = *((_DWORD *)a1 + 2);
    v16 = *((_DWORD *)a1 + 1);
  }
  else
  {
    LODWORD(v35) = (int)*((float *)a1 + 14);
    v16 = (int)*((float *)a1 + 15);
  }
  v17 = *a1;
  v37 = *(_OWORD *)a2;
  DWORD1(v35) = v16;
  v38[1] = a1[1];
  v18 = a1[3];
  v38[0] = v17;
  v19 = a1[2];
  v36[0] = v13;
  v36[2] = v15;
  v36[3] = v14;
  v38[3] = v18;
  v36[1] = v12;
  v38[2] = v19;
  RelativePosition = (__m128i *)KeyboardHosting::ViewRectHelper::GetRelativePosition(&v35, v38, (float *)&v37, v36, v35);
  v21 = *a2 + a2[2];
  v22 = *RelativePosition;
  v23 = RelativePosition->m128i_i64[0];
  v24 = _mm_srli_si128(v22, 8).m128i_u64[0];
  v25 = HIDWORD(v23);
  v26 = fmaxf(*a2, (float)(int)v23);
  *(float *)(a4 + 8) = (float)((int)v24 - (int)v23);
  *(float *)(a4 + 12) = (float)(HIDWORD(v24) - HIDWORD(v23));
  v27 = fminf(v21 - (float)((int)v24 - (int)v23 + 1), v26);
  if ( ((*((_DWORD *)a1 + 6) - 4) & 0xFFFFFFFB) != 0 )
  {
    v28 = *((_DWORD *)a1 + 4);
    if ( (int)v25 <= v12 )
    {
      v29 = a2[1];
      v30 = (float)((int)v25 - v28);
      v31 = v29 <= v30;
      goto LABEL_10;
    }
    v32 = a2[3] + a2[1];
    v30 = (float)((int)v25 + v28);
  }
  else
  {
    v33 = a2[1];
    v32 = v33 + a2[3];
    v30 = fmaxf(v33, (float)SHIDWORD(v23));
  }
  v29 = v32 - (float)(HIDWORD(v24) - HIDWORD(v23) + 1);
  v31 = v30 <= v29;
LABEL_10:
  if ( v31 )
    v29 = v30;
  *a5 = v26 != v27;
  if ( v30 != v29 )
    v7 = 1;
  *a6 = v7;
  result = 0LL;
  *(float *)a4 = v27;
  *(float *)(a4 + 4) = v29;
  return result;
}
