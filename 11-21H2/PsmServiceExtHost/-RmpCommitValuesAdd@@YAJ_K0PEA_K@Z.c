/*
 * XREFs of ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18002AB3C
 * Callers:
 *     ?RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z @ 0x18002AAE0 (-RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075B14 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180079540 (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x1800795F0 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180083B90 (-RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x18008E5D0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
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
