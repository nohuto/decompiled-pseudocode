/*
 * XREFs of ?SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z @ 0x18007E1B0
 * Callers:
 *     ??_GCompositionSurfaceBrush@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180046350 (--_GCompositionSurfaceBrush@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ?Destroy@BindableSurface@Composition@UI@Windows@@MEAAXXZ @ 0x180060FD0 (-Destroy@BindableSurface@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?Destroy@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAXXZ @ 0x18007E120 (-Destroy@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@SurfaceBindPoint@Composition@UI@Windows@@QEAAX_N@Z @ 0x180168D00 (-Destroy@SurfaceBindPoint@Composition@UI@Windows@@QEAAX_N@Z.c)
 *     ?SetSurfaces@CompositionCubeMap@Private@Composition@UI@Windows@@QEAAJIPEAPEAUICompositionSurface@345@@Z @ 0x18017F074 (-SetSurfaces@CompositionCubeMap@Private@Composition@UI@Windows@@QEAAJIPEAPEAUICompositionSurface.c)
 *     ?GetDrawingSurfaceForLevel@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJIPEAPEAVCompositionDrawingSurface@234@@Z @ 0x180193B58 (-GetDrawingSurfaceForLevel@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJIPEAPEAVComposi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DetachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAXXZ @ 0x180029FF0 (-DetachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z @ 0x180090AD0 (-AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::SurfaceBindPoint::SetSurface(struct IUnknown **this, struct IUnknown *a2)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == this[3] )
    return 0LL;
  if ( this[3] )
    Windows::UI::Composition::SurfaceBindPoint::DetachSurface((Windows::UI::Composition::SurfaceBindPoint *)this);
  if ( !a2 )
    return 0LL;
  v5 = Windows::UI::Composition::SurfaceBindPoint::AttachSurface((Windows::UI::Composition::SurfaceBindPoint *)this, a2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEA,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsurfacebindpoint.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
