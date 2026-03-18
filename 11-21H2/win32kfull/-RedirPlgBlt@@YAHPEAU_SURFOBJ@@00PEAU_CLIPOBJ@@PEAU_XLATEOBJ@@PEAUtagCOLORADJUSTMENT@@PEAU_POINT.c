/*
 * XREFs of ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C029B340
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     EngPlgBlt @ 0x1C028A2A0 (EngPlgBlt.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0297B30 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0299790 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029A018 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029C510 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        RECTL *prcl,
        POINTL *pptl,
        ULONG iMode)
{
  __int64 HDEV; // rbx
  int v16; // eax
  struct _DISPSURF *i; // rsi
  __int64 v18; // r10
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v20; // rbx
  struct _SURFOBJ *v21; // rax
  __int64 v22; // r10
  unsigned int v23; // r8d
  __int64 v25; // [rsp+68h] [rbp-89h] BYREF
  struct SURFACE *v26; // [rsp+70h] [rbp-81h] BYREF
  struct SURFACE *v27; // [rsp+78h] [rbp-79h] BYREF
  struct SURFACE *v28; // [rsp+80h] [rbp-71h] BYREF
  __int128 v29; // [rsp+88h] [rbp-69h] BYREF
  __int64 v30; // [rsp+98h] [rbp-59h]
  int v31; // [rsp+A0h] [rbp-51h]
  _QWORD v32[2]; // [rsp+A8h] [rbp-49h] BYREF
  _BYTE v33[40]; // [rsp+B8h] [rbp-39h] BYREF
  __int64 v34; // [rsp+E0h] [rbp-11h]
  __int64 v35; // [rsp+E8h] [rbp-9h]
  __int64 v36; // [rsp+128h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a3);
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v32);
        v16 = *(_DWORD *)(HDEV + 40);
        v29 = 0LL;
        v35 = 0LL;
        v34 = 0LL;
        v32[0] = 0LL;
        v31 = 1;
        if ( (v16 & 1) != 0 )
        {
          *(_QWORD *)&v29 = *(_QWORD *)(HDEV + 48);
          v30 = HDEV;
          GreAcquireSemaphore(v29);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v29, 11LL);
          v16 = *(_DWORD *)(HDEV + 40);
        }
        if ( (v16 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1768); i; i = *(struct _DISPSURF **)i )
          {
            v18 = *((_QWORD *)i + 6);
            v36 = v18;
            if ( v18 )
            {
              if ( (*(_DWORD *)(v18 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v18 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1760) + 624LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v25,
                    (struct PDEVOBJ *)&v36,
                    a1);
                  DevBitmap = GetDevBitmap(i, a3);
                  v20 = GetDevBitmap(i, a2);
                  v21 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v22 + 1760) + 624LL))(
                    v21,
                    v20,
                    DevBitmap,
                    pco,
                    pxlo,
                    pca,
                    pptlBrushOrg,
                    pptfx,
                    prcl,
                    pptl,
                    iMode);
                  if ( v25 )
                    *(_WORD *)(v25 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v29);
        if ( v32[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v32);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v33);
      }
    }
  }
  v23 = EngPlgBlt(a1, a2, a3, pco, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
  if ( v26 )
    bMakeOpaque(v26);
  if ( v27 )
    bMakeOpaque(v27);
  if ( v28 )
    bMakeOpaque(v28);
  return v23;
}
