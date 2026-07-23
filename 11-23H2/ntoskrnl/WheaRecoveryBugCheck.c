/*
 * XREFs of WheaRecoveryBugCheck @ 0x140610B10
 * Callers:
 *     KiMcheckAlternateReturn @ 0x140580880 (KiMcheckAlternateReturn.c)
 *     WheaReportHwError @ 0x140610B80 (WheaReportHwError.c)
 * Callees:
 *     WheapAddToDumpFile @ 0x140611048 (WheapAddToDumpFile.c)
 *     WheapCompressErrorRecord @ 0x140611278 (WheapCompressErrorRecord.c)
 *     WheapPersistPageForMemoryError @ 0x140611518 (WheapPersistPageForMemoryError.c)
 */

__int64 __fastcall WheaRecoveryBugCheck(__int64 a1, __int64 a2)
{
  WheapCompressErrorRecord(3LL, a1);
  WheapPersistPageForMemoryError(a1);
  PshedWriteErrorRecord(0LL, *(unsigned int *)(a1 + 20), a1);
  WheapAddToDumpFile(a1, *(unsigned int *)(a1 + 20));
  return PshedBugCheckSystem(a2, a1);
}
