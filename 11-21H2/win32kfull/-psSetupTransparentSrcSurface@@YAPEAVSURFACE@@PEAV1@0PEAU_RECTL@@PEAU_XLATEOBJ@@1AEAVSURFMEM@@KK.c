/*
 * XREFs of ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C002DE88
 * Callers:
 *     EngAlphaBlend @ 0x1C002D3E0 (EngAlphaBlend.c)
 *     EngTransparentBlt @ 0x1C0111310 (EngTransparentBlt.c)
 * Callees:
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C002D3AC (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     EngStretchBlt @ 0x1C002FB50 (EngStretchBlt.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C015D508 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C015DCB8 (--0RGNMEMOBJTMP@@QEAA@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

struct SURFACE *__fastcall psSetupTransparentSrcSurface(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct _RECTL *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclSrc,
        struct SURFMEM *a6,
        unsigned int a7,
        unsigned int a8)
{
  struct SURFACE *v9; // rsi
  LONG right; // ecx
  LONG left; // r10d
  LONG v12; // r9d
  LONG v13; // r11d
  int v14; // eax
  bool v15; // al
  LONG v16; // eax
  LONG v17; // eax
  LONG v18; // ecx
  LONG v19; // eax
  LONG v20; // ecx
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // r13d
  LONG v24; // eax
  LONG v25; // r8d
  LONG v26; // ecx
  LONG v27; // edx
  __int64 *v29; // rax
  LONG v30; // r8d
  LONG v31; // edi
  LONG v32; // r13d
  LONG v33; // r10d
  int v34; // r8d
  int v35; // r10d
  int DIB; // r13d
  LONG v37; // edi
  CLIPOBJ *v38; // r13
  int v39; // edx
  int v40; // edx
  int v41; // edi
  int v42; // r8d
  __int64 v43; // rcx
  LONG v44; // edx
  LONG v45; // ecx
  unsigned __int64 v46; // rdx
  _DWORD *v47; // r8
  unsigned __int64 v48; // rdx
  __int64 v49; // rdi
  size_t v50; // r8
  _DWORD *v51; // rdx
  unsigned int j; // ecx
  _BYTE *v53; // r8
  _BYTE *v54; // r9
  _BYTE *v55; // rdx
  __int64 v56; // rcx
  _BYTE *v57; // rdx
  _WORD *v58; // rdx
  unsigned int i; // ecx
  unsigned int v60; // edx
  void *v61; // rcx
  __int64 v62; // rdi
  struct SURFACE *v63; // rcx
  XLATEOBJ *v64; // r8
  struct _RECTL *v65; // rdx
  struct SURFMEM *v66; // rax
  __int64 v67; // rdi
  __int64 *v68; // rax
  int v69; // r13d
  LONG bottom; // [rsp+60h] [rbp-218h]
  LONG top; // [rsp+64h] [rbp-214h]
  LONG v72; // [rsp+64h] [rbp-214h]
  int v73; // [rsp+6Ch] [rbp-20Ch]
  LONG v74; // [rsp+70h] [rbp-208h]
  int IsSourceBGRA; // [rsp+74h] [rbp-204h]
  struct SURFMEM *v76; // [rsp+78h] [rbp-200h] BYREF
  struct SURFACE *v77; // [rsp+80h] [rbp-1F8h]
  struct _RECTL *v78; // [rsp+88h] [rbp-1F0h]
  POINTL pptlHTOrg; // [rsp+90h] [rbp-1E8h] BYREF
  _DWORD *v80; // [rsp+98h] [rbp-1E0h]
  struct SURFACE *v81; // [rsp+A0h] [rbp-1D8h]
  int v82; // [rsp+A8h] [rbp-1D0h] BYREF
  LONG v83; // [rsp+ACh] [rbp-1CCh]
  LONG v84; // [rsp+B0h] [rbp-1C8h]
  int v85; // [rsp+B4h] [rbp-1C4h]
  __int64 v86; // [rsp+B8h] [rbp-1C0h]
  int v87; // [rsp+C0h] [rbp-1B8h]
  int v88; // [rsp+C4h] [rbp-1B4h]
  LONG v89; // [rsp+C8h] [rbp-1B0h]
  LONG v90; // [rsp+CCh] [rbp-1ACh]
  LONG v91; // [rsp+D0h] [rbp-1A8h]
  _BYTE *v92; // [rsp+D8h] [rbp-1A0h]
  struct SURFMEM *v93; // [rsp+E0h] [rbp-198h]
  XLATEOBJ *pxlo; // [rsp+E8h] [rbp-190h]
  __int64 v95; // [rsp+F0h] [rbp-188h]
  struct REGION *v96[2]; // [rsp+F8h] [rbp-180h] BYREF
  _DWORD v97[4]; // [rsp+108h] [rbp-170h] BYREF
  __int64 v98; // [rsp+118h] [rbp-160h]
  int v99; // [rsp+120h] [rbp-158h]
  int v100; // [rsp+124h] [rbp-154h]
  _DWORD *v101; // [rsp+128h] [rbp-150h]
  _DWORD *v102; // [rsp+130h] [rbp-148h]
  _BYTE *v103; // [rsp+138h] [rbp-140h]
  _WORD *v104; // [rsp+140h] [rbp-138h]
  RECTL v105; // [rsp+148h] [rbp-130h] BYREF
  RECTL prclDest; // [rsp+160h] [rbp-118h] BYREF
  struct _RECTL v107; // [rsp+170h] [rbp-108h] BYREF
  RECTL v108; // [rsp+180h] [rbp-F8h] BYREF
  _BYTE v109[160]; // [rsp+190h] [rbp-E8h] BYREF

  v9 = a1;
  v77 = a1;
  v81 = a1;
  v78 = a3;
  pxlo = a4;
  pptlHTOrg = (POINTL)prclSrc;
  v76 = a6;
  v93 = a6;
  right = a3->right;
  left = a3->left;
  v91 = right - a3->left;
  bottom = a3->bottom;
  top = a3->top;
  LODWORD(v80) = bottom - top;
  v12 = prclSrc->right;
  v13 = prclSrc->left;
  v14 = v12 - prclSrc->left;
  v90 = prclSrc->bottom;
  v89 = prclSrc->top;
  v15 = v91 != v14 || bottom - top != v90 - v89;
  IsSourceBGRA = 0;
  v73 = 0;
  if ( v9 && a2 )
  {
    if ( !v15 )
    {
      if ( v13 < 0 )
      {
        a3->left = left - v13;
        prclSrc->left = 0;
        v12 = prclSrc->right;
        right = a3->right;
      }
      v16 = *((_DWORD *)v9 + 14);
      if ( v12 > v16 )
      {
        a3->right = v16 + right - v12;
        prclSrc->right = *((_DWORD *)v9 + 14);
      }
      v17 = prclSrc->top;
      if ( v17 < 0 )
      {
        a3->top -= v17;
        prclSrc->top = 0;
      }
      v18 = prclSrc->bottom;
      v19 = *((_DWORD *)v9 + 15);
      if ( v18 > v19 )
      {
        a3->bottom += v19 - v18;
        prclSrc->bottom = *((_DWORD *)v9 + 15);
      }
      if ( a3->left < 0 )
      {
        prclSrc->left -= a3->left;
        a3->left = 0;
      }
      v20 = a3->right;
      v21 = *((_DWORD *)a2 + 14);
      if ( v20 > v21 )
      {
        prclSrc->right += v21 - v20;
        a3->right = *((_DWORD *)a2 + 14);
      }
      v22 = a3->top;
      if ( v22 < 0 )
      {
        prclSrc->top -= v22;
        a3->top = 0;
      }
      v23 = a3->bottom;
      v24 = *((_DWORD *)a2 + 15);
      if ( v23 > v24 )
      {
        prclSrc->bottom += v24 - v23;
        v23 = *((_DWORD *)a2 + 15);
        a3->bottom = v23;
      }
      v25 = a3->left;
      v26 = a3->right;
      if ( a3->left >= v26 || (v27 = a3->top, v27 >= v23) )
      {
        a3->left = v26;
        return v9;
      }
      if ( !*((_WORD *)v9 + 50) )
        return v9;
      v97[3] = 0;
      v100 = 0;
      v67 = *((_QWORD *)v9 + 6);
      v68 = (__int64 *)*((_QWORD *)v9 + 16);
      LODWORD(v80) = v26 - v25;
      v69 = v23 - v27;
      v97[1] = v26 - v25;
      v97[2] = v69;
      v97[0] = *((_DWORD *)v9 + 24);
      v99 = *((_DWORD *)v9 + 28) & 0x40000;
      v98 = 0LL;
      if ( v68 )
        v98 = *v68;
      if ( SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v97, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        *(_QWORD *)&v105.left = 0LL;
        *(_QWORD *)&v105.right = __PAIR64__(v69, (unsigned int)v80);
        *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)v9 + 6);
        v76 = *(struct SURFMEM **)&prclSrc->left;
        if ( (*((_DWORD *)v9 + 28) & 0x400) != 0 )
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, RECTL *, struct SURFMEM **))(v67 + 2816))(
            (*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL),
            (__int64)v9 + 24,
            0LL,
            0LL,
            &v105,
            &v76);
        else
          ((void (__fastcall *)(__int64, char *, _QWORD, _QWORD, RECTL *, struct SURFMEM **))EngCopyBits)(
            (*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL),
            (char *)v9 + 24,
            0LL,
            0LL,
            &v105,
            &v76);
        *prclSrc = v105;
        return *(struct SURFACE **)a6;
      }
      return 0LL;
    }
    v85 = 0;
    v88 = 0;
    v29 = (__int64 *)*((_QWORD *)v9 + 16);
    v30 = *((_DWORD *)a2 + 14);
    v31 = *((_DWORD *)a2 + 15);
    v32 = 0;
    if ( left > 0 )
      v32 = left;
    v74 = v32;
    v105.left = v32;
    v33 = 0;
    if ( top > 0 )
      v33 = top;
    v72 = v33;
    v105.top = v33;
    if ( v30 > right )
      v30 = right;
    v105.right = v30;
    if ( v31 > bottom )
      v31 = bottom;
    v105.bottom = v31;
    if ( v32 >= v30 || v33 >= v31 )
      return 0LL;
    if ( v13 < 0 || v12 > *((_DWORD *)v9 + 14) || v89 < 0 || v90 > *((_DWORD *)v9 + 15) )
      v73 = 1;
    if ( !a7 )
    {
      IsSourceBGRA = bIsSourceBGRA(v9);
      v83 = v34 - v32;
      v84 = v31 - v35;
      v82 = 6;
      v87 = *((_DWORD *)v9 + 28) & 0x40000;
      v86 = *(_QWORD *)gppalRGB;
      DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)&v82, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !DIB || !v73 || IsSourceBGRA )
      {
        v37 = v74;
        goto LABEL_46;
      }
      v46 = *(unsigned int *)(*(_QWORD *)a6 + 64LL);
      v47 = *(_DWORD **)(*(_QWORD *)a6 + 72LL);
      v80 = v47;
      v101 = v47;
      v48 = v46 >> 2;
      v95 = v48;
      if ( !v48 )
        goto LABEL_65;
      if ( ((unsigned __int8)v47 & 4) != 0 )
      {
        *v47 = -16777216;
        v95 = --v48;
        if ( !v48 )
        {
LABEL_65:
          v37 = v74;
          goto LABEL_46;
        }
        v101 = ++v47;
      }
      memset64(v47, 0xFF000000FF000000uLL, v48 >> 1);
      if ( (v48 & 1) != 0 )
        v47[v48 - 1] = -16777216;
      goto LABEL_65;
    }
    v83 = v91;
    v84 = (int)v80;
    v82 = *((_DWORD *)v9 + 24);
    v87 = *((_DWORD *)v9 + 28) & 0x40000;
    v86 = 0LL;
    if ( v29 )
      v86 = *v29;
    DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)&v82, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( DIB && v73 )
    {
      v49 = *(_QWORD *)a6;
      v50 = *(unsigned int *)(*(_QWORD *)a6 + 64LL);
      if ( *((_DWORD *)v9 + 24) == 1 )
      {
        v61 = *(void **)(v49 + 72);
        if ( a8 )
          v60 = 255;
        else
          v60 = 0;
      }
      else
      {
        if ( *((_DWORD *)v9 + 24) == 2 )
        {
          v60 = a8 | (16 * a8);
        }
        else
        {
          if ( *((_DWORD *)v9 + 24) != 3 )
          {
            switch ( *((_DWORD *)v9 + 24) )
            {
              case 4:
                v58 = *(_WORD **)(v49 + 72);
                v104 = v58;
                for ( i = 0; i < (unsigned int)v50 >> 1; ++i )
                {
                  *v58++ = a8;
                  v104 = v58;
                }
                break;
              case 5:
                v53 = *(_BYTE **)(v49 + 80);
                v103 = v53;
                v54 = &v53[*(_DWORD *)(v49 + 60) * *(_DWORD *)(v49 + 88)];
                while ( v53 != v54 )
                {
                  v55 = v53;
                  v92 = v53;
                  v56 = 3 * *(_DWORD *)(v49 + 56) - 2LL;
                  while ( v55 < &v53[v56] )
                  {
                    *v55 = a8;
                    v57 = v55 + 1;
                    *v57++ = BYTE1(a8);
                    *v57 = BYTE2(a8);
                    v55 = v57 + 1;
                    v92 = v55;
                  }
                  v49 = *(_QWORD *)a6;
                  v53 += *(int *)(*(_QWORD *)a6 + 88LL);
                  v103 = v53;
                }
                break;
              case 6:
                v51 = *(_DWORD **)(v49 + 72);
                v102 = v51;
                for ( j = 0; j < (unsigned int)v50 >> 2; ++j )
                {
                  *v51++ = a8;
                  v102 = v51;
                }
                break;
            }
            goto LABEL_95;
          }
          v60 = a8;
        }
        v61 = *(void **)(v49 + 72);
      }
      memset(v61, v60, v50);
    }
LABEL_95:
    v37 = v74;
LABEL_46:
    if ( DIB )
    {
      pptlHTOrg = 0LL;
      prclDest = *a3;
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v109);
      v38 = 0LL;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v96, v39);
      if ( !v96[0] )
        goto LABEL_103;
      prclDest.left -= v37;
      v40 = prclDest.right - v37;
      prclDest.right -= v37;
      v41 = prclDest.top - v72;
      prclDest.top -= v72;
      v42 = prclDest.bottom - v72;
      prclDest.bottom -= v72;
      if ( prclDest.left < 0
        || (v43 = *(_QWORD *)a6, v40 > *(_DWORD *)(*(_QWORD *)a6 + 56LL))
        || v41 < 0
        || v42 > *(_DWORD *)(v43 + 60) )
      {
        v44 = *(_DWORD *)(*(_QWORD *)a6 + 60LL);
        v45 = *(_DWORD *)(*(_QWORD *)a6 + 56LL);
        *(_QWORD *)&v107.left = 0LL;
        v107.right = v45;
        v107.bottom = v44;
        RGNOBJ::vSet((RGNOBJ *)v96, &v107);
        v38 = (CLIPOBJ *)v109;
        v108 = prclDest;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v109, v96[0], (struct ERECTL *)&v108, 0);
        v43 = *(_QWORD *)v93;
      }
      *(_QWORD *)(v43 + 48) = *((_QWORD *)v9 + 6);
      if ( EngStretchBlt(
             (SURFOBJ *)((*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL)),
             (SURFOBJ *)((char *)v81 + 24),
             0LL,
             v38,
             pxlo,
             0LL,
             &pptlHTOrg,
             &prclDest,
             prclSrc,
             0LL,
             3u) )
      {
        *(_QWORD *)&prclSrc->left = 0LL;
        prclSrc->right = v83;
        prclSrc->bottom = v84;
        *a3 = v105;
        if ( !IsSourceBGRA && !a7 )
        {
          v62 = *(_QWORD *)a6;
          v63 = *(struct SURFACE **)(*(_QWORD *)a6 + 80LL);
          v64 = (XLATEOBJ *)((char *)v63 + *(_DWORD *)(*(_QWORD *)a6 + 60LL) * *(_DWORD *)(*(_QWORD *)a6 + 88LL));
          pxlo = v64;
          while ( 1 )
          {
            v77 = v63;
            if ( v63 == (struct SURFACE *)v64 )
              break;
            v65 = (struct _RECTL *)v63;
            v78 = (struct _RECTL *)v63;
            v66 = (struct SURFACE *)((char *)v63 + 4 * *(int *)(v62 + 56));
            v93 = v66;
            while ( v65 != (struct _RECTL *)v66 )
            {
              v65->left ^= 0xFF000000;
              v65 = (struct _RECTL *)((char *)v65 + 4);
              v78 = v65;
            }
            v62 = *(_QWORD *)a6;
            v63 = (struct SURFACE *)((char *)v63 + *(int *)(*(_QWORD *)a6 + 88LL));
          }
        }
        v9 = *(struct SURFACE **)a6;
      }
      else
      {
LABEL_103:
        v9 = 0LL;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v96);
      return v9;
    }
    return 0LL;
  }
  return 0LL;
}
