/*
 * XREFs of ?BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0298460
 * Callers:
 *     <none>
 * Callees:
 *     EngGradientFill @ 0x1C00093E0 (EngGradientFill.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0297AF8 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0297B30 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0299814 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevGradientFill(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        struct _TRIVERTEX *a4,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        RECTL *prclExtents,
        POINTL *pptlDitherOrg,
        ULONG ulMode)
{
  unsigned int v14; // esi
  TRIVERTEX *v15; // r9
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // r9
  __int64 v22; // [rsp+60h] [rbp-48h] BYREF
  __int64 v23; // [rsp+68h] [rbp-40h] BYREF
  struct SURFACE *v24; // [rsp+70h] [rbp-38h] BYREF

  v14 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v24, a1);
  if ( a1 )
  {
    v14 = EngGradientFill(a1, pco, pxlo, v15, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1768); i; i = (_QWORD *)*i )
        {
          v18 = i[6];
          v22 = v18;
          if ( v18 )
          {
            if ( (*(_DWORD *)(v18 + 1792) & 0x8000000) != 0 )
            {
              v19 = *(_DWORD *)(v18 + 2096);
              if ( (v19 & 0x1000) != 0 && (v19 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1760) + 608LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&v22,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, struct _TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v20 + 1760) + 608LL))(
                    a1,
                    pco,
                    pxlo,
                    a4,
                    nVertex,
                    pMesh,
                    nMesh,
                    prclExtents,
                    pptlDitherOrg,
                    ulMode);
                  if ( v23 )
                    *(_WORD *)(v23 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v24 )
    bBmpMakeOpaque(v24);
  return v14;
}
