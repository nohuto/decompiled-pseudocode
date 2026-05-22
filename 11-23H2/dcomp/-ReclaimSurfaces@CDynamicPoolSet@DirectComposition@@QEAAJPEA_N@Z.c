/*
 * XREFs of ?ReclaimSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJPEA_N@Z @ 0x180013E6C
 * Callers:
 *     ?ReclaimSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJPEA_N@Z @ 0x180013FD4 (-ReclaimSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z @ 0x180013C00 (-Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CDynamicPoolSet::ReclaimSurfaces(
        DirectComposition::CDynamicPoolSet *this,
        bool *a2)
{
  char *v2; // rdi
  DirectComposition::CDynamicPoolSet *v4; // rax
  unsigned int v5; // r8d
  char *v6; // rbx
  int v7; // eax
  char *v8; // rcx
  bool v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 32;
  v10 = 0;
  v4 = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)this + 4);
  v5 = 0;
  *a2 = 0;
  v6 = (char *)v4 - 16;
  if ( v4 == (DirectComposition::CDynamicPoolSet *)((char *)this + 32) )
    v6 = 0LL;
  do
  {
    if ( !v6 )
      break;
    v7 = DirectComposition::CAtlasSurfacePool::Reclaim(*((DirectComposition::CAtlasSurfacePool **)v6 + 4), &v10);
    v5 = v7;
    *a2 |= v10;
    v8 = (char *)*((_QWORD *)v6 + 2);
    v6 = v8 - 16;
    if ( v8 == v2 )
      v6 = 0LL;
  }
  while ( v7 >= 0 );
  return v5;
}
