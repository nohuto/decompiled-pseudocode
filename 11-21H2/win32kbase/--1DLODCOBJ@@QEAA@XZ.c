/*
 * XREFs of ??1DLODCOBJ@@QEAA@XZ @ 0x1C001DB44
 * Callers:
 *     GreGetClipBox @ 0x1C001BC60 (GreGetClipBox.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0061CD0 (pProcessDfbSurfacesInternal.c)
 *     GreGetNearestColor @ 0x1C0062D20 (GreGetNearestColor.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C016AAA0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C016B0B8 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C0175868 (GreSetMagicColors.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C00D8C28 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C016B168 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

void __fastcall DLODCOBJ::~DLODCOBJ(DLODCOBJ *this)
{
  if ( *(_QWORD *)this )
    DLODCOBJ::vUnlock(this);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((char *)this + 16);
}
