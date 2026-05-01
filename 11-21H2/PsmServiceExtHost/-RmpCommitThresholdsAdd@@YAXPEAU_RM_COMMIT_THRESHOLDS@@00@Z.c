/*
 * XREFs of ?RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z @ 0x18002AAE0
 * Callers:
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029ADC (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18002AB3C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 */

void __fastcall RmpCommitThresholdsAdd(
        struct _RM_COMMIT_THRESHOLDS *a1,
        struct _RM_COMMIT_THRESHOLDS *a2,
        struct _RM_COMMIT_THRESHOLDS *a3)
{
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r10
  unsigned __int64 *v8; // r11
  unsigned __int64 *v9; // r10

  RmpCommitValuesAdd(*((_QWORD *)a1 + 3), *((_QWORD *)a2 + 3), (unsigned __int64 *)a3 + 3);
  RmpCommitValuesAdd(*((_QWORD *)a1 + 2), *(_QWORD *)(v4 + 16), (unsigned __int64 *)(v5 + 16));
  RmpCommitValuesAdd(*((_QWORD *)a1 + 1), *(_QWORD *)(v6 + 8), (unsigned __int64 *)(v7 + 8));
  RmpCommitValuesAdd(*(_QWORD *)a1, *v8, v9);
}
