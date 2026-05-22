/*
 * XREFs of ?EndDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@_NPEAK@Z @ 0x180038C20
 * Callers:
 *     ?EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x180038924 (-EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?D2DEndDraw@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x180021E78 (-D2DEndDraw@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 *     ?RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034F84 (-RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?SetAccessedTime@CAtlasSurface@DirectComposition@@QEAAXK@Z @ 0x180038CC4 (-SetAccessedTime@CAtlasSurface@DirectComposition@@QEAAXK@Z.c)
 *     ?SetEmptyGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x180038D50 (-SetEmptyGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReadTexture@CSurfaceFactory@DirectComposition@@QEAAXPEAUIUnknown@@@Z @ 0x1800FBA6C (-ReadTexture@CSurfaceFactory@DirectComposition@@QEAAXPEAUIUnknown@@@Z.c)
 */

void __fastcall DirectComposition::CAtlasSurface::EndDraw(
        DirectComposition::CAtlasSurface *this,
        struct ID2D1Bitmap *a2,
        char a3,
        unsigned int *a4)
{
  DWORD TickCount; // eax
  __int64 v9; // rbx
  _DWORD *v10; // rdi
  __int64 v11; // rcx

  TickCount = GetTickCount();
  DirectComposition::CAtlasSurface::SetAccessedTime(this, TickCount);
  v9 = *((_QWORD *)this + 8);
  v10 = (_DWORD *)(v9 + 176);
  if ( a2 )
    --*v10;
  if ( a3 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(_QWORD, struct ID2D1Bitmap *, _QWORD))(**(_QWORD **)(v9 + 88) + 72LL))(
        *(_QWORD *)(v9 + 88),
        a2,
        0LL);
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 144) + 128LL) + 354LL) )
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9 + 56) + 592LL))(*(_QWORD *)(v9 + 56), 0LL);
      *a4 = *(_DWORD *)(v9 + 180);
    }
    if ( g_fLockAndReadEndDraw )
    {
      v11 = *(_QWORD *)(v9 + 56);
      if ( v11 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 336LL))(v11, 0LL, 0LL);
      DirectComposition::CAtlasSurfacePool::RemoveGuardRect((DirectComposition::CAtlasSurfacePool *)v9);
      DirectComposition::CSurfaceFactory::ReadTexture(
        *(DirectComposition::CSurfaceFactory **)(*(_QWORD *)(v9 + 144) + 128LL),
        *(struct IUnknown **)(v9 + 32));
    }
    DirectComposition::CAtlasSurfacePool::SetEmptyGuardRect((DirectComposition::CAtlasSurfacePool *)v9);
  }
  if ( (*(_BYTE *)(v9 + 172) & 0x20) != 0 && !*v10 )
    DirectComposition::CAtlasSurfacePool::D2DEndDraw((DirectComposition::CAtlasSurfacePool *)v9);
}
