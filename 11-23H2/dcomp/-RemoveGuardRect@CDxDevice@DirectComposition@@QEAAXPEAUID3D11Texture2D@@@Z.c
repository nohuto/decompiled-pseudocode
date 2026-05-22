/*
 * XREFs of ?RemoveGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z @ 0x180034FA8
 * Callers:
 *     ?CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z @ 0x1800055D0 (-CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z.c)
 *     ?RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034F84 (-RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?Offer@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180039008 (-Offer@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 *     ?GetScratchSurface@CScratchSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@AEBVSizeU@2@PEAPEAVCScratchSurface@2@@Z @ 0x1800FAFB4 (-GetScratchSurface@CScratchSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@AEBVSizeU@2@PEA.c)
 *     ?CopySurface@CTileClump@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800FD100 (-CopySurface@CTileClump@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 * Callees:
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDxDevice::RemoveGuardRect(
        DirectComposition::CDxDevice *this,
        struct ID3D11Texture2D *a2)
{
  struct DirectComposition::CDxDevice *v4; // [rsp+30h] [rbp+8h] BYREF

  DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock((DirectComposition::MultithreadDeviceLock *)&v4, this);
  (*(void (__fastcall **)(_QWORD, struct ID3D11Texture2D *))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6), a2);
  DirectComposition::MultithreadDeviceLock::Leave(v4);
}
