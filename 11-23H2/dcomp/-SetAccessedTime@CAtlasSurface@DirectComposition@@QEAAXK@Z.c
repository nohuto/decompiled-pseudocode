/*
 * XREFs of ?SetAccessedTime@CAtlasSurface@DirectComposition@@QEAAXK@Z @ 0x180038CC4
 * Callers:
 *     ?EndDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@_NPEAK@Z @ 0x180038C20 (-EndDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@_NPEAK@Z.c)
 * Callees:
 *     ?SurfaceAccessed@CSurfaceManager@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z @ 0x180038D00 (-SurfaceAccessed@CSurfaceManager@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z.c)
 */

void __fastcall DirectComposition::CAtlasSurface::SetAccessedTime(DirectComposition::CAtlasSurface *this, int a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 8);
  if ( *(DirectComposition::CAtlasSurface **)(v2 + 200) != this )
  {
    *(_DWORD *)(v2 + 164) = a2;
    DirectComposition::CSurfaceManager::SurfaceAccessed(
      *(DirectComposition::CSurfaceManager **)(*((_QWORD *)this + 8) + 144LL),
      this);
  }
}
