/*
 * XREFs of CmpIsWriteQueueActive @ 0x1402F6E64
 * Callers:
 *     HvGetHiveLogFileStatus @ 0x140750A34 (HvGetHiveLogFileStatus.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x140753A5C (CmpGenerateFlushControlData.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1408274A4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x140A0D8F0 (NtCompressKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsWriteQueueActive(_QWORD *a1)
{
  return *a1 != 0LL;
}
