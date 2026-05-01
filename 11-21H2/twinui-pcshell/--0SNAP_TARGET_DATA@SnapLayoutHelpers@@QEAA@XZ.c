/*
 * XREFs of ??0SNAP_TARGET_DATA@SnapLayoutHelpers@@QEAA@XZ @ 0x180591894
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPEAUtagRECT@@3@Z @ 0x1805944A0 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPE.c)
 *     ?DetermineSnapRegionFromPoint@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCPoint@Geometry@@PEAUIImmersiveMonitor@@_N2@Z @ 0x1805A3540 (-DetermineSnapRegionFromPoint@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCPoint@Geometry@@PEAUIImm.c)
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEAUISnappedWindow@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@_NPEAUtagRECT@@6PEAUSMART_FILL_OUTPUT@1@@Z @ 0x1805A568C (-GetRectForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEAUISnappedWindow@@W4SnapLayoutFlags@1@PE.c)
 * Callees:
 *     ?Reset@SNAP_TARGET_DATA@SnapLayoutHelpers@@QEAAXXZ @ 0x1805959E4 (-Reset@SNAP_TARGET_DATA@SnapLayoutHelpers@@QEAAXXZ.c)
 */

SnapLayoutHelpers::SNAP_TARGET_DATA *__fastcall SnapLayoutHelpers::SNAP_TARGET_DATA::SNAP_TARGET_DATA(
        SnapLayoutHelpers::SNAP_TARGET_DATA *this)
{
  *(_QWORD *)((char *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  SnapLayoutHelpers::SNAP_TARGET_DATA::Reset(this);
  return this;
}
