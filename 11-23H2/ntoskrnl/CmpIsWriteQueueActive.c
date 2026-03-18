/*
 * XREFs of CmpIsWriteQueueActive @ 0x1402F6BD4
 * Callers:
 *     HvGetHiveLogFileStatus @ 0x140750844 (HvGetHiveLogFileStatus.c)
 *     CmpFlushHive @ 0x140752E88 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x14075386C (CmpGenerateFlushControlData.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1408271A4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x140A0D640 (NtCompressKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsWriteQueueActive(_QWORD *a1)
{
  return *a1 != 0LL;
}
