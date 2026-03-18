/*
 * XREFs of ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C029AE90
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     EngLineTo @ 0x1C01338B0 (EngLineTo.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0297B30 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029A018 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029C510 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirLineTo(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        unsigned int x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *a8,
        MIX a9)
{
  MIX mix; // r12d
  RECTL *prclBounds; // r13
  __int64 HDEV; // rbx
  int v16; // eax
  _QWORD *i; // rbx
  __int64 v18; // r9
  __int64 v19; // r9
  unsigned int v20; // r8d
  __int64 v22; // [rsp+58h] [rbp-71h] BYREF
  struct SURFACE *v23; // [rsp+60h] [rbp-69h] BYREF
  __int128 v24; // [rsp+68h] [rbp-61h] BYREF
  __int64 v25; // [rsp+78h] [rbp-51h]
  int v26; // [rsp+80h] [rbp-49h]
  _QWORD v27[2]; // [rsp+88h] [rbp-41h] BYREF
  _BYTE v28[40]; // [rsp+98h] [rbp-31h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-9h]
  __int64 v30; // [rsp+C8h] [rbp-1h]
  __int64 v31; // [rsp+108h] [rbp+3Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v23, a1);
  mix = a9;
  prclBounds = a8;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v27);
        v30 = 0LL;
        v29 = 0LL;
        v27[0] = 0LL;
        v16 = *(_DWORD *)(HDEV + 40);
        v24 = 0LL;
        v26 = 1;
        if ( (v16 & 1) != 0 )
        {
          *(_QWORD *)&v24 = *(_QWORD *)(HDEV + 48);
          v25 = HDEV;
          GreAcquireSemaphore(v24);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v24, 11LL);
          v16 = *(_DWORD *)(HDEV + 40);
        }
        if ( (v16 & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(HDEV + 1768); i; i = (_QWORD *)*i )
          {
            v18 = i[6];
            v31 = v18;
            if ( v18 )
            {
              if ( (*(_DWORD *)(v18 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v18 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1760) + 312LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&v31,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, _QWORD, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(v19 + 1760) + 312LL))(
                    a1,
                    pco,
                    pbo,
                    x1,
                    y1,
                    x2,
                    y2,
                    prclBounds,
                    mix);
                  if ( v22 )
                    *(_WORD *)(v22 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v24);
        if ( v27[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v27);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v28);
      }
    }
  }
  v20 = EngLineTo(a1, pco, pbo, x1, y1, x2, y2, prclBounds, mix);
  if ( v23 )
    bMakeOpaque(v23);
  return v20;
}
