/*
 * XREFs of ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002D468
 * Callers:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002D400 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180056098 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x18008AEB4 (-RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@.c)
 *     ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18008C930 (-RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostIsRunnable(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  __int64 result; // rax

  if ( (*((_BYTE *)a1 + 1184) & 4) == 0 )
    return 1LL;
  result = 0LL;
  if ( !a2 )
    return 1LL;
  return result;
}
