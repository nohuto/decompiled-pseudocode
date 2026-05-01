/*
 * XREFs of ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800871C8
 * Callers:
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008D124 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18008D824 (-RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z.c)
 *     ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180090AD0 (-RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostIsRunnable(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  __int64 result; // rax

  if ( (*((_BYTE *)a1 + 1176) & 4) == 0 )
    return 1LL;
  if ( (*((_BYTE *)a1 + 1178) & 4) == 0 )
    return 1LL;
  result = 0LL;
  if ( !a2 )
    return 1LL;
  return result;
}
