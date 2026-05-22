/*
 * XREFs of ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4
 * Callers:
 *     ?ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180022D9C (-ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 *     ?BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPHA_MODE@@PEAPEAXPEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z @ 0x18002F7C0 (-BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPH.c)
 *     ?InitializeFromSurface@CBitmapInfoBack@DirectComposition@@QEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@PEBU4@@Z @ 0x180030238 (-InitializeFromSurface@CBitmapInfoBack@DirectComposition@@QEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@.c)
 *     ?CreateCompositionBuffer@CDxDevice@DirectComposition@@QEAAJIIW4DXGI_FORMAT@@HIIPEAPEAXPEAPEAUIUnknown@@@Z @ 0x180034A9C (-CreateCompositionBuffer@CDxDevice@DirectComposition@@QEAAJIIW4DXGI_FORMAT@@HIIPEAPEAXPEAPEAUIUn.c)
 *     ?PaintWhitePixel@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034E7C (-PaintWhitePixel@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_NPEA_N@Z @ 0x180036D24 (-OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_.c)
 *     ?EndDraw@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x180037C40 (-EndDraw@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 *     ?GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MODE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800E9960 (-GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MOD.c)
 *     ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x1800EB360 (-CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z.c)
 *     ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800EB540 (-CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 *     ?ClearSurface@CDxDevice@DirectComposition@@QEAAJPEAUID3D11Resource@@@Z @ 0x1800F753C (-ClearSurface@CDxDevice@DirectComposition@@QEAAJPEAUID3D11Resource@@@Z.c)
 *     ?CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800F761C (-CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Textur.c)
 *     ?ReadTexture@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@@Z @ 0x1800F77F4 (-ReadTexture@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@@Z.c)
 *     ?CopySurface@CTileClump@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800FD100 (-CopySurface@CTileClump@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x1800FDB40 (-CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800FDCB0 (-CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ?Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800FE370 (-Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 *     ?UpdateContent@CYCbCrSurface@DirectComposition@@UEAAJAEBUtagRECT@@PEBXI01I@Z @ 0x1800FF320 (-UpdateContent@CYCbCrSurface@DirectComposition@@UEAAJAEBUtagRECT@@PEBXI01I@Z.c)
 * Callees:
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

const struct DirectComposition::CDxDevice **__fastcall DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
        const struct DirectComposition::CDxDevice **this,
        DirectComposition::CDevice **a2)
{
  const struct DirectComposition::CDxDevice *v3; // rdx

  DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock(this, a2);
  v3 = *this;
  this[1] = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v3 + 9) + 1048LL))(*((_QWORD *)v3 + 9), *((_QWORD *)v3 + 8));
  return this;
}
