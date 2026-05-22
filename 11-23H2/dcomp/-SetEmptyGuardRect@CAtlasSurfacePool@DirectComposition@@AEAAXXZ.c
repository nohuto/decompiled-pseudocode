/*
 * XREFs of ?SetEmptyGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x180038D50
 * Callers:
 *     ?EndDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@_NPEAK@Z @ 0x180038C20 (-EndDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@_NPEAK@Z.c)
 *     ?SuspendDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x18008A1A0 (-SuspendDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 *     ?SuspendDraw@CTileClump@DirectComposition@@QEAAXXZ @ 0x18008B4C4 (-SuspendDraw@CTileClump@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?SetEmptyGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z @ 0x180038D94 (-SetEmptyGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z.c)
 */

void __fastcall DirectComposition::CAtlasSurfacePool::SetEmptyGuardRect(DirectComposition::CAtlasSurfacePool *this)
{
  DirectComposition::CDxDevice::SetEmptyGuardRect(
    (DirectComposition::CDxDevice *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 8LL),
    *((struct ID3D11Texture2D **)this + 4));
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
}
