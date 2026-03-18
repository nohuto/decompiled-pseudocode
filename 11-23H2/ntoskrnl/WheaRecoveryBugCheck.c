/*
 * XREFs of WheaRecoveryBugCheck @ 0x1406105C0
 * Callers:
 *     KiMcheckAlternateReturn @ 0x140580390 (KiMcheckAlternateReturn.c)
 *     WheaReportHwError @ 0x140610630 (WheaReportHwError.c)
 * Callees:
 *     WheapAddToDumpFile @ 0x140610AF8 (WheapAddToDumpFile.c)
 *     WheapCompressErrorRecord @ 0x140610D28 (WheapCompressErrorRecord.c)
 *     WheapPersistPageForMemoryError @ 0x140610FC8 (WheapPersistPageForMemoryError.c)
 */

__int64 __fastcall WheaRecoveryBugCheck(__int64 a1, __int64 a2)
{
  WheapCompressErrorRecord(3LL, a1);
  WheapPersistPageForMemoryError(a1);
  PshedWriteErrorRecord(0LL, *(unsigned int *)(a1 + 20), a1);
  WheapAddToDumpFile(a1, *(unsigned int *)(a1 + 20));
  return PshedBugCheckSystem(a2, a1);
}
