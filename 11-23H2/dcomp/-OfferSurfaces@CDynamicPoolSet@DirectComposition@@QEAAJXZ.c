/*
 * XREFs of ?OfferSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJXZ @ 0x180039188
 * Callers:
 *     ?OfferSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJXZ @ 0x180019670 (-OfferSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     ?Offer@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180039008 (-Offer@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CDynamicPoolSet::OfferSurfaces(DirectComposition::CDynamicPoolSet *this)
{
  char *v1; // rdi
  DirectComposition::CDynamicPoolSet *v2; // rax
  unsigned int v3; // edx
  char *v4; // rbx
  int v5; // eax
  char *v6; // rcx

  v1 = (char *)this + 32;
  v2 = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)this + 4);
  v3 = 0;
  v4 = (char *)v2 - 16;
  if ( v2 == (DirectComposition::CDynamicPoolSet *)((char *)this + 32) )
    v4 = 0LL;
  do
  {
    if ( !v4 )
      break;
    v5 = DirectComposition::CAtlasSurfacePool::Offer(*((DirectComposition::CAtlasSurfacePool **)v4 + 4));
    v6 = (char *)*((_QWORD *)v4 + 2);
    v3 = v5;
    v4 = v6 - 16;
    if ( v6 == v1 )
      v4 = 0LL;
  }
  while ( v5 >= 0 );
  return v3;
}
