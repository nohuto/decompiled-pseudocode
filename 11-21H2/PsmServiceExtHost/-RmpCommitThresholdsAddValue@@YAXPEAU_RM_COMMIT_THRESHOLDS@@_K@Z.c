/*
 * XREFs of ?RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180083B90
 * Callers:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800171D0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 * Callees:
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18002AB3C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 */

void __fastcall RmpCommitThresholdsAddValue(struct _RM_COMMIT_THRESHOLDS *a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // rdx
  unsigned __int64 *v6; // r10
  __int64 v7; // rdx

  RmpCommitValuesAdd(*((_QWORD *)a1 + 3), a2, (unsigned __int64 *)a1 + 3);
  RmpCommitValuesAdd(*(_QWORD *)(v2 + 16), v3, (unsigned __int64 *)(v2 + 16));
  RmpCommitValuesAdd(*(_QWORD *)(v4 + 8), v5, (unsigned __int64 *)(v4 + 8));
  RmpCommitValuesAdd(*v6, v7, v6);
}
