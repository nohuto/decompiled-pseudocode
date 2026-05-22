/*
 * XREFs of ?GetNext@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@PEAV23@@Z @ 0x18009B538
 * Callers:
 *     ?OfferPendingSurfaces@CDevice@DirectComposition@@AEAAJXZ @ 0x1800194F8 (-OfferPendingSurfaces@CDevice@DirectComposition@@AEAAJXZ.c)
 *     ?HideSurfacesPendingOffer@CDevice@DirectComposition@@AEAAJXZ @ 0x1800195A0 (-HideSurfacesPendingOffer@CDevice@DirectComposition@@AEAAJXZ.c)
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 *     ?Flush@CDevice@DirectComposition@@UEAAJXZ @ 0x180024970 (-Flush@CDevice@DirectComposition@@UEAAJXZ.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?GetSafeMaxTextureSize@CDevice@DirectComposition@@QEAAIXZ @ 0x1800387F8 (-GetSafeMaxTextureSize@CDevice@DirectComposition@@QEAAIXZ.c)
 *     ?GetMaxTextureSize@CDevice@DirectComposition@@UEAAIXZ @ 0x180075A60 (-GetMaxTextureSize@CDevice@DirectComposition@@UEAAIXZ.c)
 *     ?HintSize@CDevice@DirectComposition@@UEAAJII@Z @ 0x18007CEA0 (-HintSize@CDevice@DirectComposition@@UEAAJII@Z.c)
 *     ?CheckDeviceState@CDevice@DirectComposition@@UEAAJPEAH@Z @ 0x1800EDE20 (-CheckDeviceState@CDevice@DirectComposition@@UEAAJPEAH@Z.c)
 *     ?RemoveDeadSurfaces@CDevice@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@@Z @ 0x1800F3FD0 (-RemoveDeadSurfaces@CDevice@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@@Z.c)
 *     ?ShouldBlockForExcessivePending@CDevice@DirectComposition@@AEAA_NXZ @ 0x1800F66EC (-ShouldBlockForExcessivePending@CDevice@DirectComposition@@AEAA_NXZ.c)
 *     ?CommitSurfaceUpdates@CPrimitiveGroup@DirectComposition@@QEAAJXZ @ 0x1800F9AD8 (-CommitSurfaceUpdates@CPrimitiveGroup@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::GetNext(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 288);
  result = v2 - 288;
  if ( v2 == a1 + 8 )
    return 0LL;
  return result;
}
