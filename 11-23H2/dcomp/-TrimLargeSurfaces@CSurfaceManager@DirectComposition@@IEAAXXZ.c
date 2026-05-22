/*
 * XREFs of ?TrimLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAXXZ @ 0x1800FBD28
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z @ 0x1800FBB88 (-RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z.c)
 * Callees:
 *     ?DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z @ 0x18001E48C (-DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z.c)
 */

void __fastcall DirectComposition::CSurfaceManager::TrimLargeSurfaces(DirectComposition::CSurfaceManager *this)
{
  char *v1; // rsi
  DirectComposition::CSurfaceManager *v2; // rax
  struct DirectComposition::CAtlasSurface *v4; // rbx
  char *v5; // rax
  struct DirectComposition::CAtlasSurface *v6; // rdx
  DirectComposition::CSurfaceManager *v7; // rax
  DirectComposition::CSurfaceManager **v8; // rbx
  DirectComposition::CSurfaceManager *v9; // rax
  struct DirectComposition::CAtlasSurface *v10; // rdx

  v1 = (char *)this + 80;
  v2 = (DirectComposition::CSurfaceManager *)*((_QWORD *)this + 10);
  v4 = (DirectComposition::CSurfaceManager *)((char *)v2 - 48);
  if ( v2 == (DirectComposition::CSurfaceManager *)((char *)this + 80) )
    v4 = 0LL;
  while ( v4 )
  {
    v5 = (char *)*((_QWORD *)v4 + 6);
    v6 = v4;
    v4 = (struct DirectComposition::CAtlasSurface *)(v5 - 48);
    if ( v5 == v1 )
      v4 = 0LL;
    DirectComposition::CSurfaceManager::DiscardLargeSurface(this, v6);
  }
  v7 = (DirectComposition::CSurfaceManager *)*((_QWORD *)this + 7);
  v8 = (DirectComposition::CSurfaceManager **)((char *)v7 - 48);
  if ( v7 == (DirectComposition::CSurfaceManager *)((char *)this + 56) )
    v8 = 0LL;
  while ( v8 )
  {
    v9 = v8[6];
    v10 = (struct DirectComposition::CAtlasSurface *)v8;
    v8 = (DirectComposition::CSurfaceManager **)((char *)v9 - 48);
    if ( v9 == (DirectComposition::CSurfaceManager *)((char *)this + 56) )
      v8 = 0LL;
    DirectComposition::CSurfaceManager::DiscardLargeSurface(this, v10);
  }
}
