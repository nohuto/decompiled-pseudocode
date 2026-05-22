/*
 * XREFs of McTemplateU0x_EventWriteTransfer @ 0x1800E9380
 * Callers:
 *     ?PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileClump@2@@Z @ 0x1800050F8 (-PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileC.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?OnBeforeSynchronizationStateUpdated@CAtlasSurface@DirectComposition@@EEAAXW4State@CCompositorSynchronizedObject@2@@Z @ 0x180035840 (-OnBeforeSynchronizationStateUpdated@CAtlasSurface@DirectComposition@@EEAAXW4State@CCompositorSy.c)
 *     ?OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_NPEA_N@Z @ 0x180036D24 (-OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_.c)
 *     ??1CTileClump@DirectComposition@@MEAA@XZ @ 0x180036EB4 (--1CTileClump@DirectComposition@@MEAA@XZ.c)
 *     ??1CAtlasSurfacePool@DirectComposition@@EEAA@XZ @ 0x18005E68C (--1CAtlasSurfacePool@DirectComposition@@EEAA@XZ.c)
 *     ?DisposeOnDelayedDestruction@CSharedAllocationBase@DirectComposition@@MEAAXXZ @ 0x18007E0A0 (-DisposeOnDelayedDestruction@CSharedAllocationBase@DirectComposition@@MEAAXXZ.c)
 *     ?OnMarshalerRelease@CSharedAllocationBase@DirectComposition@@UEAAXXZ @ 0x18008CC50 (-OnMarshalerRelease@CSharedAllocationBase@DirectComposition@@UEAAXXZ.c)
 *     ?Dispose@CScratchSurface@DirectComposition@@QEAAXXZ @ 0x1800EB914 (-Dispose@CScratchSurface@DirectComposition@@QEAAXXZ.c)
 *     ?ShouldBlockForExcessivePending@CDevice@DirectComposition@@AEAA_NXZ @ 0x1800F66EC (-ShouldBlockForExcessivePending@CDevice@DirectComposition@@AEAA_NXZ.c)
 *     ??1CScratchSurface@DirectComposition@@EEAA@XZ @ 0x1800FAD34 (--1CScratchSurface@DirectComposition@@EEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0x_EventWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int64 v8; // [rsp+80h] [rbp+18h] BYREF

  v8 = a3;
  v5 = &v8;
  v7 = 0;
  v6 = 8;
  return McGenEventWrite_EventWriteTransfer(a1, a2, a3, 2u, &v4);
}
