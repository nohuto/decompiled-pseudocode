/*
 * XREFs of ?FlushD2DRendering@CAtlasSurfacePool@DirectComposition@@QEAAXK@Z @ 0x1800840A8
 * Callers:
 *     ?Flush@CDevice@DirectComposition@@UEAAJXZ @ 0x180024970 (-Flush@CDevice@DirectComposition@@UEAAJXZ.c)
 *     ?FlushD2DRendering@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x1800EA5C8 (-FlushD2DRendering@CBitmapInfoBack@DirectComposition@@QEAAXXZ.c)
 *     ?Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ @ 0x1800FB920 (-Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ.c)
 *     ?FlushD2DContexts@CSurfaceManager@DirectComposition@@QEAAXXZ @ 0x1800FBC54 (-FlushD2DContexts@CSurfaceManager@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAtlasSurfacePool::FlushD2DRendering(
        DirectComposition::CAtlasSurfacePool *this,
        int a2)
{
  int v2; // eax
  __int64 v3; // rbx
  int v4; // eax

  v2 = *((_DWORD *)this + 45);
  if ( a2 == v2 || !a2 && *((_QWORD *)this + 7) && (*((_BYTE *)this + 172) & 0x10) != 0 )
  {
    *((_DWORD *)this + 45) = v2 + 2;
    v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 24LL);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 336LL))(
           *((_QWORD *)this + 7),
           0LL,
           0LL);
    if ( *(int *)(v3 + 632) >= 0 && v4 < 0 )
      *(_DWORD *)(v3 + 632) = v4;
  }
}
