/*
 * XREFs of ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18002C850
 * Callers:
 *     ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x180010530 (-AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18002BA70 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18000979C (-ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

__int64 __fastcall CAtlasedImage::AppendAtlasNineGrid(
        struct tagRECT *this,
        struct AtlasedRects *a2,
        struct tagRECT *a3)
{
  unsigned int v3; // r15d
  LONG left; // r12d
  int v6; // r9d
  LONG top; // r14d
  int v9; // ecx
  struct tagRECT v10; // xmm0
  LONG v11; // esi
  int v12; // r10d
  LONG right; // eax
  LONG v14; // r11d
  int v15; // eax
  int v16; // r14d
  int v17; // r11d
  LONG v18; // ecx
  int v19; // esi
  int v20; // r10d
  LONG v21; // r8d
  int v22; // ecx
  LONG v23; // eax
  LONG v24; // edx
  unsigned int v25; // esi
  __int64 v26; // r10
  __int64 v27; // r11
  int v28; // r13d
  int v29; // r14d
  int v30; // r12d
  int v31; // r8d
  int v32; // r9d
  int v33; // eax
  bool v34; // zf
  bool v35; // zf
  float v36; // xmm3_4
  __m128 v37; // xmm0
  float v38; // xmm4_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm7_4
  float v42; // xmm5_4
  __m128 v43; // xmm0
  __m128 v44; // xmm0
  __m128 v45; // xmm0
  char v46; // r14
  unsigned int v47; // eax
  unsigned int v48; // edx
  unsigned int v49; // eax
  unsigned int v50; // edx
  unsigned int v51; // eax
  LONG *p_top; // r9
  unsigned int v53; // r8d
  int v55; // r8d
  int v56; // edx
  struct tagRECT *v57; // rax
  int v58; // eax
  int v59; // r9d
  unsigned int v60; // eax
  int v61; // eax
  int v62; // r9d
  unsigned int v63; // eax
  int v64; // eax
  int v65; // r9d
  unsigned int v66; // eax
  unsigned int v67; // eax
  void *v68[2]; // [rsp+38h] [rbp-A9h] BYREF
  int v69; // [rsp+48h] [rbp-99h]
  __int128 v70; // [rsp+58h] [rbp-89h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-79h] BYREF
  _DWORD v72[4]; // [rsp+78h] [rbp-69h]
  _DWORD v73[4]; // [rsp+88h] [rbp-59h]
  _DWORD v74[4]; // [rsp+98h] [rbp-49h]
  _DWORD v75[4]; // [rsp+A8h] [rbp-39h]

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
    v12 = v6 * rc.left / (rc.top + rc.left);
    v11 = v12;
  }
  else
  {
    v12 = v6 - v10.top;
  }
  right = rc.right;
  if ( rc.bottom + rc.right > v9 )
  {
    right = v9 * rc.right / (rc.bottom + rc.right);
    v14 = right;
  }
  else
  {
    v14 = v9 - rc.bottom;
  }
  v73[0] = top;
  v73[1] = top + right;
  v15 = top + v9;
  v73[2] = top + v14;
  v16 = a3[3].left + a3[3].top + this[1].right;
  v17 = this[1].left - a3[3].left;
  v18 = this[4].left;
  v72[1] = left + v11;
  v19 = a3[3].right + a3[3].bottom + this[1].bottom;
  v72[2] = left + v12;
  v20 = this[1].top - a3[3].right;
  v73[3] = v15;
  v72[0] = left;
  v72[3] = left + v6;
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
  v75[1] = v20 + v23;
  v75[3] = v20 + v19;
  v75[0] = v20;
  v74[0] = v17;
  v74[3] = v17 + v16;
  v25 = 0;
  v74[1] = v17 + v21;
  v75[2] = v20 + v24;
  v74[2] = v17 + v22;
  while ( 1 )
  {
    v26 = v25 / 3;
    v27 = v25 % 3;
    v28 = v72[v27];
    v29 = v72[(unsigned int)(v27 + 1)] - v28;
    v30 = v73[(unsigned int)(v26 + 1)] - v73[v26];
    v31 = v75[v26];
    v32 = v74[(unsigned int)(v27 + 1)] - v74[v27];
    v69 = v74[v27];
    v33 = v75[(unsigned int)(v26 + 1)] - v31;
    if ( v32 <= 0 || v33 <= 0 )
      goto LABEL_52;
    if ( (_DWORD)v27 )
    {
      if ( (_DWORD)v27 != 2 )
        goto LABEL_29;
      v34 = (this[4].left & 2) == 0;
    }
    else
    {
      v34 = (this[4].left & 1) == 0;
    }
    if ( !v34 )
      goto LABEL_52;
LABEL_29:
    if ( (_DWORD)v26 )
    {
      if ( (_DWORD)v26 != 2 )
        goto LABEL_34;
      v35 = (this[4].left & 8) == 0;
    }
    else
    {
      v35 = (this[4].left & 4) == 0;
    }
    if ( !v35 )
      goto LABEL_52;
LABEL_34:
    v37 = 0LL;
    v36 = (float)(int)v73[v26];
    v37.m128_f32[0] = (float)v69;
    v38 = (float)v28;
    v39 = (float)v29 + (float)v28;
    v40 = (float)v30 + v36;
    v41 = (float)v31;
    if ( (_DWORD)v27 == 1 )
    {
      v38 = v38 + 0.5;
      v39 = v39 - 0.5;
      if ( v38 > v39 )
        v39 = v38;
    }
    if ( (_DWORD)v26 == 1 )
    {
      v36 = v36 + 0.5;
      v40 = v40 - 0.5;
      if ( v36 > v40 )
        v40 = v36;
    }
    v42 = (float)v32 + v37.m128_f32[0];
    *(_QWORD *)&v70 = __PAIR64__(LODWORD(v36), LODWORD(v38));
    v43 = _mm_shuffle_ps(v37, v37, 225);
    v43.m128_f32[0] = v41;
    v44 = _mm_shuffle_ps(v43, v43, 198);
    v3 = 0;
    v34 = this[3].left == 0x80000000;
    v44.m128_f32[0] = v42;
    *((_QWORD *)&v70 + 1) = __PAIR64__(LODWORD(v40), LODWORD(v39));
    v45 = _mm_shuffle_ps(v44, v44, 39);
    v45.m128_f32[0] = (float)v33 + v41;
    *(__m128 *)v68 = _mm_shuffle_ps(v45, v45, 57);
    if ( !v34 )
      goto LABEL_65;
    if ( this[3].top == 0x80000000 && this[3].right == 0x7FFFFFFF && this[3].bottom == 0x7FFFFFFF )
    {
      v46 = 0;
      if ( !*((_QWORD *)a2 + 12) )
        goto LABEL_41;
    }
    else
    {
LABEL_65:
      v46 = 1;
    }
    v55 = this[1].top;
    v56 = this[1].left;
    rc = this[3];
    OffsetRect(&rc, v56, v55);
    v57 = (struct tagRECT *)*((_QWORD *)a2 + 12);
    if ( v57 )
    {
      if ( v46 )
        IntersectRect(&rc, &rc, *((const RECT **)a2 + 12));
      else
        rc = *v57;
    }
    ClipRectAndSimilarRect(&rc.left, (float *)v68, (float *)&v70);
LABEL_41:
    if ( (float)(*(float *)&v68[1] - *(float *)v68) <= 0.0
      || (float)(*((float *)&v68[1] + 1) - *((float *)v68 + 1)) <= 0.0 )
    {
      goto LABEL_52;
    }
    v47 = *((_DWORD *)a2 + 6);
    v48 = v47 + 1;
    if ( v47 + 1 < v47 )
      break;
    if ( v48 > *((_DWORD *)a2 + 5) )
    {
      v58 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v70);
      v3 = v58;
      if ( v58 < 0 )
      {
        v59 = v58;
        v60 = 192;
        goto LABEL_80;
      }
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)a2 + 16LL * v47) = v70;
      *((_DWORD *)a2 + 6) = v48;
    }
    v49 = *((_DWORD *)a2 + 14);
    v50 = v49 + 1;
    if ( v49 + 1 < v49 )
    {
      v62 = -2147024362;
      v63 = 181;
      v3 = -2147024362;
      goto LABEL_78;
    }
    if ( v50 > *((_DWORD *)a2 + 13) )
    {
      v61 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 32, 16LL, 1LL, v68);
      v3 = v61;
      if ( v61 < 0 )
      {
        v62 = v61;
        v63 = 192;
LABEL_78:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v62, v63);
        v67 = 864;
        goto LABEL_81;
      }
    }
    else
    {
      *(_OWORD *)(*((_QWORD *)a2 + 4) + 16LL * v49) = *(_OWORD *)v68;
      *((_DWORD *)a2 + 14) = v50;
    }
    v51 = *((_DWORD *)a2 + 22);
    p_top = &this[4].top;
    v53 = v51 + 1;
    if ( v51 + 1 < v51 )
    {
      v65 = -2147024362;
      v66 = 181;
      v3 = -2147024362;
      goto LABEL_76;
    }
    if ( v53 > *((_DWORD *)a2 + 21) )
    {
      v64 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 64, 4LL, 1LL, p_top);
      v3 = v64;
      if ( v64 < 0 )
      {
        v65 = v64;
        v66 = 192;
LABEL_76:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v65, v66);
        v67 = 865;
        goto LABEL_81;
      }
    }
    else
    {
      v3 = 0;
      *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * v51) = *p_top;
      *((_DWORD *)a2 + 22) = v53;
    }
LABEL_52:
    if ( ++v25 >= 9 )
      return v3;
  }
  v59 = -2147024362;
  v60 = 181;
  v3 = -2147024362;
LABEL_80:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v59, v60);
  v67 = 861;
LABEL_81:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v67);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x31Du);
  return v3;
}
