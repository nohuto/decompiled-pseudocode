/*
 * XREFs of ?SetEmptyGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z @ 0x180038D94
 * Callers:
 *     ?CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z @ 0x1800055D0 (-CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z.c)
 *     ?SetEmptyGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x180038D50 (-SetEmptyGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 *     ?CopySurface@CTileClump@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800FD100 (-CopySurface@CTileClump@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 * Callees:
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDxDevice::SetEmptyGuardRect(
        DirectComposition::CDxDevice *this,
        struct ID3D11Texture2D *a2)
{
  struct DirectComposition::CDxDevice *v4; // [rsp+30h] [rbp+8h] BYREF

  DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock((DirectComposition::MultithreadDeviceLock *)&v4, this);
  (*(void (__fastcall **)(_QWORD, struct ID3D11Texture2D *))(**((_QWORD **)this + 6) + 56LL))(*((_QWORD *)this + 6), a2);
  DirectComposition::MultithreadDeviceLock::Leave(v4);
}
