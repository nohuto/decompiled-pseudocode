/*
 * XREFs of ?RecordUtilizationInfo@CSurfaceManager@DirectComposition@@QEAAXXZ @ 0x1800194B8
 * Callers:
 *     ?CollectDeadSurfaces@CSurfaceManager@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@0@Z @ 0x180019440 (-CollectDeadSurfaces@CSurfaceManager@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@0@Z.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z @ 0x1800FBB88 (-RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z.c)
 * Callees:
 *     ?RecordUtilizationInfo@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180021900 (-RecordUtilizationInfo@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CSurfaceManager::RecordUtilizationInfo(DirectComposition::CSurfaceManager *this)
{
  char *v2; // rsi
  char *i; // rax
  char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 j; // rax
  DirectComposition::CAtlasSurfacePool *v8; // rcx
  __int64 v9; // rbx

  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
  {
    v2 = (char *)this + 32;
    for ( i = (char *)*((_QWORD *)this + 4); ; i = (char *)*((_QWORD *)v4 + 4) )
    {
      v4 = i - 32;
      if ( i == v2 )
        v4 = 0LL;
      if ( !v4 )
        break;
      DirectComposition::CAtlasSurfacePool::RecordUtilizationInfo(*((DirectComposition::CAtlasSurfacePool **)v4 + 8));
    }
    v5 = *((_QWORD *)this + 2);
    if ( v5 )
    {
      v6 = v5 + 32;
      for ( j = *(_QWORD *)(v5 + 32); ; j = *(_QWORD *)(v9 + 16) )
      {
        v9 = j - 16;
        if ( j == v6 )
          v9 = 0LL;
        if ( !v9 )
          break;
        v8 = *(DirectComposition::CAtlasSurfacePool **)(v9 + 32);
        if ( v8 )
          DirectComposition::CAtlasSurfacePool::RecordUtilizationInfo(v8);
      }
    }
  }
}
