/*
 * XREFs of ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C029BE30
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     EngStrokePath @ 0x1C0132A40 (EngStrokePath.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0297B30 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029A018 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029C510 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *a7,
        MIX a8)
{
  MIX mix; // r12d
  LINEATTRS *plineattrs; // r13
  __int64 HDEV; // rbx
  int v15; // eax
  _QWORD *i; // rbx
  __int64 v17; // r9
  __int64 v18; // r9
  unsigned int v19; // r8d
  __int64 v21; // [rsp+58h] [rbp-69h] BYREF
  struct SURFACE *v22; // [rsp+60h] [rbp-61h] BYREF
  __int128 v23; // [rsp+68h] [rbp-59h] BYREF
  __int64 v24; // [rsp+78h] [rbp-49h]
  int v25; // [rsp+80h] [rbp-41h]
  _QWORD v26[2]; // [rsp+88h] [rbp-39h] BYREF
  _BYTE v27[40]; // [rsp+98h] [rbp-29h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-1h]
  __int64 v29; // [rsp+C8h] [rbp+7h]
  __int64 v30; // [rsp+108h] [rbp+47h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v22, a1);
  mix = a8;
  plineattrs = a7;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v26);
        v29 = 0LL;
        v28 = 0LL;
        v26[0] = 0LL;
        v15 = *(_DWORD *)(HDEV + 40);
        v23 = 0LL;
        v25 = 1;
        if ( (v15 & 1) != 0 )
        {
          *(_QWORD *)&v23 = *(_QWORD *)(HDEV + 48);
          v24 = HDEV;
          GreAcquireSemaphore(v23);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v23, 11LL);
          v15 = *(_DWORD *)(HDEV + 40);
        }
        if ( (v15 & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(HDEV + 1768); i; i = (_QWORD *)*i )
          {
            v17 = i[6];
            v30 = v17;
            if ( v17 )
            {
              if ( (*(_DWORD *)(v17 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v17 + 1760) + 176LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v21,
                    (struct PDEVOBJ *)&v30,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(v18 + 1760) + 176LL))(
                    a1,
                    ppo,
                    pco,
                    pxo,
                    pbo,
                    pptlBrushOrg,
                    plineattrs,
                    mix);
                  if ( v21 )
                    *(_WORD *)(v21 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v23);
        if ( v26[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v26);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v27);
      }
    }
  }
  v19 = EngStrokePath(a1, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
  if ( v22 )
    bMakeOpaque(v22);
  return v19;
}
