/*
 * XREFs of ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x1805F4C90
 * Callers:
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18046AF8C (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?HorizontallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x18023A610 (-HorizontallyCenterRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     ?CanPositionRelativeOnSide@Immersive@UI@Windows@@YA_NAEBVCConstraint@123@AEBUtagRECT@@W4FLYOUT_PLACEMENT@@0@Z @ 0x1805F4A7C (-CanPositionRelativeOnSide@Immersive@UI@Windows@@YA_NAEBVCConstraint@123@AEBUtagRECT@@W4FLYOUT_P.c)
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x1805F4B84 (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 *     ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1805F4FE0 (-ShiftRectIntoContainer@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     ?VerticallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1805F50CC (-VerticallyCenterRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 */

const struct Windows::UI::Immersive::CConstraint *__fastcall Windows::UI::Immersive::QueryRelativePosition(
        const struct Windows::UI::Immersive::CConstraint *a1,
        struct tagRECT *a2,
        __int64 a3,
        LONG *a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v8; // r15d
  LONG v10; // r8d
  LONG v11; // eax
  bool v12; // cc
  LONG v13; // eax
  unsigned __int64 v14; // r9
  struct tagRECT *v15; // rax
  char v16; // bl
  char v17; // di
  int v18; // r8d
  unsigned int v19; // r12d
  char v20; // r13
  unsigned int v21; // r8d
  BOOL v22; // eax
  int v23; // ecx
  const struct tagRECT *v24; // r9
  unsigned int v25; // r15d
  unsigned int v26; // r15d
  unsigned int v27; // r15d
  int v28; // r8d
  int v29; // edx
  const struct tagRECT *v30; // r9
  LPRECT v31; // rax
  int v32; // r8d
  const struct tagRECT *v33; // r9
  struct tagRECT v34; // xmm0
  const struct Windows::UI::Immersive::CConstraint *result; // rax
  struct tagRECT v36; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v37; // [rsp+40h] [rbp-39h]
  int pvParam; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int64 v39; // [rsp+50h] [rbp-29h] BYREF
  struct tagRECT v40; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-9h] BYREF

  v5 = 1;
  v8 = 1;
  if ( a5 )
    v8 = a5;
  rc = *a2;
  InflateRect(&rc, -5, -5);
  v10 = *(_QWORD *)a3;
  v37 = *(_QWORD *)a3;
  v11 = HIDWORD(v37);
  if ( v10 > rc.right - rc.left )
    v10 = rc.right - rc.left;
  v12 = *(_DWORD *)(a3 + 4) <= rc.bottom - rc.top;
  v40 = 0LL;
  if ( !v12 )
    v11 = rc.bottom - rc.top;
  v37 = __PAIR64__(v11, v10);
  v39 = __PAIR64__(v11, v10) >> 32;
  v40.bottom = v11;
  v36.left = *a4;
  v36.right = a4[2];
  v36.top = a4[1];
  v13 = a4[3];
  v40.right = v10;
  v36.bottom = v13;
  *(_OWORD *)a1 = 0LL;
  if ( !Windows::UI::Immersive::CanPositionRelativeOnSide(&v36.left, &v40, v8, &rc) )
  {
    v16 = 0;
    v17 = 0;
    v18 = 1;
    v19 = 4;
    if ( v8 == 1 )
    {
      v18 = 2;
    }
    else if ( v8 != 2 )
    {
      if ( v8 == 3 )
      {
        v18 = 4;
      }
      else
      {
        if ( v8 != 4 )
          goto LABEL_19;
        v18 = 3;
      }
      v16 = 1;
LABEL_19:
      v20 = v17;
      if ( Windows::UI::Immersive::CanPositionRelativeOnSide(&v36.left, &v40, v18, &rc) )
      {
        v14 = v21;
        goto LABEL_9;
      }
      if ( v8 - 3 <= 1 )
      {
        v19 = 1;
        v17 = 1;
      }
      else
      {
        pvParam = 1;
        v22 = SystemParametersInfoW(0x1Bu, 0, &pvParam, 0);
        v23 = pvParam;
        if ( !v22 )
          v23 = 1;
        if ( !v23 )
        {
          v19 = 3;
          v16 = 1;
        }
      }
      if ( Windows::UI::Immersive::CanPositionRelativeOnSide(&v36.left, &v40, v19, &rc) )
      {
        v14 = v19;
        goto LABEL_9;
      }
      if ( v17 )
      {
        if ( v20 )
          v5 = (v16 != 0) + 3;
        else
          v5 = 2;
      }
      if ( Windows::UI::Immersive::CanPositionRelativeOnSide(&v36.left, &v40, v5, &rc) )
      {
        v14 = v5;
        goto LABEL_9;
      }
      v25 = v8 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            if ( v27 != 1 )
            {
LABEL_46:
              v15 = Windows::UI::Immersive::ShiftRectIntoContainer((Windows::UI::Immersive *)&v40, &rc, a1, v24);
              goto LABEL_47;
            }
            v28 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v40, 4)) - v40.top;
            v29 = rc.right - v37;
          }
          else
          {
            v28 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v40, 4)) - v40.top;
            v29 = rc.left - _mm_cvtsi128_si32((__m128i)v40);
          }
          OffsetRect(&v40, v29, v28);
          *(struct tagRECT *)a1 = v40;
          v31 = Windows::UI::Immersive::VerticallyCenterRect(&v40, &v36, a1, v30);
LABEL_45:
          *(struct tagRECT *)a1 = *v31;
          goto LABEL_46;
        }
        v32 = rc.bottom + _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v40, 4)) - v40.top - v39;
      }
      else
      {
        v32 = rc.top - v40.top;
      }
      OffsetRect(&v40, 0, v32);
      *(struct tagRECT *)a1 = v40;
      v31 = Windows::UI::Immersive::HorizontallyCenterRect(&v40, &v36, a1, v33);
      goto LABEL_45;
    }
    v17 = 1;
    goto LABEL_19;
  }
  v14 = v8;
LABEL_9:
  v15 = (struct tagRECT *)Windows::UI::Immersive::PositionRelativeOnSide(
                            (__int64)&v39,
                            &v36,
                            &v40,
                            (const struct tagRECT *)v14,
                            &rc);
LABEL_47:
  v34 = *v15;
  result = a1;
  *(struct tagRECT *)a1 = v34;
  return result;
}
