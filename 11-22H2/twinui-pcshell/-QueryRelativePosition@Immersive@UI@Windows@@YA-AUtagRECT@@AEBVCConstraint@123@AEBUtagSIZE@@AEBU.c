/*
 * XREFs of ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x18074B6A4
 * Callers:
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18052F908 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?HorizontallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1802EC25A (-HorizontallyCenterRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     ?CanPositionRelativeOnSide@Immersive@UI@Windows@@YA_NAEBVCConstraint@123@AEBUtagRECT@@W4FLYOUT_PLACEMENT@@0@Z @ 0x18074B480 (-CanPositionRelativeOnSide@Immersive@UI@Windows@@YA_NAEBVCConstraint@123@AEBUtagRECT@@W4FLYOUT_P.c)
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x18074B590 (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 *     ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x18074B9F8 (-ShiftRectIntoContainer@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     ?VerticallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x18074BAE4 (-VerticallyCenterRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 */

const struct Windows::UI::Immersive::CConstraint *__fastcall Windows::UI::Immersive::QueryRelativePosition(
        const struct Windows::UI::Immersive::CConstraint *a1,
        struct tagRECT *a2,
        unsigned __int64 *a3,
        LONG *a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v8; // r15d
  LONG v10; // r8d
  LONG v11; // eax
  bool v12; // cc
  LONG v13; // eax
  const struct tagRECT *v14; // r9
  struct tagRECT *v15; // rax
  char v16; // di
  char v17; // r12
  unsigned int v18; // ebx
  unsigned int v19; // r13d
  BOOL v20; // eax
  int v21; // ecx
  const struct tagRECT *v22; // r9
  unsigned int v23; // r15d
  unsigned int v24; // r15d
  unsigned int v25; // r15d
  int v26; // r8d
  int v27; // edx
  const struct tagRECT *v28; // r9
  LPRECT v29; // rax
  int v30; // r8d
  const struct tagRECT *v31; // r9
  struct tagRECT v32; // xmm0
  const struct Windows::UI::Immersive::CConstraint *result; // rax
  char v34; // [rsp+30h] [rbp-59h]
  struct tagRECT v35; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-41h]
  int pvParam; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v38[3]; // [rsp+58h] [rbp-31h] BYREF
  struct tagRECT v39; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+80h] [rbp-9h] BYREF

  v5 = 1;
  v8 = 1;
  if ( a5 )
    v8 = a5;
  rc = *a2;
  InflateRect(&rc, -5, -5);
  v10 = *a3;
  v36 = *a3;
  v11 = HIDWORD(v36);
  if ( v10 > rc.right - rc.left )
    v10 = rc.right - rc.left;
  v12 = *((_DWORD *)a3 + 1) <= rc.bottom - rc.top;
  LODWORD(v36) = v10;
  if ( !v12 )
    v11 = rc.bottom - rc.top;
  HIDWORD(v36) = v11;
  v38[0] = HIDWORD(v36);
  v39 = 0LL;
  v39.bottom = v11;
  v35.left = *a4;
  v35.right = a4[2];
  v35.top = a4[1];
  v13 = a4[3];
  v39.right = v10;
  v35.bottom = v13;
  *(_OWORD *)a1 = 0LL;
  if ( !Windows::UI::Immersive::CanPositionRelativeOnSide(&v35.left, &v39, v8, &rc) )
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
      v34 = v17;
      if ( Windows::UI::Immersive::CanPositionRelativeOnSide(&v35.left, &v39, v18, &rc) )
      {
        v14 = (const struct tagRECT *)v18;
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
        v20 = SystemParametersInfoW(0x1Bu, 0, &pvParam, 0);
        v21 = pvParam;
        if ( !v20 )
          v21 = 1;
        if ( !v21 )
        {
          v19 = 3;
          v16 = 1;
        }
      }
      if ( Windows::UI::Immersive::CanPositionRelativeOnSide(&v35.left, &v39, v19, &rc) )
      {
        v14 = (const struct tagRECT *)v19;
        goto LABEL_9;
      }
      if ( v17 )
      {
        if ( v34 )
          v5 = (v16 != 0) + 3;
        else
          v5 = 2;
      }
      if ( Windows::UI::Immersive::CanPositionRelativeOnSide(&v35.left, &v39, v5, &rc) )
      {
        v14 = (const struct tagRECT *)v5;
        goto LABEL_9;
      }
      v23 = v8 - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            if ( v25 != 1 )
            {
LABEL_46:
              v15 = Windows::UI::Immersive::ShiftRectIntoContainer((Windows::UI::Immersive *)&v39, &rc, a1, v22);
              goto LABEL_47;
            }
            v26 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v39, 4)) - v39.top;
            v27 = rc.right - v36;
          }
          else
          {
            v26 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v39, 4)) - v39.top;
            v27 = rc.left - _mm_cvtsi128_si32((__m128i)v39);
          }
          OffsetRect(&v39, v27, v26);
          *(struct tagRECT *)a1 = v39;
          v29 = Windows::UI::Immersive::VerticallyCenterRect(&v39, &v35, a1, v28);
LABEL_45:
          *(struct tagRECT *)a1 = *v29;
          goto LABEL_46;
        }
        v30 = rc.bottom + _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v39, 4)) - v39.top - LODWORD(v38[0]);
      }
      else
      {
        v30 = rc.top - v39.top;
      }
      OffsetRect(&v39, 0, v30);
      *(struct tagRECT *)a1 = v39;
      v29 = Windows::UI::Immersive::HorizontallyCenterRect(&v39, &v35, a1, v31);
      goto LABEL_45;
    }
    v17 = 1;
    goto LABEL_19;
  }
  v14 = (const struct tagRECT *)v8;
LABEL_9:
  v15 = (struct tagRECT *)Windows::UI::Immersive::PositionRelativeOnSide((__int64)v38, &v35, &v39, v14, &rc);
LABEL_47:
  v32 = *v15;
  result = a1;
  *(struct tagRECT *)a1 = v32;
  return result;
}
