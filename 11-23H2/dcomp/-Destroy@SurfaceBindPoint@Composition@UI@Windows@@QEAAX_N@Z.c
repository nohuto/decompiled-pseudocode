/*
 * XREFs of ?Destroy@SurfaceBindPoint@Composition@UI@Windows@@QEAAX_N@Z @ 0x180168D00
 * Callers:
 *     ??1SurfaceBindPoint@Composition@UI@Windows@@QEAA@XZ @ 0x180123238 (--1SurfaceBindPoint@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Destroy@CompositionCubeMap@Private@Composition@UI@Windows@@UEAAXXZ @ 0x18017EC00 (-Destroy@CompositionCubeMap@Private@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionMipmapSurface@Composition@UI@Windows@@UEAAXXZ @ 0x1801939F0 (-Destroy@CompositionMipmapSurface@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z @ 0x18007E1B0 (-SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z.c)
 */

void __fastcall Windows::UI::Composition::SurfaceBindPoint::Destroy(struct IUnknown **this, char a2)
{
  Microsoft::WRL2::NestableRuntimeClass **v2; // rdi
  _QWORD *v3; // rbx

  v2 = (Microsoft::WRL2::NestableRuntimeClass **)(this + 1);
  if ( this[1] )
  {
    v3 = this + 2;
    if ( !a2 )
      *v3 = 0LL;
    Windows::UI::Composition::SurfaceBindPoint::SetSurface(this, 0LL);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v2);
    *v3 = 0LL;
  }
}
