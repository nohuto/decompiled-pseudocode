/*
 * XREFs of ?SurfaceAccessed@CSurfaceManager@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z @ 0x180038D00
 * Callers:
 *     ?SetAccessedTime@CAtlasSurface@DirectComposition@@QEAAXK@Z @ 0x180038CC4 (-SetAccessedTime@CAtlasSurface@DirectComposition@@QEAAXK@Z.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?SurfaceAccessed@CDynamicPoolSet@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z @ 0x180039320 (-SurfaceAccessed@CDynamicPoolSet@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z.c)
 */

void __fastcall DirectComposition::CSurfaceManager::SurfaceAccessed(
        DirectComposition::CSurfaceManager *this,
        struct DirectComposition::CAtlasSurface *a2)
{
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 16)
                                                                                             + 24LL)
                                                                                 + 96LL));
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 8) + 172LL) & 1) == 0 )
    DirectComposition::CDynamicPoolSet::SurfaceAccessed(*((DirectComposition::CDynamicPoolSet **)this + 2), a2);
}
