/*
 * XREFs of NtGdiEngAlphaBlend @ 0x1C02C8580
 * Callers:
 *     <none>
 * Callees:
 *     EngAlphaBlend @ 0x1C00D6070 (EngAlphaBlend.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013E01C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02C6D88 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C6DC8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6F80 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02C717C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C71FC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02C7A74 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02C7CE8 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02C7D4C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall NtGdiEngAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        RECTL *a5,
        RECTL *a6,
        __int64 a7)
{
  unsigned int v9; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v12; // r14
  _DWORD *v13; // r15
  BLENDOBJ *pBlendObj; // rdi
  SURFOBJ *v16; // r13
  SURFOBJ *v17; // r12
  struct _CLIPOBJ *v18; // rdx
  struct _XLATEOBJ *v19; // rsi
  RECTL *prclSrc; // r14
  int v21; // eax
  RECTL *v22; // [rsp+40h] [rbp-148h] BYREF
  RECTL *prclDest; // [rsp+48h] [rbp-140h] BYREF
  BLENDOBJ *v24; // [rsp+50h] [rbp-138h]
  CLIPOBJ *pco; // [rsp+58h] [rbp-130h]
  XLATEOBJ *pxlo; // [rsp+60h] [rbp-128h]
  CLIPOBJ *v27; // [rsp+68h] [rbp-120h]
  __int64 v28; // [rsp+70h] [rbp-118h]
  struct UMPDOBJ *v29; // [rsp+78h] [rbp-110h]
  SURFOBJ *v30; // [rsp+80h] [rbp-108h]
  SURFOBJ *v31; // [rsp+88h] [rbp-100h]
  __int64 v32; // [rsp+90h] [rbp-F8h]
  SURFOBJ *psoSrc[8]; // [rsp+A0h] [rbp-E8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+E0h] [rbp-A8h] BYREF
  struct _RECTL v35; // [rsp+120h] [rbp-68h] BYREF
  struct _RECTL v36; // [rsp+130h] [rbp-58h] BYREF

  v27 = a4;
  v28 = a3;
  v32 = a3;
  pco = a4;
  prclDest = a5;
  v22 = a6;
  v9 = 1;
  v36 = 0LL;
  v35 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = (__int64)ThreadCurrentObj;
  v29 = ThreadCurrentObj;
  v13 = (_DWORD *)((char *)ThreadCurrentObj + 436);
  if ( ThreadCurrentObj )
    ++*v13;
  pxlo = (XLATEOBJ *)((char *)ThreadCurrentObj + 436);
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)v12);
  if ( a7 == *(_QWORD *)(v12 + 312) )
    pBlendObj = *(BLENDOBJ **)(v12 + 304);
  else
    pBlendObj = 0LL;
  v24 = pBlendObj;
  if ( (*(_DWORD *)(v12 + 428) & 0x100) != 0 && pBlendObj )
  {
    if ( pBlendObj < MmSystemRangeStart )
      pBlendObj = 0LL;
    v24 = pBlendObj;
  }
  v16 = psoDest[0];
  v30 = psoDest[0];
  v17 = psoSrc[0];
  v31 = psoSrc[0];
  if ( psoDest[0] && psoSrc[0] && pBlendObj && prclDest && v22 )
  {
    CaptureRECTL(&v22, &v35);
    CaptureRECTL(&prclDest, &v36);
    if ( bOrder(v22) && bOrder(prclDest) )
    {
      pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v12, v18, &v16->sizlBitmap);
      v19 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v12, (__int64)v27);
      pxlo = v19;
      prclSrc = v22;
      if ( !(unsigned int)bCheckSurfaceRect(v17, v22, 0LL) || (v21 = bCheckXlate(v17, v19), v9 = 1, !v21) )
        v9 = 0;
      if ( v9 )
        v9 = EngAlphaBlend(v16, v17, pco, pxlo, prclDest, prclSrc, pBlendObj);
    }
  }
  else
  {
    v9 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  --*v13;
  return v9;
}
