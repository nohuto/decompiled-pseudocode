/*
 * XREFs of ?HasCornerTargets@SNAP_TARGET_METRICS@SnapLayoutHelpers@@QEBA_NXZ @ 0x1805A6960
 * Callers:
 *     ?ExtendToMonitorEdges@SnapLayoutHelpers@@YAXAEBUCRect@Geometry@@W4SnapRegion@@AEBUSNAP_TARGET_METRICS@1@PEAU23@@Z @ 0x1805A3858 (-ExtendToMonitorEdges@SnapLayoutHelpers@@YAXAEBUCRect@Geometry@@W4SnapRegion@@AEBUSNAP_TARGET_ME.c)
 * Callees:
 *     <none>
 */

bool __fastcall SnapLayoutHelpers::SNAP_TARGET_METRICS::HasCornerTargets(SnapLayoutHelpers::SNAP_TARGET_METRICS *this)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)this && *((_DWORD *)this + 1) && *((float *)this + 2) != 0.0 )
    return *((float *)this + 3) != 0.0;
  return result;
}
