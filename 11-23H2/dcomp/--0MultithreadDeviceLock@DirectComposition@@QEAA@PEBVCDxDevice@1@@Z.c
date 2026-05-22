/*
 * XREFs of ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4
 * Callers:
 *     ?ReclaimResources@CDxDevice@DirectComposition@@QEAAJPEAUIDXGIResource@@PEA_N1@Z @ 0x180013DF0 (-ReclaimResources@CDxDevice@DirectComposition@@QEAAJPEAUIDXGIResource@@PEA_N1@Z.c)
 *     ?ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180022D9C (-ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 *     ?RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180023DD4 (-RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?Flush@CDevice@DirectComposition@@UEAAJXZ @ 0x180024970 (-Flush@CDevice@DirectComposition@@UEAAJXZ.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPHA_MODE@@PEAPEAXPEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z @ 0x18002F7C0 (-BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPH.c)
 *     ?RemoveGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z @ 0x180034FA8 (-RemoveGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z.c)
 *     ?SetEmptyGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z @ 0x180038D94 (-SetEmptyGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z.c)
 *     ?OfferResources@CDxDevice@DirectComposition@@QEAAJPEAUIDXGIResource@@@Z @ 0x180039124 (-OfferResources@CDxDevice@DirectComposition@@QEAAJPEAUIDXGIResource@@@Z.c)
 *     ?SetGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@AEBUtagRECT@@@Z @ 0x180039520 (-SetGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@AEBUtagRECT@@@Z.c)
 *     ?EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800397A0 (-EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     ?Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z @ 0x18009BA98 (-Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z.c)
 *     ?Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ @ 0x18009BE60 (-Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ.c)
 *     ?Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ @ 0x1800FB920 (-Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ @ 0x18009ACB8 (-CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ.c)
 *     ?Enter@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BA40 (-Enter@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

const struct DirectComposition::CDxDevice **__fastcall DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock(
        const struct DirectComposition::CDxDevice **this,
        DirectComposition::CDevice **a2)
{
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  *this = (const struct DirectComposition::CDxDevice *)a2;
  v3 = DirectComposition::CDevice::CheckClientDrawNotInProgress(a2[2]);
  if ( v3 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v3, retaddr);
  DirectComposition::MultithreadDeviceLock::Enter(*this);
  return this;
}
