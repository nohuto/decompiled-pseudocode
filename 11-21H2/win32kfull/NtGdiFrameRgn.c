/*
 * XREFs of NtGdiFrameRgn @ 0x1C0132220
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C012FB54 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bValid@XDCOBJ@@QEBAHXZ @ 0x1C00404FC (-bValid@XDCOBJ@@QEBAHXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0041E20 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0042D7C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C008DC2C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00F2EEC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00F2F78 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C012FDBC (-vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C012FEB0 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0131254 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C013202C (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C01321C0 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C0132990 (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C0134A78 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     EngPaint @ 0x1C0135200 (EngPaint.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C0139224 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  unsigned int v6; // esi
  int v9; // r14d
  int v10; // r12d
  int v11; // ebx
  int v12; // edi
  __int64 v13; // rcx
  unsigned int v14; // eax
  EPATHOBJ *v15; // rcx
  struct _RECTL v16; // xmm0
  __int64 v17; // r8
  __int64 v18; // rcx
  DC *v19; // rax
  DC *v20; // rax
  __int64 v21; // r13
  char *v22; // rcx
  struct REGION *v23; // rax
  DC *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdi
  struct ECLIPOBJ *v27; // rdx
  struct BRUSH *v28; // r15
  DC *v29; // rax
  DC *v30; // rcx
  DC *v31; // rcx
  MIX mix; // eax
  DC *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  DC *v37[6]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v38[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  int v40; // [rsp+88h] [rbp-78h]
  _XFORMOBJ v41[2]; // [rsp+90h] [rbp-70h] BYREF
  int v42; // [rsp+9Ch] [rbp-64h]
  _LINEATTRS v43; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v44[16]; // [rsp+F0h] [rbp-10h] BYREF
  __m128i rclBounds; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v46[8]; // [rsp+110h] [rbp+10h] BYREF
  BRUSHOBJ pbo; // [rsp+150h] [rbp+50h] BYREF
  int v48; // [rsp+16Ch] [rbp+6Ch]
  __int64 v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  char *v51; // [rsp+188h] [rbp+88h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]
  __int128 v53; // [rsp+1B0h] [rbp+B0h]
  int v54; // [rsp+1C8h] [rbp+C8h]
  _BYTE v55[32]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v56[2]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v57[64]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v58[8]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v59; // [rsp+258h] [rbp+158h]
  _BYTE v60[8]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v61; // [rsp+2D8h] [rbp+1D8h]
  struct _RECTL v62; // [rsp+350h] [rbp+250h] BYREF
  _OWORD v63[2]; // [rsp+360h] [rbp+260h] BYREF
  int v64; // [rsp+380h] [rbp+280h]
  CLIPOBJ pco; // [rsp+390h] [rbp+290h] BYREF
  __int64 v66; // [rsp+3E0h] [rbp+2E0h]
  int v67; // [rsp+3E8h] [rbp+2E8h]
  int v68; // [rsp+410h] [rbp+310h]
  __int64 v69; // [rsp+420h] [rbp+320h]

  v6 = 0;
  v9 = 0;
  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v37, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v46, a2, 1, 0);
  v11 = abs32(a4);
  v12 = abs32(a5);
  if ( !XDCOBJ::bValid((XDCOBJ *)v37) )
    goto LABEL_60;
  if ( *((_WORD *)v37[0] + 6) == 1 )
  {
    if ( (*((_DWORD *)v37[0] + 9) & 0x10000) != 0 || !v46[0] || v11 <= 0 || v12 <= 0 )
      goto LABEL_60;
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v46) == 1 )
    {
      v9 = 1;
LABEL_60:
      v6 = v9;
      goto LABEL_61;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v58);
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v60);
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v44, (struct XDCOBJ *)v37, -2147483132);
    if ( !v59
      || !v61
      || !RGNOBJ::bCreate((RGNOBJ *)v46, (struct EPATHOBJ *)v58, (struct EXFORMOBJ *)v44)
      || (v42 = 0,
          v64 = 0,
          *(_QWORD *)&v41[0].ulReserved = v63,
          memset(&v43, 0, sizeof(v43)),
          memset(v63, 0, sizeof(v63)),
          EPATHOBJ::vWidenSetupForFrameRgn(v15, (struct XDCOBJ *)v37, v11, v12, (struct EXFORMOBJ *)v41, &v43),
          !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v60, (struct EPATHOBJ *)v58, v41, &v43))
      || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v60, (struct EPATHOBJ *)v58, v41, &v43) )
    {
LABEL_58:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v60);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v58);
      if ( v10 )
      {
        v35 = UserReferenceDwmApiPort(v34);
        DwmSyncFlushAndWaitForBatch(v35);
      }
      goto LABEL_60;
    }
    v40 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v39, (struct EPATHOBJ *)v60, 2u, 0LL);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v39);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v38);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v38);
    if ( !v39 || !v38[0] )
      goto LABEL_57;
    if ( (*(_DWORD *)(*((_QWORD *)v37[0] + 122) + 340LL) & 0x802) == 0x802 )
    {
      v9 = RGNOBJ::bMerge((RGNOBJ *)v38, (struct RGNOBJ *)&v39, (struct RGNOBJ *)v46, 8u);
    }
    else
    {
      v62.right = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v62, (struct EPATHOBJ *)v58, 1u, 0LL);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v62);
      if ( *(_QWORD *)&v62.left )
        v9 = RGNOBJ::bMerge((RGNOBJ *)v38, (struct RGNOBJ *)&v39, (struct RGNOBJ *)&v62, 8u) != 0;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v62);
    }
    if ( !v9 )
      goto LABEL_57;
    v16 = *(struct _RECTL *)(v38[0] + 96LL);
    v43.pstyle = (PFLOAT_LONG)v37;
    v62 = v16;
    if ( !ERECTL::bEmpty((ERECTL *)&v62) )
      v10 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)&v43, &v62);
    if ( (*((_DWORD *)v37[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v37, (struct ERECTL *)&v62);
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v37) || !*(_QWORD *)(v17 + 496) )
    {
LABEL_57:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v38);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v39);
      goto LABEL_58;
    }
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v56);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v55, (struct XDCOBJ *)v37, 0);
    v18 = v38[0];
    v19 = v37[0];
    if ( !v38[0] )
      *((_DWORD *)v37[0] + 9) |= 0x10u;
    *((_QWORD *)v19 + 141) = v18;
    v20 = v37[0];
    v21 = *((_QWORD *)v37[0] + 62);
    if ( (v55[24] & 1) != 0 )
    {
      if ( (unsigned int)DC::bTightenRao(v37[0]) )
      {
        v22 = (char *)v37[0] + 1024;
        if ( (*((_DWORD *)v37[0] + 10) & 1) == 0 )
          v22 = (char *)v37[0] + 1016;
        v62.left += *(_DWORD *)v22;
        v62.right += *(_DWORD *)v22;
        v62.top += *((_DWORD *)v22 + 1);
        v62.bottom += *((_DWORD *)v22 + 1);
        GreScaleValuesInternal((struct XDCOBJ *)v37, &v62.left, 4u);
        v23 = XDCOBJ::prgnEffRao(v37);
        v66 = 0LL;
        v67 = 0;
        v68 = 1;
        v69 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v23, (struct ERECTL *)&v62, 0);
        if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          v24 = v37[0];
          *((_DWORD *)v37[0] + 9) |= 0x10u;
          *((_QWORD *)v24 + 141) = 0LL;
        }
        else
        {
          v25 = *(_QWORD *)(v21 + 128);
          v26 = *((_QWORD *)v37[0] + 11);
          v48 = -1;
          v52 = 0LL;
          v53 = 0LL;
          pbo.pvRbrush = 0LL;
          pbo.flColorType = 0;
          v49 = 0LL;
          v50 = 0LL;
          v54 = 0;
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)&v43, a3);
          v28 = *(struct BRUSH **)&v43.fl;
          v9 = 0;
          if ( *(_QWORD *)&v43.fl )
          {
            v30 = v37[0];
            if ( (*((_DWORD *)v37[0] + 9) & 0xE0) != 0 && (*(_DWORD *)(*(_QWORD *)&v43.fl + 40LL) & 0x100) == 0 )
            {
              rclBounds = (__m128i)pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v37, v27, &rclBounds);
              v30 = v37[0];
            }
            if ( v28 )
            {
              bSyncBrushObj(v28);
              EBRUSHOBJ::vInitBrush(&pbo, v37[0], v28, v26, v25, v21, 1);
              v31 = v37[0];
              v51 = (char *)v37[0] + 176;
              if ( (*((_DWORD *)v28 + 10) & 0x100) != 0 )
              {
                *((_DWORD *)v37[0] + 9) |= 0x10u;
                *((_QWORD *)v31 + 141) = 0LL;
              }
              else
              {
                mix = EBRUSHOBJ::mixBest(
                        (EBRUSHOBJ *)&pbo,
                        *(_BYTE *)(*((_QWORD *)v37[0] + 122) + 212LL),
                        *(_BYTE *)(*((_QWORD *)v37[0] + 122) + 213LL));
                ++*(_DWORD *)(v21 + 92);
                EngPaint((SURFOBJ *)(v21 + 24), &pco, &pbo, (POINTL *)v37[0] + 149, mix);
                v33 = v37[0];
                v9 = 1;
                *((_DWORD *)v37[0] + 9) |= 0x10u;
                *((_QWORD *)v33 + 141) = 0LL;
              }
              BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)&v43);
            }
            else
            {
              *((_DWORD *)v30 + 9) |= 0x10u;
              *((_QWORD *)v30 + 141) = 0LL;
            }
          }
          else
          {
            v29 = v37[0];
            *((_DWORD *)v37[0] + 9) |= 0x10u;
            *((_QWORD *)v29 + 141) = 0LL;
          }
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)&v43);
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
        }
        goto LABEL_54;
      }
      v20 = v37[0];
    }
    *((_DWORD *)v20 + 9) |= 0x10u;
    *((_QWORD *)v20 + 141) = 0LL;
    v9 = XDCOBJ::bFullScreen((XDCOBJ *)v37);
LABEL_54:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v55);
    if ( v56[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v56);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v57);
    goto LABEL_57;
  }
  v13 = *((_QWORD *)v37[0] + 6);
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 40);
  else
    v14 = 0;
  TraceLoggingWriteUnsupportedGdiUsage(21LL, v14, *((unsigned __int16 *)v37[0] + 6));
  EngSetLastError(0x57u);
LABEL_61:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v46);
  DCOBJ::~DCOBJ((DCOBJ *)v37);
  return v6;
}
