/*
 * XREFs of ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860
 * Callers:
 *     ?RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x1800094A4 (-RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 *     ??1CSurfaceFactory@DirectComposition@@MEAA@XZ @ 0x18001B2E4 (--1CSurfaceFactory@DirectComposition@@MEAA@XZ.c)
 *     ??0CSurfaceFactory@DirectComposition@@IEAA@PEAVCDevice@1@_N@Z @ 0x18001B5E8 (--0CSurfaceFactory@DirectComposition@@IEAA@PEAVCDevice@1@_N@Z.c)
 *     ?Initialize@CSurfaceFactory@DirectComposition@@IEAAJPEAUIUnknown@@PEAV12@@Z @ 0x18001B6BC (-Initialize@CSurfaceFactory@DirectComposition@@IEAAJPEAUIUnknown@@PEAV12@@Z.c)
 *     ?PostDestroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x18001C73C (-PostDestroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 *     ?RecordSurfaceUseChange@CSurfaceManager@DirectComposition@@QEAAXPEBVCAtlasSurface@2@_K1@Z @ 0x180034354 (-RecordSurfaceUseChange@CSurfaceManager@DirectComposition@@QEAAXPEBVCAtlasSurface@2@_K1@Z.c)
 *     ?AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180034488 (-AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 *     ??0CAtlasSurfacePool@DirectComposition@@QEAA@PEAVCSurfaceManager@1@AEBVSizeU@1@W4DXGI_FORMAT@@_N3@Z @ 0x180034834 (--0CAtlasSurfacePool@DirectComposition@@QEAA@PEAVCSurfaceManager@1@AEBVSizeU@1@W4DXGI_FORMAT@@_N.c)
 *     ?OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_NPEA_N@Z @ 0x180036D24 (-OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_.c)
 *     ?CanBeginDraw@CVirtualSurface@DirectComposition@@AEAAJ_N@Z @ 0x180037138 (-CanBeginDraw@CVirtualSurface@DirectComposition@@AEAAJ_N@Z.c)
 *     ?BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@PEAPEAXPEAI3PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800371B0 (-BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRect.c)
 *     ?AddVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@QEAAXPEAVCVirtualSurface@2@@Z @ 0x180037BB4 (-AddVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@QEAAXPEAVCVirtualSurface@2@@Z.c)
 *     ?EndDraw@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x180037C40 (-EndDraw@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 *     ?GetSafeMaxTextureSize@CDevice@DirectComposition@@QEAAIXZ @ 0x1800387F8 (-GetSafeMaxTextureSize@CDevice@DirectComposition@@QEAAIXZ.c)
 *     ?SurfaceAccessed@CSurfaceManager@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z @ 0x180038D00 (-SurfaceAccessed@CSurfaceManager@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z.c)
 *     ?ResumeDraw@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x18003A090 (-ResumeDraw@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 *     ??1CVirtualSurface@DirectComposition@@MEAA@XZ @ 0x18003A9DC (--1CVirtualSurface@DirectComposition@@MEAA@XZ.c)
 *     ?DestroyAllTilesAndClumps@CVirtualSurface@DirectComposition@@AEAAXXZ @ 0x18003C390 (-DestroyAllTilesAndClumps@CVirtualSurface@DirectComposition@@AEAAXXZ.c)
 *     ??1CAtlasSurfacePool@DirectComposition@@EEAA@XZ @ 0x18005E68C (--1CAtlasSurfacePool@DirectComposition@@EEAA@XZ.c)
 *     ?GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAnimationProxy@2@@Z @ 0x180063974 (-GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAn.c)
 *     ?SuspendDraw@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x18008B3F0 (-SuspendDraw@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 *     ?CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ @ 0x18009ACB8 (-CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ.c)
 *     ?ClearClientDrawInProgress@CDevice@DirectComposition@@QEAAJXZ @ 0x18009ACE8 (-ClearClientDrawInProgress@CDevice@DirectComposition@@QEAAJXZ.c)
 *     ?SetClientDrawInProgress@CDevice@DirectComposition@@QEAAXXZ @ 0x18009B764 (-SetClientDrawInProgress@CDevice@DirectComposition@@QEAAXXZ.c)
 *     ?EnsureCallbackId@CAnimationInstance@DirectComposition@@AEAAJXZ @ 0x1800E8AAC (-EnsureCallbackId@CAnimationInstance@DirectComposition@@AEAAJXZ.c)
 *     ?ReleaseProxiedCallbackId@CAnimationInstance@DirectComposition@@AEAAXXZ @ 0x1800E901C (-ReleaseProxiedCallbackId@CAnimationInstance@DirectComposition@@AEAAXXZ.c)
 *     ?AllocateCrossContainerGuestReadWriteSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800EDA14 (-AllocateCrossContainerGuestReadWriteSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCShar.c)
 *     ?AllocateCrossContainerHostReadOnlySharedMemory@CDevice@DirectComposition@@QEAAJ_K0AEBU_GUID@@1PEAPEAVCCrossContainerHostReadOnlySharedAllocation@2@@Z @ 0x1800EDB38 (-AllocateCrossContainerHostReadOnlySharedMemory@CDevice@DirectComposition@@QEAAJ_K0AEBU_GUID@@1P.c)
 *     ?DisposeSharedMemory@CDevice@DirectComposition@@QEAAXPEAVCSharedAllocationBase@2@_K@Z @ 0x1800F1734 (-DisposeSharedMemory@CDevice@DirectComposition@@QEAAXPEAVCSharedAllocationBase@2@_K@Z.c)
 *     ?ReleaseProxiedCallbackId@CDevice@DirectComposition@@QEAAXII@Z @ 0x1800F3DFC (-ReleaseProxiedCallbackId@CDevice@DirectComposition@@QEAAXII@Z.c)
 *     ?RequestProxiedCallbackId@CDevice@DirectComposition@@QEAAJIPEAXPEAI@Z @ 0x1800F4178 (-RequestProxiedCallbackId@CDevice@DirectComposition@@QEAAJIPEAXPEAI@Z.c)
 *     ?Dispose@CSharedAllocationBase@DirectComposition@@QEAAX_K@Z @ 0x1800FB264 (-Dispose@CSharedAllocationBase@DirectComposition@@QEAAX_K@Z.c)
 *     ?ReadTexture@CSurfaceFactory@DirectComposition@@QEAAXPEAUIUnknown@@@Z @ 0x1800FBA6C (-ReadTexture@CSurfaceFactory@DirectComposition@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z @ 0x1800FD9C0 (-CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z.c)
 *     ?Trim@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@I@Z @ 0x1800FE680 (-Trim@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CDeviceLock::AssertIsOwned(DirectComposition::CDeviceLock *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
}
