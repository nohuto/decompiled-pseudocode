/*
 * XREFs of ??$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z @ 0x180038AD0
 * Callers:
 *     ?CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchSurfaceManager@2@@Z @ 0x18000BE74 (-CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchS.c)
 *     ?GetGutterExtensionSurface@CDxDevice@DirectComposition@@AEAAJW4DXGI_FORMAT@@PEAUGutterExtensionSurface@12@@Z @ 0x180023C10 (-GetGutterExtensionSurface@CDxDevice@DirectComposition@@AEAAJW4DXGI_FORMAT@@PEAUGutterExtensionS.c)
 *     ?FreeDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x1800389D4 (-FreeDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 *     ?Offer@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180039008 (-Offer@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 *     ?Initialize@CHolographicViewerProxy@DirectComposition@@QEAAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@_NIAEBU_GUID@@I@Z @ 0x1800E7D48 (-Initialize@CHolographicViewerProxy@DirectComposition@@QEAAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMA.c)
 *     ?GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MODE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800E9960 (-GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MOD.c)
 *     ??1CScratchSurface@DirectComposition@@EEAA@XZ @ 0x1800FAD34 (--1CScratchSurface@DirectComposition@@EEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<ID3D11Texture2D>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
