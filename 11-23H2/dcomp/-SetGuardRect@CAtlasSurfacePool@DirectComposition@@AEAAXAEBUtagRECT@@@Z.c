/*
 * XREFs of ?SetGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXAEBUtagRECT@@@Z @ 0x1800394D4
 * Callers:
 *     ?BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPHA_MODE@@PEAPEAXPEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z @ 0x18002F7C0 (-BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPH.c)
 *     ?ResumeDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@PEAUID2D1Image@@PEAUID2D1DrawingStateBlock@@AEBUtagRECT@@@Z @ 0x180039434 (-ResumeDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@PEAUID2D1Image@@PEAUID2D1Draw.c)
 * Callees:
 *     ?SetGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@AEBUtagRECT@@@Z @ 0x180039520 (-SetGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@AEBUtagRECT@@@Z.c)
 */

void __fastcall DirectComposition::CAtlasSurfacePool::SetGuardRect(
        DirectComposition::CAtlasSurfacePool *this,
        const struct tagRECT *a2)
{
  DirectComposition::CDxDevice::SetGuardRect(
    (DirectComposition::CDxDevice *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 8LL),
    *((struct ID3D11Texture2D **)this + 4),
    a2);
  *(struct tagRECT *)((char *)this + 248) = *a2;
}
