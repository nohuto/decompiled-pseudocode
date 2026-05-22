/*
 * XREFs of ?FlushD2DContexts@CSurfaceManager@DirectComposition@@QEAAXXZ @ 0x1800FBC54
 * Callers:
 *     ?Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ @ 0x1800FB920 (-Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?FlushD2DRendering@CAtlasSurfacePool@DirectComposition@@QEAAXK@Z @ 0x1800840A8 (-FlushD2DRendering@CAtlasSurfacePool@DirectComposition@@QEAAXK@Z.c)
 */

void __fastcall DirectComposition::CSurfaceManager::FlushD2DContexts(DirectComposition::CSurfaceManager *this)
{
  char *v1; // rsi
  char *i; // rax
  char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 j; // rax
  __int64 v8; // rbx

  v1 = (char *)this + 32;
  for ( i = (char *)*((_QWORD *)this + 4); ; i = (char *)*((_QWORD *)v4 + 4) )
  {
    v4 = i - 32;
    if ( i == v1 )
      v4 = 0LL;
    if ( !v4 )
      break;
    DirectComposition::CAtlasSurfacePool::FlushD2DRendering(*((DirectComposition::CAtlasSurfacePool **)v4 + 8), 0);
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    v6 = v5 + 32;
    for ( j = *(_QWORD *)(v5 + 32); ; j = *(_QWORD *)(v8 + 16) )
    {
      v8 = j - 16;
      if ( j == v6 )
        v8 = 0LL;
      if ( !v8 )
        break;
      DirectComposition::CAtlasSurfacePool::FlushD2DRendering(*(DirectComposition::CAtlasSurfacePool **)(v8 + 32), 0);
    }
  }
}
