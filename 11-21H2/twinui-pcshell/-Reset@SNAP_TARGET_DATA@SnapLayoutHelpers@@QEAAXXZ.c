/*
 * XREFs of ?Reset@SNAP_TARGET_DATA@SnapLayoutHelpers@@QEAAXXZ @ 0x1805959E4
 * Callers:
 *     ??0SNAP_TARGET_DATA@SnapLayoutHelpers@@QEAA@XZ @ 0x180591894 (--0SNAP_TARGET_DATA@SnapLayoutHelpers@@QEAA@XZ.c)
 *     ?ComputeSnapTargetDataForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PEAUIImmersiveMonitor@@_NPEAUSNAP_TARGET_DATA@1@@Z @ 0x1805A20F8 (-ComputeSnapTargetDataForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PE.c)
 *     ?ComputeSnapTargetDataForRegionHelper@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PEAUIImmersiveMonitor@@PEAUSNAP_TARGET_DATA@1@@Z @ 0x1805A2244 (-ComputeSnapTargetDataForRegionHelper@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRIC.c)
 * Callees:
 *     <none>
 */

void __fastcall SnapLayoutHelpers::SNAP_TARGET_DATA::Reset(SnapLayoutHelpers::SNAP_TARGET_DATA *this)
{
  *(_DWORD *)this = 11;
  SetRectEmpty((LPRECT)((char *)this + 4));
  SetRectEmpty((LPRECT)((char *)this + 20));
}
