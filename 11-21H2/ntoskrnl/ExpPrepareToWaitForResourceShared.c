/*
 * XREFs of ExpPrepareToWaitForResourceShared @ 0x1402597A8
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x14032BD70 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14039BA90 (ExAcquireFastResourceSharedStarveExclusive.c)
 * Callees:
 *     RtlInsertHeadCircularList @ 0x1402334A0 (RtlInsertHeadCircularList.c)
 */

__int64 __fastcall ExpPrepareToWaitForResourceShared(__int64 a1, __int64 a2, __int64 a3)
{
  ++*(_DWORD *)(a1 + 72);
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 16) = a2;
  *(_DWORD *)(a3 + 28) = 0;
  *(_WORD *)(a3 + 24) = 1;
  *(_BYTE *)(a3 + 26) = 6;
  *(_QWORD *)(a3 + 40) = a3 + 32;
  *(_QWORD *)(a3 + 32) = a3 + 32;
  return RtlInsertHeadCircularList((__int64 *)(a1 + 32), (_QWORD *)a3);
}
