/*
 * XREFs of ?Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BE08
 * Callers:
 *     ?ReclaimResources@CDxDevice@DirectComposition@@QEAAJPEAUIDXGIResource@@PEA_N1@Z @ 0x180013DF0 (-ReclaimResources@CDxDevice@DirectComposition@@QEAAJPEAUIDXGIResource@@PEA_N1@Z.c)
 *     ?ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180022D9C (-ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 *     ?RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180023DD4 (-RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?Flush@CDevice@DirectComposition@@UEAAJXZ @ 0x180024970 (-Flush@CDevice@DirectComposition@@UEAAJXZ.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPHA_MODE@@PEAPEAXPEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z @ 0x18002F7C0 (-BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPH.c)
 *     ?RemoveGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z @ 0x180034FA8 (-RemoveGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z.c)
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     ?SetEmptyGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z @ 0x180038D94 (-SetEmptyGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z.c)
 *     ?OfferResources@CDxDevice@DirectComposition@@QEAAJPEAUIDXGIResource@@@Z @ 0x180039124 (-OfferResources@CDxDevice@DirectComposition@@QEAAJPEAUIDXGIResource@@@Z.c)
 *     ?SetGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@AEBUtagRECT@@@Z @ 0x180039520 (-SetGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@AEBUtagRECT@@@Z.c)
 *     ?EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800397A0 (-EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 *     ??1ClientUpdateLockAcquire@DirectComposition@@QEAA@XZ @ 0x1800994F4 (--1ClientUpdateLockAcquire@DirectComposition@@QEAA@XZ.c)
 *     ??1ClientUpdateLockRelease@DirectComposition@@QEAA@XZ @ 0x18009952C (--1ClientUpdateLockRelease@DirectComposition@@QEAA@XZ.c)
 *     ?Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z @ 0x18009BA98 (-Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z.c)
 *     ?Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ @ 0x18009BE60 (-Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ.c)
 *     ?Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ @ 0x1800FB920 (-Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::MultithreadDeviceLock::Leave(const struct DirectComposition::CDxDevice *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)a1 + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = *((_QWORD *)a1 + 5);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
}
