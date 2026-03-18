/*
 * XREFs of TouchTargetingRankForRect @ 0x1C025CA20
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C020440C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C02051E8 (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0205E2C (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     TouchTargetingRankForRegion @ 0x1C025D124 (TouchTargetingRankForRegion.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     _TTPixelsToHm @ 0x1C016E64A (_TTPixelsToHm.c)
 *     ?_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C025C098 (-_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@.c)
 */

__int64 __fastcall TouchTargetingRankForRect(
        struct tagRECT *a1,
        struct tagRECT *a2,
        int *a3,
        int *a4,
        int *a5,
        unsigned int a6)
{
  int v10; // r14d
  LONG right; // r10d
  int left; // r13d
  int top; // ecx
  LONG bottom; // r11d
  int v15; // eax
  int v16; // edx
  struct tagRECT v18; // xmm1
  int v19; // eax
  int v20; // r9d
  int v21; // edx
  int v22; // ecx
  LONG x; // r10d
  LONG y; // r13d
  int v25; // eax
  LONG v26; // r11d
  int v27; // r11d
  int v28; // eax
  int v29; // r10d
  int v30; // eax
  int v31; // r10d
  int v32; // esi
  LONG v33; // r8d
  LONG v34; // r11d
  int v35; // eax
  LONG v36; // ecx
  int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // eax
  bool v40; // zf
  bool v41; // sf
  bool v42; // of
  LONG v43; // ecx
  LONG v44; // eax
  int v45; // r9d
  LONG v46; // esi
  int v47; // r8d
  int v48; // edx
  int v49; // ecx
  int v50; // eax
  LONG v51; // esi
  int v52; // r8d
  int v53; // ecx
  unsigned int v54; // eax
  int v55; // eax
  int v56; // edx
  bool v57; // [rsp+20h] [rbp-59h]
  struct tagRECT *v58; // [rsp+38h] [rbp-41h]
  struct tagRECT *v59; // [rsp+40h] [rbp-39h]
  struct tagTOUCHTARGETINGCONTACT *v60; // [rsp+48h] [rbp-31h]
  unsigned __int16 v61[2]; // [rsp+50h] [rbp-29h] BYREF
  int v62; // [rsp+54h] [rbp-25h]
  LONG v63; // [rsp+58h] [rbp-21h]
  LONG v64; // [rsp+5Ch] [rbp-1Dh]
  int v65; // [rsp+60h] [rbp-19h]
  struct tagPOINT v66; // [rsp+68h] [rbp-11h] BYREF
  struct tagRECT v67; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v68; // [rsp+80h] [rbp+7h] BYREF
  bool v69; // [rsp+E0h] [rbp+67h]

  v66 = 0LL;
  v61[0] = 4094;
  v67 = 0LL;
  if ( !a3[45] )
    return 4094LL;
  v10 = 1;
  if ( a6 == 4 )
  {
    v69 = 1;
  }
  else
  {
    v69 = 0;
    if ( !(unsigned int)IntersectRect(&v67, &a1->left, a3) )
      return 4094LL;
  }
  if ( a4 && !(unsigned int)IntersectRect(a1, &a1->left, a4) )
    return 4094LL;
  if ( !(unsigned int)IntersectRect(a1, &a2->left, &a1->left) )
    return 4094LL;
  right = a1->right;
  left = a1->left;
  v63 = right;
  if ( left == right )
    return 4094LL;
  top = a1->top;
  bottom = a1->bottom;
  v62 = top;
  v64 = bottom;
  if ( top == bottom )
    return 4094LL;
  if ( a5 )
  {
    *a5 = 0;
    a5[1] = 0;
  }
  if ( !a6 )
  {
    v67 = *a2;
    if ( a4 && !(unsigned int)IntersectRect(&v67, &v67.left, a4) )
      return 4094LL;
    v15 = TTPixelsToHm(v67.bottom - v67.top, a3[47]);
    v16 = a3[46];
    v65 = v15;
    if ( (int)TTPixelsToHm(v67.right - v67.left, v16) > 1400 && v65 > 1400 )
      return 4093LL;
    top = v62;
  }
  v18 = *a2;
  v19 = bottom - 1;
  v60 = (struct tagTOUCHTARGETINGCONTACT *)a3;
  v20 = bottom - 1;
  if ( left == right - 1 )
  {
    v67 = *a1;
    v59 = &v67;
    v58 = &v68;
    v57 = v69;
    v21 = top;
    v22 = left;
    v68 = v18;
LABEL_24:
    _TTUpdateRankWithSegment(v22, v21, left, v20, v57, &v66, v61, v58, v59, v60);
    goto LABEL_25;
  }
  v68 = *a1;
  v67 = v18;
  if ( top != v19 )
  {
    _TTUpdateRankWithSegment(
      left,
      top,
      left,
      v20,
      v69,
      &v66,
      v61,
      &v67,
      &v68,
      (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v68 = *a1;
    v67 = v18;
    _TTUpdateRankWithSegment(
      v63 - 1,
      v64 - 1,
      v63 - 1,
      v62,
      v69,
      &v66,
      v61,
      &v67,
      &v68,
      (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v68 = *a1;
    v67 = v18;
    _TTUpdateRankWithSegment(
      left,
      v64 - 1,
      v63 - 1,
      v64 - 1,
      v69,
      &v66,
      v61,
      &v67,
      &v68,
      (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v20 = v62;
    v22 = v63 - 1;
    v60 = (struct tagTOUCHTARGETINGCONTACT *)a3;
    v21 = v62;
    v59 = &v68;
    v58 = &v67;
    v57 = v69;
    v68 = *a1;
    v67 = v18;
    goto LABEL_24;
  }
  _TTUpdateRankWithSegment(
    left,
    v19,
    right - 1,
    v20,
    v69,
    &v66,
    v61,
    &v67,
    &v68,
    (const struct tagTOUCHTARGETINGCONTACT *)a3);
LABEL_25:
  if ( v61[0] == 4094 || !a5 )
    return v61[0];
  x = v66.x;
  y = v66.y;
  v25 = v66.x - a3[8];
  v26 = v66.y;
  *a5 = v25;
  v27 = v26 - a3[9];
  a5[1] = v27;
  if ( !a6 )
  {
    v32 = 200;
LABEL_38:
    if ( v25 && (int)TTPixelsToHm(abs32(v25), a3[46]) > v32 || v27 && (int)TTPixelsToHm(abs32(v27), a3[47]) > v32 )
      return 4094LL;
    if ( a6 )
      return v61[0];
    v33 = a3[8];
    v34 = a2->left;
    if ( v33 >= a2->left )
    {
      v44 = a2->right;
      if ( v33 < v44 )
        goto LABEL_58;
      v45 = a3[9];
      v46 = a2->top;
      if ( v45 >= v46 )
      {
        v51 = a2->bottom;
        if ( v45 < v51 )
        {
LABEL_57:
          v55 = abs32(x - (v34 + a2->right) / 2);
          v56 = a3[46];
LABEL_59:
          v30 = TTPixelsToHm(v55, v56);
          v31 = 700;
          goto LABEL_34;
        }
        v52 = v33 - v44;
        v48 = (v52 + 1) >> 31;
        v49 = v52 + 1;
        v50 = v45 - v51 + 1;
      }
      else
      {
        v47 = v33 - v44;
        v48 = (v47 + 1) >> 31;
        v49 = v47 + 1;
        v50 = v45 - v46;
      }
      v10 = 0;
      v53 = (v48 ^ v49) - v48;
      v54 = abs32(v50);
      v42 = __OFSUB__(v53, v54);
      v40 = v53 == v54;
      v41 = (int)(v53 - v54) < 0;
    }
    else
    {
      v35 = a3[9];
      v36 = a2->top;
      if ( v35 >= v36 )
      {
        v43 = a2->bottom;
        if ( v35 < v43 )
          goto LABEL_56;
        v37 = v35 - v43 + 1;
      }
      else
      {
        v37 = v35 - v36;
      }
      v10 = 0;
      v38 = abs32(v37);
      v39 = abs32(v33 - v34);
      v42 = __OFSUB__(v39, v38);
      v40 = v39 == v38;
      v41 = (int)(v39 - v38) < 0;
    }
    LOBYTE(v10) = !(v41 ^ v42 | v40);
LABEL_56:
    if ( v10 )
      goto LABEL_57;
LABEL_58:
    v55 = abs32(y - (a2->top + a2->bottom) / 2);
    v56 = a3[47];
    goto LABEL_59;
  }
  if ( (_WORD)a6 == 3 )
  {
    v32 = HIWORD(a6);
    goto LABEL_38;
  }
  if ( a6 != 4 )
    return v61[0];
  if ( v25 )
  {
    v28 = TTPixelsToHm(abs32(v25), a3[46]);
    if ( v28 > v29 )
      return 4094LL;
  }
  if ( !v27 )
    return v61[0];
  v30 = TTPixelsToHm(abs32(v27), a3[47]);
LABEL_34:
  if ( v30 > v31 )
    return 4094LL;
  return v61[0];
}
