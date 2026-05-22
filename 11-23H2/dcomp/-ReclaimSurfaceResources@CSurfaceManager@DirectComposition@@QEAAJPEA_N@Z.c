/*
 * XREFs of ?ReclaimSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJPEA_N@Z @ 0x180013FD4
 * Callers:
 *     ?ReclaimSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJPEAH@Z @ 0x180013F00 (-ReclaimSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z @ 0x180013C00 (-Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z.c)
 *     ?ReclaimSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJPEA_N@Z @ 0x180013E6C (-ReclaimSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CSurfaceManager::ReclaimSurfaceResources(
        DirectComposition::CSurfaceManager *this,
        bool *a2)
{
  DirectComposition::CDynamicPoolSet *v3; // rcx
  int v5; // r8d
  char *v6; // rsi
  __int64 v7; // rcx
  bool v8; // zf
  char *i; // rbx
  char *v11; // rax
  bool v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)this + 2);
  v12 = 0;
  v5 = 0;
  *a2 = 0;
  if ( v3 )
    v5 = DirectComposition::CDynamicPoolSet::ReclaimSurfaces(v3, a2);
  v6 = (char *)this + 32;
  v7 = *((_QWORD *)this + 4);
  v8 = v7 == (_QWORD)this + 32;
  for ( i = (char *)(v7 - 32); ; i = v11 - 32 )
  {
    if ( v8 )
      i = 0LL;
    if ( v5 < 0 || !i )
      break;
    v5 = DirectComposition::CAtlasSurfacePool::Reclaim(*((DirectComposition::CAtlasSurfacePool **)i + 8), &v12);
    *a2 |= v12;
    v11 = (char *)*((_QWORD *)i + 4);
    v8 = v11 == v6;
  }
  return (unsigned int)v5;
}
