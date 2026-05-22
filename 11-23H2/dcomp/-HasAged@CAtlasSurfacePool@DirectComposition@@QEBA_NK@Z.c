/*
 * XREFs of ?HasAged@CAtlasSurfacePool@DirectComposition@@QEBA_NK@Z @ 0x1800E92C8
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     ?IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ @ 0x18001FE50 (-IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ.c)
 */

bool __fastcall DirectComposition::CAtlasSurfacePool::HasAged(DirectComposition::CAtlasSurfacePool *this)
{
  int v1; // edx
  __int64 v2; // rcx
  unsigned int v3; // edx

  if ( DirectComposition::CAtlasSurfacePool::IsAvailable(this) )
    v3 = v1 - *(_DWORD *)(v2 + 168);
  else
    v3 = v1 - *(_DWORD *)(v2 + 164);
  return v3 > 0x1F4;
}
