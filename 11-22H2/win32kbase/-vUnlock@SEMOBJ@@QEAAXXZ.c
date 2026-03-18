/*
 * XREFs of ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150
 * Callers:
 *     ulIndexToRGB @ 0x1C00097B0 (ulIndexToRGB.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0033C08 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0041980 (NtGdiDeleteObjectApp.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0046370 (--1SURFMEM@@QEAA@XZ.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     bDeletePalette @ 0x1C008B2F0 (bDeletePalette.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C008F8D0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C00A67F0 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C00C32F8 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?bGarbageCollect@XEPALOBJ2@@QEAAHXZ @ 0x1C00D26AC (-bGarbageCollect@XEPALOBJ2@@QEAAHXZ.c)
 *     freepathalloc @ 0x1C0154300 (freepathalloc.c)
 *     newpathalloc @ 0x1C0154390 (newpathalloc.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0154FD0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vTrackObject@PDEVOBJ@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C01560E0 (-vTrackObject@PDEVOBJ@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?vUntrackObject@PDEVOBJ@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C01561B0 (-vUntrackObject@PDEVOBJ@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C01585B0 (-bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z.c)
 *     pProcessDfbSurfaces2 @ 0x1C015AAD0 (pProcessDfbSurfaces2.c)
 *     GreSetMagicColors @ 0x1C016C76C (GreSetMagicColors.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C016D4D0 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJ::vUnlock(PERESOURCE *this)
{
  if ( *this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", (int)*this);
    if ( *this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*this);
      PsLeavePriorityRegion();
    }
    *this = 0LL;
  }
}
