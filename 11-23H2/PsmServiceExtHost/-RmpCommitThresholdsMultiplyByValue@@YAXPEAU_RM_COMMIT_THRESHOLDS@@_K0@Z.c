/*
 * XREFs of ?RmpCommitThresholdsMultiplyByValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x1800823E4
 * Callers:
 *     ?RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x18008243C (-RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z.c)
 * Callees:
 *     ?RmpCommitValuesMultiply@@YAJ_K0PEA_K@Z @ 0x1800824F8 (-RmpCommitValuesMultiply@@YAJ_K0PEA_K@Z.c)
 */

void __fastcall RmpCommitThresholdsMultiplyByValue(
        struct _RM_COMMIT_THRESHOLDS *a1,
        unsigned __int64 a2,
        struct _RM_COMMIT_THRESHOLDS *a3)
{
  __int64 v4; // r10
  unsigned __int64 v5; // r11
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  unsigned __int64 *v8; // r10
  unsigned __int64 v9; // r11

  RmpCommitValuesMultiply(*((_QWORD *)a1 + 3), a2, (unsigned __int64 *)a3 + 3);
  RmpCommitValuesMultiply(*((_QWORD *)a1 + 2), v5, (unsigned __int64 *)(v4 + 16));
  RmpCommitValuesMultiply(*((_QWORD *)a1 + 1), v7, (unsigned __int64 *)(v6 + 8));
  RmpCommitValuesMultiply(*(_QWORD *)a1, v9, v8);
}
