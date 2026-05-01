/*
 * XREFs of ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18052FAEC
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180536860 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x1800BE690 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x180513280 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x18052F7C0 (-GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@0@Z.c)
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18052F908 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
        __int128 *a1,
        float *a2,
        float *a3,
        float *a4,
        char a5,
        __int64 a6,
        bool *a7,
        char *a8)
{
  char v8; // di
  float v13; // xmm1_4
  float v14; // xmm0_4
  int v15; // eax
  float v16; // xmm1_4
  __int128 v17; // xmm1
  const struct tagRECT *v18; // rdx
  const struct Windows::Foundation::Rect *v19; // rdx
  __int128 *v20; // r8
  int v21; // eax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __m128i *RelativePosition; // rax
  float v29; // xmm3_4
  __m128i v30; // xmm1
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // xmm0_8
  unsigned __int64 v33; // rcx
  float v34; // xmm4_4
  float v35; // xmm3_4
  int v36; // eax
  float v37; // xmm2_4
  float v38; // xmm1_4
  bool v39; // cc
  float v40; // xmm2_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  const struct Windows::Foundation::Rect *v43; // rdx
  float v44; // xmm4_4
  float v45; // xmm1_4
  float v46; // xmm0_4
  __int64 result; // rax
  __int128 v48; // [rsp+30h] [rbp-A1h] BYREF
  __int128 v49; // [rsp+40h] [rbp-91h] BYREF
  char *v50; // [rsp+50h] [rbp-81h]
  __int128 v51; // [rsp+60h] [rbp-71h] BYREF
  _OWORD v52[4]; // [rsp+70h] [rbp-61h] BYREF
  __int128 v53; // [rsp+B0h] [rbp-21h] BYREF

  v8 = 0;
  v50 = a8;
  *(_OWORD *)a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( a5 )
  {
    v13 = a4[1];
    v14 = *a4 + a4[2];
    LODWORD(v53) = (int)*a4;
    v15 = (int)v13;
    v16 = v13 + a4[3];
    DWORD1(v53) = v15;
    DWORD2(v53) = (int)v14;
    HIDWORD(v53) = (int)v16;
  }
  else
  {
    v17 = *(_OWORD *)a3;
    v49 = *(_OWORD *)a4;
    v53 = v17;
    v53 = *(_OWORD *)KeyboardHosting::ViewRectHelper::GetAvoidanceRect((__int64)&v51, (float *)&v53, (float *)&v49);
  }
  v49 = v53;
  LOBYTE(v18) = KeyboardHosting::IsRectNull((KeyboardHosting *)(a1 + 3), (const struct Windows::Foundation::Rect *)a2);
  if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)&v49, v18) )
  {
    if ( (_BYTE)v19 )
    {
      LODWORD(v48) = *((_DWORD *)a1 + 2);
      v21 = *((_DWORD *)a1 + 1);
    }
    else
    {
      LODWORD(v48) = (int)*((float *)a1 + 14);
      v21 = (int)*((float *)a1 + 15);
    }
    v22 = *v20;
    DWORD1(v48) = v21;
    v23 = *(_OWORD *)a2;
    v53 = v22;
    v24 = *a1;
    v51 = v23;
    v25 = a1[1];
    v52[0] = v24;
    v26 = a1[2];
    v52[1] = v25;
    v27 = a1[3];
    v52[2] = v26;
    v52[3] = v27;
    RelativePosition = (__m128i *)KeyboardHosting::ViewRectHelper::GetRelativePosition(
                                    &v48,
                                    v52,
                                    (float *)&v51,
                                    &v53,
                                    v48);
    v29 = *a2;
    v30 = *RelativePosition;
    v31 = RelativePosition->m128i_i64[0];
    v32 = _mm_srli_si128(v30, 8).m128i_u64[0];
    v33 = HIDWORD(v31);
    v34 = (float)(int)v31;
    *(float *)(a6 + 8) = (float)((int)v32 - (int)v31);
    *(float *)(a6 + 12) = (float)(HIDWORD(v32) - HIDWORD(v31));
    if ( v29 > (float)(int)v31 )
      v34 = v29;
    v35 = (float)(v29 + a2[2]) - (float)((int)v32 - (int)v31 + 1);
    if ( v34 <= v35 )
      v35 = v34;
    if ( a5 && (*((_BYTE *)a1 + 24) & 4) != 0 )
      v35 = *a4;
    if ( ((*((_DWORD *)a1 + 6) - 4) & 0xFFFFFFFB) != 0 )
    {
      v36 = *((_DWORD *)a1 + 4);
      if ( (int)v33 <= SDWORD1(v49) )
      {
        v37 = a2[1];
        v38 = (float)((int)v33 - v36);
LABEL_18:
        v39 = v37 <= v38;
LABEL_25:
        if ( v39 )
          v37 = v38;
        *a7 = v34 != v35;
        if ( v38 != v37 )
          v8 = 1;
        *v50 = v8;
        goto LABEL_38;
      }
      v40 = a2[3] + a2[1];
      v38 = (float)((int)v33 + v36);
    }
    else
    {
      v37 = a2[1];
      v38 = (float)SHIDWORD(v31);
      if ( v37 > (float)SHIDWORD(v31) )
        v38 = a2[1];
      if ( SHIDWORD(v31) <= SDWORD1(v49) )
        goto LABEL_18;
      v40 = v37 + a2[3];
    }
    v37 = v40 - (float)(HIDWORD(v32) - HIDWORD(v31) + 1);
    v39 = v38 <= v37;
    goto LABEL_25;
  }
  if ( (_BYTE)v19 )
  {
    v41 = (float)*((int *)a1 + 1);
    v42 = (float)*((int *)a1 + 2);
  }
  else
  {
    v41 = *((float *)a1 + 15);
    v42 = *((float *)a1 + 14);
  }
  *(float *)(a6 + 8) = v42;
  *(float *)(a6 + 12) = v41;
  v35 = (float)(a2[2] + *a2) - v42;
  v37 = (float)((float)(a2[1] + a2[3]) - v41) - 10.0;
  if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)a3, v19)
    || !KeyboardHosting::IsRectNull((KeyboardHosting *)a4, v43) )
  {
    v45 = a3[1];
    v35 = fminf(v35, (float)*((int *)a1 + 3) + *a3);
    v46 = (float)*((int *)a1 + 4);
    if ( *((_DWORD *)a1 + 6) == 1 )
      v37 = fmaxf(a2[1], v45 - v46);
    else
      v37 = fminf(v44, v45 + v46);
  }
LABEL_38:
  *(float *)a6 = v35;
  result = 0LL;
  *(float *)(a6 + 4) = v37;
  return result;
}
