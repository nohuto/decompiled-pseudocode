/*
 * XREFs of ??1CDynamicPool@DirectComposition@@EEAA@XZ @ 0x1800859D4
 * Callers:
 *     ??_GCDynamicPool@DirectComposition@@EEAAPEAXI@Z @ 0x180085990 (--_GCDynamicPool@DirectComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCAtlasNode@DirectComposition@@QEAAPEAXI@Z @ 0x180085A18 (--_GCAtlasNode@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasSurfacePool@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x180089D84 (-InternalRelease@-$ComPtr@VCAtlasSurfacePool@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall DirectComposition::CDynamicPool::~CDynamicPool(DirectComposition::CDynamicPool *this, unsigned int a2)
{
  DirectComposition::CAtlasNode *v3; // rcx

  *(_QWORD *)this = &DirectComposition::CDynamicPool::`vftable';
  v3 = (DirectComposition::CAtlasNode *)*((_QWORD *)this + 5);
  if ( v3 )
    DirectComposition::CAtlasNode::`scalar deleting destructor'(v3, a2);
  *((_QWORD *)this + 5) = 0LL;
  Microsoft::WRL::ComPtr<DirectComposition::CAtlasSurfacePool>::InternalRelease((char *)this + 32);
  Microsoft::WRL::ComPtr<DirectComposition::CAtlasSurfacePool>::InternalRelease((char *)this + 32);
}
