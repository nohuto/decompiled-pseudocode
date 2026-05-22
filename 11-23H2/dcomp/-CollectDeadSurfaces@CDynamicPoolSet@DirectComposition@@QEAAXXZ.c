/*
 * XREFs of ?CollectDeadSurfaces@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x180024398
 * Callers:
 *     ?CollectDeadSurfaces@CSurfaceManager@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@0@Z @ 0x180019440 (-CollectDeadSurfaces@CSurfaceManager@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@0@Z.c)
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z @ 0x1800FBB88 (-RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z.c)
 * Callees:
 *     ?CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ @ 0x180027480 (-CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CDynamicPoolSet::CollectDeadSurfaces(DirectComposition::CDynamicPoolSet *this)
{
  char *v1; // rdi
  char *i; // rax
  char *v3; // rbx
  DirectComposition::CAtlasNode *v4; // rcx

  v1 = (char *)this + 32;
  for ( i = (char *)*((_QWORD *)this + 4); ; i = (char *)*((_QWORD *)v3 + 2) )
  {
    v3 = i - 16;
    if ( i == v1 )
      v3 = 0LL;
    if ( !v3 )
      break;
    v4 = (DirectComposition::CAtlasNode *)*((_QWORD *)v3 + 5);
    if ( v4 )
      DirectComposition::CAtlasNode::CollectDead(v4);
  }
}
