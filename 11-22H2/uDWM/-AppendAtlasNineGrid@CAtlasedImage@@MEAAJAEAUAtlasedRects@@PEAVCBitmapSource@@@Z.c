/*
 * XREFs of ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x180027E60
 * Callers:
 *     ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x180014420 (-AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x180027440 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAtlasedImage::AppendAtlasNineGrid(
        struct tagRECT *this,
        struct AtlasedRects *a2,
        struct tagRECT *a3)
{
  int v3; // esi
  LONG left; // r12d
  int v6; // r9d
  LONG top; // r15d
  int v9; // ecx
  struct tagRECT v10; // xmm0
  LONG v11; // r14d
  int v12; // r10d
  LONG right; // r11d
  int v14; // eax
  int v15; // eax
  int v16; // r15d
  int v17; // r11d
  LONG v18; // ecx
  int v19; // r14d
  int v20; // r10d
  LONG v21; // r9d
  int v22; // r8d
  LONG v23; // eax
  LONG v24; // ecx
  int v25; // eax
  unsigned int v26; // r14d
  __int64 v27; // r10
  __int64 v28; // r11
  int v29; // r13d
  int v30; // r8d
  int v31; // r9d
  int v32; // eax
  bool v33; // zf
  bool v34; // zf
  float v35; // xmm2_4
  float v36; // xmm4_4
  float v37; // xmm3_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm10_4
  float v41; // xmm9_4
  float v42; // xmm8_4
  char v43; // r15
  unsigned int v44; // eax
  unsigned int v45; // edx
  unsigned int v46; // eax
  unsigned int v47; // edx
  int v49; // r8d
  int v50; // edx
  struct tagRECT *v51; // rax
  float v52; // xmm12_4
  float v53; // xmm13_4
  float v54; // xmm0_4
  float v55; // xmm4_4
  int v56; // esi
  unsigned int v57; // eax
  unsigned int v58; // eax
  int v59; // ebx
  int v60; // r15d
  int v61; // [rsp+30h] [rbp-D0h]
  __int128 v62; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v63; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v65[4]; // [rsp+70h] [rbp-90h]
  _DWORD v66[4]; // [rsp+80h] [rbp-80h]
  _DWORD v67[4]; // [rsp+90h] [rbp-70h]
  _DWORD v68[4]; // [rsp+A0h] [rbp-60h]

  v3 = 0;
  left = a3[5].left;
  v6 = a3[5].right - left;
  top = a3[5].top;
  if ( v6 < 0 )
    v6 = 0;
  v9 = a3[5].bottom - top;
  if ( v9 < 0 )
    v9 = 0;
  v10 = a3[2];
  rc = v10;
  v11 = v10.left;
  if ( rc.top + rc.left > v6 )
  {
    v12 = rc.left * v6 / (rc.top + rc.left);
    v11 = v12;
  }
  else
  {
    v12 = v6 - v10.top;
  }
  right = rc.right;
  if ( rc.bottom + rc.right > v9 )
  {
    v14 = rc.right * v9 / (rc.bottom + rc.right);
    right = v14;
  }
  else
  {
    v14 = v9 - rc.bottom;
  }
  v66[0] = top;
  v66[2] = top + v14;
  v15 = top + v9;
  v66[1] = top + right;
  v16 = a3[3].left + a3[3].top + this[1].right;
  v17 = this[1].left - a3[3].left;
  v18 = this[4].left;
  v65[1] = left + v11;
  v19 = a3[3].right + a3[3].bottom + this[1].bottom;
  v65[2] = left + v12;
  v20 = this[1].top - a3[3].right;
  v66[3] = v15;
  v65[0] = left;
  v65[3] = left + v6;
  if ( (v18 & 1) != 0 )
  {
    v17 -= a3[2].left;
    v16 += a3[2].left;
  }
  if ( (v18 & 2) != 0 )
    v16 += a3[2].top;
  if ( (v18 & 4) != 0 )
  {
    v20 -= a3[2].right;
    v19 += a3[2].right;
  }
  if ( (v18 & 8) != 0 )
    v19 += a3[2].bottom;
  v21 = v10.left;
  rc = v10;
  if ( v10.top + v10.left > v16 )
  {
    v22 = v16 * v10.left / (v10.top + v10.left);
    v21 = v22;
  }
  else
  {
    v22 = v16 - v10.top;
  }
  v23 = rc.right;
  if ( rc.bottom + rc.right > v19 )
  {
    v23 = v19 * rc.right / (rc.bottom + rc.right);
    v24 = v23;
  }
  else
  {
    v24 = v19 - rc.bottom;
  }
  v68[1] = v20 + v23;
  v25 = v20 + v19;
  v26 = 0;
  v68[3] = v25;
  v67[3] = v17 + v16;
  v68[0] = v20;
  v67[0] = v17;
  v67[1] = v17 + v21;
  v68[2] = v20 + v24;
  v67[2] = v17 + v22;
  while ( 1 )
  {
    v27 = v26 / 3;
    v28 = v26 % 3;
    v29 = v65[v28];
    v30 = v68[v27];
    v31 = v67[(unsigned int)(v28 + 1)] - v67[v28];
    v61 = v67[v28];
    v32 = v68[(unsigned int)(v27 + 1)] - v30;
    if ( v31 <= 0 || v32 <= 0 )
      goto LABEL_49;
    if ( (_DWORD)v28 )
    {
      if ( (_DWORD)v28 != 2 )
        goto LABEL_29;
      v33 = (this[4].left & 2) == 0;
    }
    else
    {
      v33 = (this[4].left & 1) == 0;
    }
    if ( !v33 )
      goto LABEL_49;
LABEL_29:
    if ( (_DWORD)v27 )
    {
      if ( (_DWORD)v27 != 2 )
        goto LABEL_34;
      v34 = (this[4].left & 8) == 0;
    }
    else
    {
      v34 = (this[4].left & 4) == 0;
    }
    if ( !v34 )
      goto LABEL_49;
LABEL_34:
    v35 = (float)(int)v66[v27];
    v36 = (float)v61;
    v37 = (float)v29;
    v38 = (float)(v65[(unsigned int)(v28 + 1)] - v29) + (float)v29;
    v39 = (float)(v66[(unsigned int)(v27 + 1)] - v66[v27]) + v35;
    v40 = (float)v30;
    v41 = (float)v31 + (float)v61;
    v42 = (float)v32 + (float)v30;
    if ( (_DWORD)v28 == 1 )
    {
      v37 = v37 + 0.5;
      v38 = v38 - 0.5;
      if ( v37 > v38 )
        v38 = v37;
    }
    if ( (_DWORD)v27 == 1 )
    {
      v35 = v35 + 0.5;
      v39 = v39 - 0.5;
      if ( v35 > v39 )
        v39 = v35;
    }
    v3 = 0;
    *(_QWORD *)&v63 = __PAIR64__(LODWORD(v35), LODWORD(v37));
    v33 = this[3].left == 0x80000000;
    *((_QWORD *)&v63 + 1) = __PAIR64__(LODWORD(v39), LODWORD(v38));
    *(float *)&v62 = (float)v61;
    *((float *)&v62 + 1) = (float)v30;
    *((float *)&v62 + 2) = (float)v31 + (float)v61;
    *((float *)&v62 + 3) = (float)v32 + (float)v30;
    if ( !v33 )
      goto LABEL_65;
    if ( this[3].top == 0x80000000 && this[3].right == 0x7FFFFFFF && this[3].bottom == 0x7FFFFFFF )
    {
      v43 = 0;
      if ( !*((_QWORD *)a2 + 8) )
        goto LABEL_41;
    }
    else
    {
LABEL_65:
      v43 = 1;
    }
    v49 = this[1].top;
    v50 = this[1].left;
    rc = this[3];
    OffsetRect(&rc, v50, v49);
    v51 = (struct tagRECT *)*((_QWORD *)a2 + 8);
    if ( v51 )
    {
      if ( v43 )
        IntersectRect(&rc, &rc, *((const RECT **)a2 + 8));
      else
        rc = *v51;
    }
    v41 = *((float *)&v62 + 2);
    v36 = *(float *)&v62;
    v42 = *((float *)&v62 + 3);
    v52 = *((float *)&v62 + 2) - *(float *)&v62;
    v40 = *((float *)&v62 + 1);
    if ( (float)(*((float *)&v62 + 2) - *(float *)&v62) > 0.0 )
    {
      v53 = *((float *)&v62 + 3) - *((float *)&v62 + 1);
      if ( (float)(*((float *)&v62 + 3) - *((float *)&v62 + 1)) > 0.0 )
      {
        *(_QWORD *)&v62 = __PAIR64__(
                            COERCE_UNSIGNED_INT(fmaxf((float)rc.top, *((float *)&v62 + 1))),
                            COERCE_UNSIGNED_INT(fmaxf((float)rc.left, *(float *)&v62)));
        v41 = fminf((float)rc.right, *((float *)&v62 + 2));
        *((float *)&v62 + 2) = v41;
        v42 = fminf((float)rc.bottom, *((float *)&v62 + 3));
        v54 = *(float *)&v62 - v36;
        *((float *)&v62 + 3) = v42;
        v55 = *((float *)&v62 + 1) - v40;
        v40 = *((float *)&v62 + 1);
        *(float *)&v63 = (float)((float)((float)(*((float *)&v63 + 2) - *(float *)&v63) * v54) / v52) + *(float *)&v63;
        *((float *)&v63 + 1) = (float)((float)(v55 * (float)(*((float *)&v63 + 3) - *((float *)&v63 + 1))) / v53)
                             + *((float *)&v63 + 1);
        *((float *)&v63 + 2) = (float)((float)((float)(v41 - *(float *)&v62)
                                             * (float)(*((float *)&v63 + 2) - *(float *)&v63))
                                     / v52)
                             + *(float *)&v63;
        v36 = *(float *)&v62;
        *((float *)&v63 + 3) = (float)((float)((float)(v42 - *((float *)&v62 + 1))
                                             * (float)(*((float *)&v63 + 3) - *((float *)&v63 + 1)))
                                     / v53)
                             + *((float *)&v63 + 1);
      }
    }
LABEL_41:
    if ( (float)(v41 - v36) <= 0.0 || (float)(v42 - v40) <= 0.0 )
      goto LABEL_49;
    v44 = *((_DWORD *)a2 + 6);
    v45 = v44 + 1;
    if ( v44 + 1 < v44 )
      break;
    if ( v45 > *((_DWORD *)a2 + 5) )
    {
      v56 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2, 16, 1, &v63);
      if ( v56 < 0 )
      {
        v57 = 192;
        goto LABEL_74;
      }
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)a2 + 16LL * v44) = v63;
      *((_DWORD *)a2 + 6) = v45;
    }
    v46 = *((_DWORD *)a2 + 14);
    v47 = v46 + 1;
    if ( v46 + 1 < v46 )
    {
      v3 = -2147024362;
      v58 = 181;
      goto LABEL_72;
    }
    v3 = 0;
    if ( v47 > *((_DWORD *)a2 + 13) )
    {
      v3 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 32, 16, 1, &v62);
      if ( v3 < 0 )
      {
        v58 = 192;
LABEL_72:
        v59 = v3;
        v60 = v3;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v58, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x354u, 0LL);
        goto LABEL_75;
      }
    }
    else
    {
      *(_OWORD *)(*((_QWORD *)a2 + 4) + 16LL * v46) = v62;
      *((_DWORD *)a2 + 14) = v47;
    }
LABEL_49:
    if ( ++v26 >= 9 )
      return (unsigned int)v3;
  }
  v56 = -2147024362;
  v57 = 181;
LABEL_74:
  v59 = v56;
  v60 = v56;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, v57, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x351u, 0LL);
LABEL_75:
  v3 = v59;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0x30Fu, 0LL);
  return (unsigned int)v3;
}
