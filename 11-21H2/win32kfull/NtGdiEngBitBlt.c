/*
 * XREFs of NtGdiEngBitBlt @ 0x1C01281A0
 * Callers:
 *     <none>
 * Callees:
 *     EngBitBlt @ 0x1C0005C00 (EngBitBlt.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0123F3C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C0126D9C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0129004 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0129030 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C012905C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C01290D4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C012914C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C01291B4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C012ADE8 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C012B0C0 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C012B268 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        XLATEOBJ *a3,
        CLIPOBJ *a4,
        __int64 a5,
        RECTL *a6,
        POINTL *a7,
        POINTL *a8,
        struct _BRUSHOBJ *a9,
        POINTL *a10,
        ROP4 rop4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v15; // rdi
  SURFOBJ *v16; // r12
  SURFOBJ *v17; // r15
  struct _BRUSHOBJ *pbo; // rsi
  char v19; // al
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  struct _RECTL *v22; // r11
  POINTL *pptlMask; // r14
  struct _CLIPOBJ *v24; // r8
  int v25; // ecx
  unsigned int v26; // r14d
  int prclTrg; // [rsp+28h] [rbp-200h]
  struct _BRUSHOBJ *v29; // [rsp+60h] [rbp-1C8h] BYREF
  struct _RECTL *v30; // [rsp+68h] [rbp-1C0h] BYREF
  SURFOBJ *psoTrg; // [rsp+70h] [rbp-1B8h]
  POINTL *pptlSrc; // [rsp+78h] [rbp-1B0h] BYREF
  RECTL *v33; // [rsp+80h] [rbp-1A8h] BYREF
  XLATEOBJ *pxlo; // [rsp+88h] [rbp-1A0h]
  POINTL *v35; // [rsp+90h] [rbp-198h] BYREF
  POINTL *pptlBrush; // [rsp+98h] [rbp-190h] BYREF
  CLIPOBJ *pco; // [rsp+A0h] [rbp-188h]
  __int64 v38; // [rsp+A8h] [rbp-180h]
  struct _POINTL v39; // [rsp+B0h] [rbp-178h] BYREF
  struct _POINTL v40; // [rsp+B8h] [rbp-170h] BYREF
  struct _POINTL v41; // [rsp+C0h] [rbp-168h] BYREF
  struct _CLIPOBJ *v42; // [rsp+C8h] [rbp-160h]
  struct UMPDOBJ *v43; // [rsp+D0h] [rbp-158h]
  struct _BRUSHOBJ v44; // [rsp+D8h] [rbp-150h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+F0h] [rbp-138h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+130h] [rbp-F8h] BYREF
  _QWORD v47[8]; // [rsp+170h] [rbp-B8h] BYREF
  struct _RECTL v48; // [rsp+1B0h] [rbp-78h] BYREF
  struct _RECTL v49; // [rsp+1C0h] [rbp-68h] BYREF
  struct _RECTL v50; // [rsp+1D0h] [rbp-58h] BYREF

  v42 = a4;
  pxlo = a3;
  pco = a4;
  v38 = a5;
  v33 = a6;
  pptlSrc = a7;
  v35 = a8;
  v29 = a9;
  pptlBrush = a10;
  LODWORD(v30) = rop4;
  v50 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  memset(&v44, 0, sizeof(v44));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = ThreadCurrentObj;
  v43 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v47, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v15);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, (struct _SURFOBJ *)pxlo, v15);
  psoTrg = (SURFOBJ *)v47[0];
  v16 = psoSrc[0];
  *(SURFOBJ **)&v48.left = psoSrc[0];
  v17 = psoMask[0];
  *(SURFOBJ **)&v49.left = psoMask[0];
  pbo = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v15, a9);
  if ( !pbo )
    pbo = CaptureAndFakeBRUSHOBJ(v29, &v44);
  v29 = pbo;
  pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v15, v38);
  if ( (rop4 & 0xFFFF0000) != 0
    || !v33
    || (v19 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)], (v19 & 0xE8) != 0)
    && (!pbo || pbo->iSolidColor == -1 && !pptlBrush)
    || (v19 & 0xD4) != 0 && (!pptlSrc || !v16)
    || (unsigned __int8)rop4 != BYTE1(rop4) && !v17 && (!pbo || pbo->iSolidColor != -1) )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v47);
    --*((_DWORD *)v15 + 105);
    return 0LL;
  }
  if ( !psoTrg )
    goto LABEL_37;
  CaptureRECTL(&v33, &v50);
  CapturePOINTL(&pptlSrc, &v39);
  CapturePOINTL(&v35, &v40);
  CapturePOINTL(&pptlBrush, &v41);
  LODWORD(v29) = 0;
  LODWORD(v30) = 0;
  pco = UMPDOBJ::GetDDIOBJ(v15, v42, &psoTrg->sizlBitmap);
  if ( !(unsigned int)bCheckSurfaceRectSize(psoTrg, v33, pco, (unsigned int *)&v29, (unsigned int *)&v30, prclTrg)
    || !(unsigned int)bCheckXlate(v16, pxlo) )
  {
    goto LABEL_37;
  }
  v49 = 0LL;
  v48 = 0LL;
  v20 = (unsigned int)v30;
  v21 = (unsigned int)v29;
  v22 = v16 ? pRect(pptlSrc, &v49, (unsigned int)v29, (unsigned int)v30) : 0LL;
  pptlMask = v35;
  v30 = v17 ? pRect(v35, &v48, v21, v20) : 0LL;
  if ( !(unsigned int)bCheckSurfaceRect(v16, v22, 0LL) )
    goto LABEL_37;
  v25 = (_DWORD)v24 + 1;
  if ( v17 )
  {
    v25 = v17->iBitmapFormat == 1;
    if ( v17->iBitmapFormat == 1 )
      v25 = bCheckSurfaceRect(v17, v30, v24);
  }
  if ( v25 )
    v26 = EngBitBlt(psoTrg, v16, v17, pco, pxlo, v33, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
  else
LABEL_37:
    v26 = 0;
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v47);
  --*((_DWORD *)v15 + 105);
  return v26;
}
