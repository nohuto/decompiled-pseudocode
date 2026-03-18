/*
 * XREFs of ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C001AE70
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00BEFB0 (GreRestoreDCInternal.c)
 *     GreSelectPalette @ 0x1C01757D0 (GreSelectPalette.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001E6BC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0021710 (HmgDecrementShareReferenceCountEx.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002E800 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00AE664 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00AE6F4 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C00B42E0 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 */

HPALETTE __fastcall SelectPaletteWorker(struct XDCOBJ *a1, HPALETTE a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // r9
  __int64 v10; // rbx
  HPALETTE v11; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r14
  HSEMAPHORE v16[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v16[0] = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v17, a2);
  v9 = *(_QWORD **)a1;
  v10 = v17;
  if ( !*(_QWORD *)a1 || !v17 || (*(_DWORD *)(v17 + 24) & 0x100) == 0 )
    goto LABEL_2;
  if ( !a3 )
  {
    hForePID = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v7, v6, v8, v9);
    hForePalette = a2;
    v9 = *(_QWORD **)a1;
  }
  v11 = (HPALETTE)v9[10];
  if ( v11 != a2 )
  {
    v18 = v9[11];
    if ( (struct PALETTE *)v10 == ppalDefault )
      goto LABEL_11;
    v15 = v9[6];
    if ( *(_QWORD *)(v10 + 48) == v15 )
      goto LABEL_11;
    if ( !*(_DWORD *)(v10 + 56) )
    {
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v17);
      *(_QWORD *)(v10 + 48) = v15;
LABEL_11:
      GreAcquireHmgrSemaphore(v7);
      XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v18, a1);
      *(_QWORD *)(*(_QWORD *)a1 + 80LL) = a2;
      *(_QWORD *)(*(_QWORD *)a1 + 88LL) = v10;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xFu;
      v13 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
      if ( v13 && (struct PALETTE *)v10 != ppalDefault )
        *(_QWORD *)(v13 + 176) = a2;
      XEPALOBJ::vAddToList((XEPALOBJ *)&v17, a1);
      GreReleaseHmgrSemaphore(v14);
      goto LABEL_3;
    }
LABEL_2:
    v11 = 0LL;
  }
LABEL_3:
  if ( v10 )
    HmgDecrementShareReferenceCountEx(v10, 0LL);
  SEMOBJ::vUnlock((SEMOBJ *)v16);
  return v11;
}
