/*
 * XREFs of ?DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z @ 0x18001E48C
 * Callers:
 *     ??1CSurfaceManager@DirectComposition@@EEAA@XZ @ 0x18001B464 (--1CSurfaceManager@DirectComposition@@EEAA@XZ.c)
 *     ?Clear@CSurfaceManager@DirectComposition@@QEAAXXZ @ 0x18001BD40 (-Clear@CSurfaceManager@DirectComposition@@QEAAXXZ.c)
 *     ?CollectLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAX_N0PEAUSurfaceRequestStruct@2@0@Z @ 0x1800214A8 (-CollectLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAX_N0PEAUSurfaceRequestStruct@2@0@Z.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?CapMaximumAllocations@CSurfaceManager@DirectComposition@@QEAAX_N@Z @ 0x180026B30 (-CapMaximumAllocations@CSurfaceManager@DirectComposition@@QEAAX_N@Z.c)
 *     ?TrimLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAXXZ @ 0x1800FBD28 (-TrimLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     ?Dispose@CAtlasSurface@DirectComposition@@UEAAXXZ @ 0x18001FAA0 (-Dispose@CAtlasSurface@DirectComposition@@UEAAXXZ.c)
 */

void __fastcall DirectComposition::CSurfaceManager::DiscardLargeSurface(
        DirectComposition::CSurfaceManager *this,
        struct DirectComposition::CAtlasSurface *a2)
{
  char *v2; // rax
  __int64 v4; // rdx
  char **v5; // r8

  v2 = (char *)a2 + 32;
  v4 = *((_QWORD *)a2 + 4);
  if ( *(char **)(v4 + 8) != v2 || (v5 = (char **)*((_QWORD *)v2 + 1), *v5 != v2) )
    __fastfail(3u);
  *v5 = (char *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  *(_OWORD *)v2 = 0LL;
  --*((_DWORD *)this + 6);
  DirectComposition::CAtlasSurface::Dispose(a2);
  CMILRefCountBaseT<IUnknown>::InternalRelease(a2);
}
