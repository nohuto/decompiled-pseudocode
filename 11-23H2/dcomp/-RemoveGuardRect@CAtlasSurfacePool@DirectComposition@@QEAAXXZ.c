/*
 * XREFs of ?RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034F84
 * Callers:
 *     ?BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPHA_MODE@@PEAPEAXPEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z @ 0x18002F7C0 (-BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPH.c)
 *     ?InitializeFromSurface@CBitmapInfoBack@DirectComposition@@QEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@PEBU4@@Z @ 0x180030238 (-InitializeFromSurface@CBitmapInfoBack@DirectComposition@@QEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@.c)
 *     ?PaintWhitePixel@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034E7C (-PaintWhitePixel@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?EndDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@_NPEAK@Z @ 0x180038C20 (-EndDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@_NPEAK@Z.c)
 *     ?EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800397A0 (-EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 *     ?RemoveGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ @ 0x1800EBA4C (-RemoveGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ.c)
 *     ?RemoveGuardRects@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x1800FA944 (-RemoveGuardRects@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 *     ?UpdateContent@CYCbCrSurface@DirectComposition@@UEAAJAEBUtagRECT@@PEBXI01I@Z @ 0x1800FF320 (-UpdateContent@CYCbCrSurface@DirectComposition@@UEAAJAEBUtagRECT@@PEBXI01I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CAtlasSurfacePool::RemoveGuardRect(DirectComposition::CAtlasSurfacePool *this)
{
  DirectComposition::CDxDevice::RemoveGuardRect(
    (DirectComposition::CDxDevice *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 8LL),
    *((struct ID3D11Texture2D **)this + 4));
}
