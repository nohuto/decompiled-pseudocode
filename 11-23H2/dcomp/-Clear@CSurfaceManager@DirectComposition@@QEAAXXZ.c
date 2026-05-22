/*
 * XREFs of ?Clear@CSurfaceManager@DirectComposition@@QEAAXXZ @ 0x18001BD40
 * Callers:
 *     ??1CSurfaceFactory@DirectComposition@@MEAA@XZ @ 0x18001B2E4 (--1CSurfaceFactory@DirectComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Clear@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x18001923C (-Clear@CDynamicPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z @ 0x18001E48C (-DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z.c)
 */

void __fastcall DirectComposition::CSurfaceManager::Clear(DirectComposition::CSurfaceManager *this)
{
  DirectComposition::CSurfaceManager *v2; // rax
  struct DirectComposition::CAtlasSurface *v3; // rdx
  DirectComposition::CDynamicPoolSet *v4; // rcx

  while ( *((_DWORD *)this + 6) )
  {
    v2 = (DirectComposition::CSurfaceManager *)*((_QWORD *)this + 4);
    v3 = (DirectComposition::CSurfaceManager *)((char *)v2 - 32);
    if ( v2 == (DirectComposition::CSurfaceManager *)((char *)this + 32) )
      v3 = 0LL;
    DirectComposition::CSurfaceManager::DiscardLargeSurface(this, v3);
  }
  v4 = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)this + 2);
  if ( v4 )
    DirectComposition::CDynamicPoolSet::Clear(v4);
}
