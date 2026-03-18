/*
 * XREFs of NtGdiFillRgn @ 0x1C012E830
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
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00F2EEC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00F2F78 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
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

__int64 __fastcall NtGdiFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  unsigned int v4; // esi
  int v6; // r14d
  __int64 v7; // rcx
  unsigned int v8; // eax
  int v9; // r12d
  REGION *v10; // rcx
  DC *v11; // rax
  __int64 v12; // r13
  char *v13; // rcx
  struct REGION *v14; // rax
  DC *v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rdi
  struct ECLIPOBJ *v18; // rdx
  struct BRUSH *v19; // r15
  MIX mix; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v24; // [rsp+40h] [rbp-C0h]
  DC *v25[6]; // [rsp+48h] [rbp-B8h] BYREF
  REGION *v26; // [rsp+78h] [rbp-88h]
  REGION *v27[7]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v28[2]; // [rsp+B8h] [rbp-48h] BYREF
  __m128i rclBounds; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v30[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-18h]
  char v32; // [rsp+F8h] [rbp-8h]
  _QWORD v33[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v34[80]; // [rsp+110h] [rbp+10h] BYREF
  BRUSHOBJ pbo; // [rsp+160h] [rbp+60h] BYREF
  int v36; // [rsp+17Ch] [rbp+7Ch]
  __int64 v37; // [rsp+180h] [rbp+80h]
  __int64 v38; // [rsp+188h] [rbp+88h]
  char *v39; // [rsp+198h] [rbp+98h]
  __int64 v40; // [rsp+1B8h] [rbp+B8h]
  __int128 v41; // [rsp+1C0h] [rbp+C0h]
  int v42; // [rsp+1D8h] [rbp+D8h]
  struct BRUSH *v43[10]; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _RECTL v44; // [rsp+240h] [rbp+140h] BYREF
  CLIPOBJ pco; // [rsp+250h] [rbp+150h] BYREF
  __int64 v46; // [rsp+2A0h] [rbp+1A0h]
  int v47; // [rsp+2A8h] [rbp+1A8h]
  int v48; // [rsp+2D0h] [rbp+1D0h]
  __int64 v49; // [rsp+2E0h] [rbp+1E0h]

  v4 = 0;
  v24 = 0;
  v6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  v26 = 0LL;
  if ( !XDCOBJ::bValid((XDCOBJ *)v25) )
    goto LABEL_55;
  if ( *((_WORD *)v25[0] + 6) == 1 )
  {
    if ( (*((_DWORD *)v25[0] + 9) & 0x10000) == 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v28, (struct XDCOBJ *)v25, -2147483132);
      v9 = *(_DWORD *)(*((_QWORD *)v25[0] + 122) + 340LL) & 0x802;
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v27, a2, 0, 0);
      if ( v27[0] )
      {
        if ( v9 != 2050 )
        {
          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v30);
          if ( !v31 )
          {
            EngSetLastError(8u);
LABEL_12:
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v30);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v27);
            goto LABEL_56;
          }
          if ( !v28[0] || !RGNOBJ::bCreate((RGNOBJ *)v27, (struct EPATHOBJ *)v30, (struct EXFORMOBJ *)v28) )
            goto LABEL_12;
          v44.right = 0;
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v44, (struct EPATHOBJ *)v30, 1u, 0LL);
          if ( !*(_QWORD *)&v44.left )
          {
            EngSetLastError(8u);
            if ( v44.right == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
            goto LABEL_12;
          }
          v26 = v27[0];
          v27[0] = *(REGION **)&v44.left;
          if ( v44.right == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v30);
        }
        if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v27) == 1 )
          goto LABEL_50;
        v44 = (struct _RECTL)*((_OWORD *)v27[0] + 6);
        if ( (*((_DWORD *)v25[0] + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)v25, (struct ERECTL *)&v44);
        v43[3] = (struct BRUSH *)v25;
        if ( !ERECTL::bEmpty((ERECTL *)&v44) )
          v24 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v43, &v44);
        if ( !*((_QWORD *)v25[0] + 62) )
        {
LABEL_50:
          v6 = 1;
        }
        else
        {
          DLODCOBJ::DLODCOBJ((DLODCOBJ *)v33);
          DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v30, (struct XDCOBJ *)v25, 0);
          v10 = v27[0];
          v11 = v25[0];
          if ( !v27[0] )
            *((_DWORD *)v25[0] + 9) |= 0x10u;
          *((_QWORD *)v11 + 141) = v10;
          v12 = *((_QWORD *)v25[0] + 62);
          if ( (v32 & 1) != 0 && (unsigned int)DC::bTightenRao(v25[0]) )
          {
            v13 = (char *)v25[0] + 1024;
            if ( (*((_DWORD *)v25[0] + 10) & 1) == 0 )
              v13 = (char *)v25[0] + 1016;
            v44.left += *(_DWORD *)v13;
            v44.right += *(_DWORD *)v13;
            v44.top += *((_DWORD *)v13 + 1);
            v44.bottom += *((_DWORD *)v13 + 1);
            GreScaleValuesInternal((struct XDCOBJ *)v25, &v44.left, 4u);
            v14 = XDCOBJ::prgnEffRao(v25);
            v46 = 0LL;
            v47 = 0;
            v48 = 1;
            v49 = 0LL;
            XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v14, (struct ERECTL *)&v44, 0);
            if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
            {
              v6 = 1;
            }
            else
            {
              v16 = *(_QWORD *)(v12 + 128);
              v17 = *((_QWORD *)v25[0] + 11);
              v36 = -1;
              v40 = 0LL;
              v41 = 0LL;
              pbo.pvRbrush = 0LL;
              pbo.flColorType = 0;
              v37 = 0LL;
              v38 = 0LL;
              v42 = 0;
              BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v43, a3);
              v19 = 0LL;
              if ( v43[0] )
                v19 = v43[0];
              if ( v19 )
              {
                if ( (*((_DWORD *)v25[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v19 + 10) & 0x100) == 0 )
                {
                  rclBounds = (__m128i)pco.rclBounds;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v25, v18, &rclBounds);
                }
                bSyncBrushObj(v19);
                EBRUSHOBJ::vInitBrush(&pbo, v25[0], v19, v17, v16, v12, 1);
                v39 = (char *)v25[0] + 176;
                if ( (*((_DWORD *)v19 + 10) & 0x100) == 0 )
                {
                  mix = EBRUSHOBJ::mixBest(
                          (EBRUSHOBJ *)&pbo,
                          *(_BYTE *)(*((_QWORD *)v25[0] + 122) + 212LL),
                          *(_BYTE *)(*((_QWORD *)v25[0] + 122) + 213LL));
                  ++*(_DWORD *)(v12 + 92);
                  EngPaint((SURFOBJ *)(v12 + 24), &pco, &pbo, (POINTL *)v25[0] + 149, mix);
                  v6 = 1;
                }
                BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v43);
              }
              BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v43);
              EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
            }
            v15 = v25[0];
          }
          else
          {
            v6 = XDCOBJ::bFullScreen((XDCOBJ *)v25);
          }
          *((_DWORD *)v15 + 9) |= 0x10u;
          *((_QWORD *)v15 + 141) = 0LL;
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v30);
          if ( v33[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v33);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v34);
        }
        if ( v9 != 2050 )
        {
          REGION::vDeleteREGION(v27[0]);
          v27[0] = v26;
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v27);
      if ( v24 )
      {
        v22 = UserReferenceDwmApiPort(v21);
        DwmSyncFlushAndWaitForBatch(v22);
      }
    }
LABEL_55:
    v4 = v6;
    goto LABEL_56;
  }
  v7 = *((_QWORD *)v25[0] + 6);
  if ( v7 )
    v8 = *(_DWORD *)(v7 + 40);
  else
    v8 = 0;
  TraceLoggingWriteUnsupportedGdiUsage(21LL, v8, *((unsigned __int16 *)v25[0] + 6));
  EngSetLastError(0x57u);
LABEL_56:
  DCOBJ::~DCOBJ((DCOBJ *)v25);
  return v4;
}
