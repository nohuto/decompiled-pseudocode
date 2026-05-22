/*
 * XREFs of ?FlushGutterExtensions@CSurfaceFactory@DirectComposition@@QEAAJXZ @ 0x1800FBA18
 * Callers:
 *     ?CommitSurfaceUpdates@CPrimitiveGroup@DirectComposition@@QEAAJXZ @ 0x1800F9AD8 (-CommitSurfaceUpdates@CPrimitiveGroup@DirectComposition@@QEAAJXZ.c)
 *     ?Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ @ 0x1800FB920 (-Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180022D9C (-ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CSurfaceFactory::FlushGutterExtensions(DirectComposition::CSurfaceFactory *this)
{
  DirectComposition::CAtlasSurfacePool *v1; // rax
  int v3; // edx
  __int64 v4; // rcx

  v1 = (DirectComposition::CAtlasSurfacePool *)*((_QWORD *)this + 42);
  v3 = 0;
  while ( v1 )
  {
    v3 = DirectComposition::CAtlasSurfacePool::ExecuteGutterExtensions(v1);
    if ( v3 < 0 )
      break;
    v4 = *((_QWORD *)this + 42);
    v1 = *(DirectComposition::CAtlasSurfacePool **)(v4 + 240);
    *(_QWORD *)(v4 + 240) = 0LL;
    *((_QWORD *)this + 42) = v1;
  }
  return (unsigned int)v3;
}
