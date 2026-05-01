/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x18008C974
 * Callers:
 *     ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x18008CA10 (-RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x18008CAA0 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 * Callees:
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180055E58 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x180055EAC (-RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  struct _RM_ACTIVITY_HOST *v2; // rbx
  struct _RM_ACTIVITY_HOST *v3; // rdi
  unsigned int v5; // r11d

  v2 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 6);
  v3 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a2 + 6);
  if ( *((__int16 *)a1 + 30) < 0 )
  {
    if ( *((__int16 *)a2 + 30) < 0 )
      return RmpPolicyCompareActivityHostsByPriorityAndCommitEx(0LL, a1, a2);
    return 0xFFFFFFFFLL;
  }
  if ( *((__int16 *)a2 + 30) < 0 )
    return 1LL;
  if ( RmpPolicyActivityHostIsValidEmptyTarget(*((struct _RM_ACTIVITY_HOST **)a1 + 6))
    && !RmpPolicyActivityHostIsValidEmptyTarget(v3) )
  {
    return 0xFFFFFFFFLL;
  }
  if ( RmpPolicyActivityHostIsValidEmptyTarget(v2) )
    return 0LL;
  LOBYTE(v5) = RmpPolicyActivityHostIsValidEmptyTarget(v3);
  return v5;
}
