/*
 * XREFs of ?CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ @ 0x18009ACB8
 * Callers:
 *     ?Resize@CCompositionSurface@DirectComposition@@UEAAJII@Z @ 0x18000C9A0 (-Resize@CCompositionSurface@DirectComposition@@UEAAJII@Z.c)
 *     ?Flush@CDevice@DirectComposition@@UEAAJXZ @ 0x180024970 (-Flush@CDevice@DirectComposition@@UEAAJXZ.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ??1CCompositionSurface@DirectComposition@@AEAA@XZ @ 0x18007808C (--1CCompositionSurface@DirectComposition@@AEAA@XZ.c)
 *     ??0ClientUpdateLockAcquire@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ@Z @ 0x18009942C (--0ClientUpdateLockAcquire@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ@Z.c)
 *     ??0ClientUpdateLockRelease@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ_N@Z @ 0x18009948C (--0ClientUpdateLockRelease@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ_N@Z.c)
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x1800EB360 (-CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z.c)
 *     ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800EB540 (-CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 *     ?DrawPrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAUID2D1DeviceContext@@AEBUD2D_MATRIX_4X4_F@@MW4DCOMPOSITION_COMPOSITE_MODE@@@Z @ 0x1800F1830 (-DrawPrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAU.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::CheckClientDrawNotInProgress(DirectComposition::CDevice *this)
{
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDevice *)((char *)this + 96));
  return *((_DWORD *)this + 171) != 0 ? 0x88980801 : 0;
}
