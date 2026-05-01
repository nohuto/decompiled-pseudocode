/*
 * XREFs of ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18003C5E0
 * Callers:
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18003B480 (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C0EC (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x180050ED0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18006EF64 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180082710 (-RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCommitValuesAdd(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  if ( a2 == -1 || a1 == -1LL )
  {
    *a3 = -1LL;
    return 0LL;
  }
  if ( a1 + a2 >= a1 )
  {
    *a3 = a1 + a2;
    return 0LL;
  }
  *a3 = -1LL;
  return 3221225621LL;
}
