/*
 * XREFs of ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x1C007B470
 * Callers:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C00D5374 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C00D8400 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 * Callees:
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0079E88 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C007B180 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C007B51C (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ @ 0x1C007B564 (-CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C007C930 (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 */

void __fastcall SFMLOGICALSURFACE::DeInitialize(SFMLOGICALSURFACE *this, HLSURF a2)
{
  Gre::Base *v4; // rcx
  HLSURF v5; // rdx
  int v6; // r8d
  HDEV *v7; // rbx
  HSURF *v8; // rsi

  SfmTokenArray::DeInitialize((SFMLOGICALSURFACE *)((char *)this + 216));
  v7 = (HDEV *)((char *)this + 24);
  if ( *((_DWORD *)Gre::Base::Globals(v4) + 798) )
    *v7 = 0LL;
  *(_QWORD *)this = a2;
  v8 = (HSURF *)SFMLOGICALSURFACE::OwnsSurfaceCleanup(this, v5, v6);
  if ( v8 )
  {
    SFMLOGICALSURFACE::SetShape(this, *v7, 0LL);
    SFMLOGICALSURFACE::CleanupShape(this, v8);
  }
  if ( *v7 )
  {
    SpNotifyLSurface(*v7, a2, 0, 0, 0LL);
    *v7 = 0LL;
  }
  SFMLOGICALSURFACE::CleanupRegions(this);
}
