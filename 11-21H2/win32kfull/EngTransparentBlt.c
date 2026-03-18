/*
 * XREFs of EngTransparentBlt @ 0x1C0111310
 * Callers:
 *     EngBitBlt @ 0x1C0005C00 (EngBitBlt.c)
 *     ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C00D6940 (-SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0293E90 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C029C2B0 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02A32C0 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B2B00 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0008914 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0009024 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1C0009C88 (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C002DE88 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C028F38C (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 */

BOOL __stdcall EngTransparentBlt(
        SURFOBJ *psoDst,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG ulReserved)
{
  XLATEOBJ *v8; // r12
  CLIPOBJ *v9; // r15
  SURFOBJ *v11; // rsi
  int v12; // ebx
  unsigned __int64 v13; // r13
  struct SURFACE *v14; // rcx
  struct SURFACE *v15; // rax
  int v16; // edi
  struct _RECTL rclBounds; // xmm0
  unsigned int iBitmapFormat; // r10d
  unsigned int v19; // r9d
  unsigned int i; // r12d
  LONG v21; // r11d
  LONG top; // ecx
  LONG v23; // ecx
  LONG bottom; // edx
  int v25; // ecx
  int v26; // eax
  __int64 (__fastcall *v27)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, _QWORD, _DWORD *, _QWORD, int); // rax
  HDEV v28; // rax
  unsigned int v30; // [rsp+64h] [rbp-304h]
  CLIPOBJ *v31; // [rsp+70h] [rbp-2F8h] BYREF
  struct SURFACE *v32; // [rsp+78h] [rbp-2F0h]
  char *v33; // [rsp+80h] [rbp-2E8h]
  __int64 v34; // [rsp+88h] [rbp-2E0h] BYREF
  char v35; // [rsp+90h] [rbp-2D8h]
  int v36; // [rsp+94h] [rbp-2D4h]
  SURFOBJ *v37; // [rsp+98h] [rbp-2D0h]
  __int64 v38; // [rsp+A0h] [rbp-2C8h]
  __int64 v39; // [rsp+A8h] [rbp-2C0h] BYREF
  char v40; // [rsp+B0h] [rbp-2B8h]
  int v41; // [rsp+B4h] [rbp-2B4h]
  HDEV hdev; // [rsp+B8h] [rbp-2B0h] BYREF
  HDEV v43; // [rsp+C0h] [rbp-2A8h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-2A0h]
  struct SURFACE *v45; // [rsp+D8h] [rbp-290h]
  CLIPOBJ *v46; // [rsp+E0h] [rbp-288h]
  _DWORD v47[2]; // [rsp+E8h] [rbp-280h] BYREF
  __int64 v48; // [rsp+F0h] [rbp-278h]
  int v49; // [rsp+F8h] [rbp-270h]
  int v50; // [rsp+FCh] [rbp-26Ch]
  _QWORD v51[3]; // [rsp+100h] [rbp-268h] BYREF
  int v52; // [rsp+118h] [rbp-250h]
  int v53; // [rsp+11Ch] [rbp-24Ch]
  unsigned int v54; // [rsp+120h] [rbp-248h]
  int v55; // [rsp+124h] [rbp-244h]
  int v56; // [rsp+128h] [rbp-240h]
  LONG lDelta; // [rsp+12Ch] [rbp-23Ch]
  int v58; // [rsp+130h] [rbp-238h]
  int v59; // [rsp+134h] [rbp-234h]
  int v60; // [rsp+138h] [rbp-230h]
  LONG v61; // [rsp+13Ch] [rbp-22Ch]
  int v62; // [rsp+140h] [rbp-228h]
  struct SURFACE *v63; // [rsp+148h] [rbp-220h]
  unsigned int v64; // [rsp+18Ch] [rbp-1DCh]
  unsigned int v65; // [rsp+190h] [rbp-1D8h]
  ULONG v66; // [rsp+194h] [rbp-1D4h]
  struct _RECTL v67; // [rsp+1A0h] [rbp-1C8h] BYREF
  RECTL v68; // [rsp+1B0h] [rbp-1B8h] BYREF
  struct _RECTL v69; // [rsp+1C0h] [rbp-1A8h] BYREF
  _DWORD v70[84]; // [rsp+1D0h] [rbp-198h] BYREF

  v8 = pxlo;
  v9 = pco;
  v11 = psoDst;
  v37 = psoDst;
  v31 = pco;
  v12 = 0;
  if ( !psoDst->iType && !psoSrc->iType
    || ulReserved
    || prclDst->right - prclDst->left != prclSrc->right - prclSrc->left
    || prclDst->bottom - prclDst->top != prclSrc->bottom - prclSrc->top )
  {
    v13 = (unsigned __int64)&psoDst[-1].pvScan0 & -(__int64)(psoDst != 0LL);
    v67 = *prclDst;
    v68 = *prclSrc;
    hdev = psoDst->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDst, 0LL, 0);
    v43 = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v43, psoSrc, 0LL, 0);
    v46 = v9;
    v39 = 0LL;
    v40 = 0;
    v41 = 0;
    v14 = psSetupTransparentSrcSurface(
            (struct SURFACE *)((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL)),
            (struct SURFACE *)((unsigned __int64)&v11[-1].pvScan0 & -(__int64)(v11 != 0LL)),
            &v67,
            0LL,
            &v68,
            (struct SURFMEM *)&v39,
            1u,
            iTransColor);
    v32 = v14;
    if ( v14 )
    {
      if ( v67.left != v67.right )
      {
        v33 = (char *)v14 + 24;
        v34 = 0LL;
        v35 = 0;
        v36 = 0;
        v44 = (unsigned __int64)&v11[-1].pvScan0 & -(__int64)(v11 != 0LL);
        v38 = v44;
        v69 = v67;
        if ( *(_WORD *)(v44 + 0x64) && (*((_DWORD *)v11->hdev + 10) & 0x80u) != 0 )
        {
          v12 = GreTransparentBltPS(v11, (struct _SURFOBJ *)((char *)v14 + 24), v9, v8, &v67, &v68, iTransColor);
          goto LABEL_49;
        }
        v15 = psSetupDstSurface(
                (__int64 **)((unsigned __int64)&v11[-1].pvScan0 & -(__int64)(v11 != 0LL)),
                &v67,
                (struct SURFMEM *)&v34,
                0,
                1);
        v45 = v15;
        if ( !v15 )
        {
LABEL_49:
          SURFMEM::~SURFMEM((SURFMEM *)&v34);
          goto LABEL_50;
        }
        if ( v15 != (struct SURFACE *)v13 )
        {
          v11 = (SURFOBJ *)((char *)v15 + 24);
          v37 = (SURFOBJ *)((char *)v15 + 24);
          v9 = 0LL;
          v31 = 0LL;
        }
        v16 = 0;
        v62 = 0;
        v66 = iTransColor;
        v56 = *((_DWORD *)v33 + 16);
        lDelta = v11->lDelta;
        v63 = v32;
        memset(v70, 0, 0x144uLL);
        if ( v9 && v9->iDComplexity )
        {
          if ( v9->iDComplexity != 1 )
          {
            if ( v9->iDComplexity == 3 )
            {
              v16 = 1;
              XCLIPOBJ::cEnumStart((XCLIPOBJ *)v9, 0, 0, 4u, 0x14u);
            }
            goto LABEL_13;
          }
          rclBounds = v9->rclBounds;
        }
        else
        {
          rclBounds = v67;
        }
        v70[0] = 1;
        *(struct _RECTL *)&v70[1] = rclBounds;
LABEL_13:
        if ( !v8 )
          v8 = xloIdent;
        v51[0] = v8;
        v52 = 1;
        v55 = 1;
        iBitmapFormat = v11->iBitmapFormat;
        v65 = iBitmapFormat;
        v19 = *((_DWORD *)v33 + 18);
        v64 = v19;
        if ( v16 )
          goto LABEL_55;
        while ( v19 <= 6 && iBitmapFormat <= 6 || !v70[0] )
        {
          for ( i = 0; i < v70[0]; ++i )
          {
            if ( v70[4 * i + 1] < v67.left )
              v70[4 * i + 1] = v67.left;
            if ( v70[4 * i + 3] > v67.right )
              v70[4 * i + 3] = v67.right;
            v21 = v70[4 * i + 2];
            top = v67.top;
            if ( v21 < v67.top )
            {
              v70[4 * i + 2] = v67.top;
              v21 = top;
            }
            v23 = v70[4 * i + 4];
            v30 = v23;
            bottom = v67.bottom;
            if ( v23 > v67.bottom )
            {
              v70[4 * i + 4] = v67.bottom;
              v23 = bottom;
              v30 = bottom;
            }
            if ( v21 < v23 )
            {
              v25 = v70[4 * i + 1];
              v26 = v70[4 * i + 3];
              LODWORD(v32) = v26;
              if ( v25 < v26 )
              {
                v53 = v26 - v25;
                v54 = v30 - v21;
                v58 = v68.left - v67.left + v25;
                v59 = v68.left - v67.left + (_DWORD)v32;
                v60 = v25;
                v61 = v21;
                v51[1] = *((_QWORD *)v33 + 7) + (v21 + v68.top - v67.top) * *((_DWORD *)v33 + 16);
                v51[2] = (char *)v11->pvScan0 + v21 * v11->lDelta;
                if ( (*(_DWORD *)(v51[0] + 4LL) & 1) != 0 && v19 == iBitmapFormat )
                  ((void (__fastcall *)(_QWORD *))*(&TransFunctionTable + 7 * v19 - 7))(v51);
                else
                  ((void (__fastcall *)(_QWORD *))*(&TransFunctionTable + 7 * v19 + iBitmapFormat - 7))(v51);
                iBitmapFormat = v65;
                v19 = v64;
              }
            }
          }
          if ( !v16 )
          {
            if ( (struct SURFACE *)v13 != v45 )
            {
              v31 = 0LL;
              if ( (*(_DWORD *)(v13 + 112) & 0x400) != 0 )
                (*(void (__fastcall **)(__int64, SURFOBJ *, CLIPOBJ *, XLATEOBJ *const, struct _RECTL *, CLIPOBJ **))(*(_QWORD *)(v13 + 48) + 2816LL))(
                  (v38 + 24) & -(__int64)(v38 != 0),
                  v11,
                  v46,
                  xloIdent,
                  &v69,
                  &v31);
              else
                ((void (__fastcall *)(__int64, SURFOBJ *, CLIPOBJ *, XLATEOBJ *const, struct _RECTL *, CLIPOBJ **))EngCopyBits)(
                  (v38 + 24) & -(__int64)(v38 != 0),
                  v11,
                  v46,
                  xloIdent,
                  &v69,
                  &v31);
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v34);
            SURFMEM::~SURFMEM((SURFMEM *)&v39);
            LODWORD(v27) = 1;
            return (int)v27;
          }
LABEL_55:
          v16 = XCLIPOBJ::bEnum((XCLIPOBJ *)v9, 0x144u, (char *)v70, 0LL);
          iBitmapFormat = v65;
          v19 = v64;
        }
        goto LABEL_49;
      }
      v12 = 1;
    }
LABEL_50:
    SURFMEM::~SURFMEM((SURFMEM *)&v39);
    LODWORD(v27) = v12;
    return (int)v27;
  }
  v47[1] = 0;
  v50 = 0;
  v28 = psoDst->hdev;
  if ( !v28 )
    v28 = psoSrc->hdev;
  v47[0] = iTransColor;
  v49 = 0;
  v48 = 0LL;
  v27 = (__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, _QWORD, _DWORD *, _QWORD, int))*((_QWORD *)v28 + 351);
  if ( v27 )
    LODWORD(v27) = v27(psoDst, psoSrc, 0LL, pco, pxlo, prclDst, prclSrc, 0LL, v47, 0LL, 52394);
  return (int)v27;
}
