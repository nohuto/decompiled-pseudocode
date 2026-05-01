/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x180090E9C
 * Callers:
 *     ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x180090F20 (-RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180090FB0 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 * Callees:
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008D124 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  struct _RM_ACTIVITY_HOST *v2; // rbx
  struct _RM_ACTIVITY_HOST *v4; // r11
  struct _RM_ACTIVITY_HOST *v5; // r11

  v2 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 6);
  if ( *((__int16 *)a1 + 30) < 0 )
  {
    if ( *((__int16 *)a2 + 30) < 0 )
      return RmpPolicyCompareActivityHostsByPriorityAndCommitEx(0LL, a1, a2);
    return 0xFFFFFFFFLL;
  }
  if ( *((__int16 *)a2 + 30) < 0 )
    return 1LL;
  if ( RmpPolicyActivityHostIsValidEmptyTarget(*((struct _RM_ACTIVITY_HOST **)a1 + 6))
    && !RmpPolicyActivityHostIsValidEmptyTarget(v4) )
  {
    return 0xFFFFFFFFLL;
  }
  return !RmpPolicyActivityHostIsValidEmptyTarget(v2) && RmpPolicyActivityHostIsValidEmptyTarget(v5);
}
