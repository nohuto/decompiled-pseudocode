/*
 * XREFs of ?OfferSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJXZ @ 0x180019670
 * Callers:
 *     ?OfferPendingSurfaces@CDevice@DirectComposition@@AEAAJXZ @ 0x1800194F8 (-OfferPendingSurfaces@CDevice@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?CollectDeadSurfaces@CSurfaceManager@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@0@Z @ 0x180019440 (-CollectDeadSurfaces@CSurfaceManager@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@0@Z.c)
 *     ?Offer@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180039008 (-Offer@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 *     ?OfferSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJXZ @ 0x180039188 (-OfferSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CSurfaceManager::OfferSurfaceResources(DirectComposition::CDynamicPoolSet **this)
{
  int v1; // edi
  DirectComposition::CDynamicPoolSet *v3; // rcx
  char *v4; // rsi
  DirectComposition::CDynamicPoolSet **v5; // rcx
  bool v6; // zf
  char *i; // rbx
  char *v9; // rax

  v1 = 0;
  DirectComposition::CSurfaceManager::CollectDeadSurfaces(this, 0, 0LL, 1);
  v3 = this[2];
  if ( v3 )
    v1 = DirectComposition::CDynamicPoolSet::OfferSurfaces(v3);
  v4 = (char *)(this + 4);
  v5 = (DirectComposition::CDynamicPoolSet **)this[4];
  v6 = v5 == this + 4;
  for ( i = (char *)(v5 - 4); ; i = v9 - 32 )
  {
    if ( v6 )
      i = 0LL;
    if ( v1 < 0 || !i )
      break;
    v1 = DirectComposition::CAtlasSurfacePool::Offer(*((DirectComposition::CAtlasSurfacePool **)i + 8));
    v9 = (char *)*((_QWORD *)i + 4);
    v6 = v9 == v4;
  }
  return (unsigned int)v1;
}
