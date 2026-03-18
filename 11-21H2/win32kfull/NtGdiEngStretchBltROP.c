/*
 * XREFs of NtGdiEngStretchBltROP @ 0x1C0127170
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     EngStretchBltROP @ 0x1C008B730 (EngStretchBltROP.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0123F3C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C0126D9C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0129004 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0129030 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C012905C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C01290D4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C012912C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C012914C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C01291B4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0129220 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C012ADE8 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C012B0C0 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C012B268 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C02B0748 (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode,
        struct _BRUSHOBJ *a12,
        DWORD a13)
{
  unsigned int v15; // ebx
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v18; // rdi
  struct _SURFOBJ *v19; // r14
  SURFOBJ *v20; // r13
  struct _SURFOBJ *v21; // r10
  __int128 *v22; // r15
  struct _XLATEOBJ *v23; // r8
  DWORD v24; // r9d
  DWORD v25; // r14d
  unsigned int v26; // ecx
  int v27; // esi
  SURFOBJ *v28; // r14
  BRUSHOBJ *pbo; // rax
  unsigned int v30; // esi
  __int64 result; // rax
  int v32; // eax
  struct _RECTL *v33; // rdx
  int pca; // [rsp+28h] [rbp-230h]
  unsigned int v35; // [rsp+70h] [rbp-1E8h] BYREF
  DWORD rop4; // [rsp+78h] [rbp-1E0h]
  unsigned int v37; // [rsp+7Ch] [rbp-1DCh] BYREF
  SURFOBJ *psoSrc; // [rsp+80h] [rbp-1D8h]
  RECTL *prclSrc; // [rsp+88h] [rbp-1D0h] BYREF
  SURFOBJ *psoDest; // [rsp+90h] [rbp-1C8h]
  struct _BRUSHOBJ *v41; // [rsp+98h] [rbp-1C0h]
  POINTL *pptlMask; // [rsp+A0h] [rbp-1B8h] BYREF
  RECTL *prclDest; // [rsp+A8h] [rbp-1B0h] BYREF
  COLORADJUSTMENT *v44; // [rsp+B0h] [rbp-1A8h]
  CLIPOBJ *pco; // [rsp+B8h] [rbp-1A0h]
  XLATEOBJ *pxlo; // [rsp+C0h] [rbp-198h]
  struct _CLIPOBJ *v47; // [rsp+C8h] [rbp-190h]
  __int64 v48; // [rsp+D0h] [rbp-188h]
  POINTL *pptlHTOrg; // [rsp+D8h] [rbp-180h] BYREF
  struct _POINTL v50; // [rsp+E0h] [rbp-178h] BYREF
  struct _POINTL v51; // [rsp+E8h] [rbp-170h] BYREF
  struct _BRUSHOBJ v52; // [rsp+F0h] [rbp-168h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+110h] [rbp-148h] BYREF
  struct _SURFOBJ *v54[8]; // [rsp+150h] [rbp-108h] BYREF
  _QWORD v55[8]; // [rsp+190h] [rbp-C8h] BYREF
  struct _RECTL v56; // [rsp+1D0h] [rbp-88h] BYREF
  __int128 v57; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 v58; // [rsp+1F0h] [rbp-68h]
  struct _RECTL v59; // [rsp+1F8h] [rbp-60h] BYREF
  struct _RECTL v60; // [rsp+208h] [rbp-50h] BYREF

  v47 = a4;
  psoDest = a3;
  pxlo = (XLATEOBJ *)a4;
  v48 = a5;
  v44 = a6;
  pptlHTOrg = a7;
  prclDest = a8;
  prclSrc = a9;
  pptlMask = a10;
  v41 = a12;
  rop4 = a13;
  v35 = a13;
  v37 = a13;
  v59 = 0LL;
  v60 = 0LL;
  v15 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v18 = ThreadCurrentObj;
  *(_QWORD *)&v56.left = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v55, a1, ThreadCurrentObj);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v54, a2, v18);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, psoDest, v18);
    psoDest = (SURFOBJ *)v55[0];
    v19 = v54[0];
    psoSrc = v54[0];
    v20 = psoMask[0];
    pco = (CLIPOBJ *)psoMask[0];
    if ( a7 || iMode != 4 )
    {
      if ( !v55[0] || !v54[0] || !prclDest || !prclSrc )
      {
LABEL_28:
        v30 = 0;
LABEL_25:
        UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
        UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v54);
        UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v55);
        result = v30;
LABEL_26:
        --*((_DWORD *)v18 + 105);
        return result;
      }
      CaptureRECTL(&prclDest, &v59);
      CaptureRECTL(&prclSrc, &v60);
      CapturePOINTL(&pptlMask, &v50);
      CapturePOINTL(&pptlHTOrg, &v51);
      v22 = (__int128 *)v44;
      if ( v44 )
      {
        if ( (unsigned __int64)v44 >= MmUserProbeAddress )
          v22 = (__int128 *)MmUserProbeAddress;
        v57 = *v22;
        v58 = *((_QWORD *)v22 + 2);
        v22 = &v57;
        v44 = (COLORADJUSTMENT *)&v57;
      }
      if ( (unsigned int)bCheckDestSurfaceOverlap(v21, prclDest) )
      {
        memset(&v52, 0, sizeof(v52));
        pco = UMPDOBJ::GetDDIOBJ(v18, v47, &psoDest->sizlBitmap);
        v23 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v18, v48);
        pxlo = v23;
        if ( (((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) == 0 || (unsigned int)bOrder(prclSrc))
          && (unsigned int)bCheckXlate(v19, v23) )
        {
          v25 = v24 >> 8;
          v26 = (unsigned __int8)v24;
          v35 = (unsigned __int8)v24;
          if ( (unsigned __int8)v24 == BYTE1(v24) || v20 )
            goto LABEL_16;
          v32 = PROBEDISPATBRUSH(v41);
          v24 = rop4;
          if ( v32 )
          {
            v26 = v35;
LABEL_16:
            v27 = 1;
LABEL_17:
            if ( v26 != (unsigned __int8)v25 && (!v20 || !pptlMask) )
              v27 = 0;
            if ( v27 && v24 == 43724 )
            {
              v28 = psoSrc;
              if ( v20 )
              {
                v56 = 0LL;
                v35 = 0;
                v37 = 0;
                v27 = bCheckSurfaceRectSize(psoSrc, prclSrc, 0LL, &v35, &v37, pca);
                if ( v27 )
                {
                  v33 = pRect(pptlMask, &v56, v35, v37);
                  v27 = v20->iBitmapFormat == 1;
                  if ( v20->iBitmapFormat == 1 )
                    v27 = bCheckSurfaceRect(v20, v33, 0LL);
                }
              }
            }
            else
            {
              v28 = psoSrc;
            }
            pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v18, v41);
            if ( !pbo )
              pbo = CaptureAndFakeBRUSHOBJ(v41, &v52);
            if ( v27 )
            {
              v30 = 1;
              if ( EngStretchBltROP(
                     psoDest,
                     v28,
                     v20,
                     pco,
                     pxlo,
                     (COLORADJUSTMENT *)v22,
                     pptlHTOrg,
                     prclDest,
                     prclSrc,
                     pptlMask,
                     iMode,
                     pbo,
                     rop4) )
              {
                goto LABEL_25;
              }
            }
            goto LABEL_28;
          }
        }
        v27 = 0;
        v25 = v37 >> 8;
        v26 = (unsigned __int8)v37;
        goto LABEL_17;
      }
      v15 = 1;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v54);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v55);
    result = v15;
    goto LABEL_26;
  }
  return 0LL;
}
