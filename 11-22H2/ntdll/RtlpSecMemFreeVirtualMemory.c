/*
 * XREFs of RtlpSecMemFreeVirtualMemory @ 0x180046C90
 * Callers:
 *     RtlpFreeHeap @ 0x1800397E0 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeap @ 0x1800425F0 (RtlpReAllocateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x1800450BC (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x180045E78 (RtlpExtendHeap.c)
 *     RtlpDecommitBlock @ 0x180046B04 (RtlpDecommitBlock.c)
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x1800494C4 (RtlpCreateLowFragHeap.c)
 *     RtlDestroyHeap @ 0x1800496B0 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x180049914 (RtlpDestroyHeapSegment.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18008270C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlDebugDestroyHeap @ 0x180104BCC (RtlDebugDestroyHeap.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 *     RtlFlushSecureMemoryCache @ 0x180103100 (RtlFlushSecureMemoryCache.c)
 */

__int64 __fastcall RtlpSecMemFreeVirtualMemory(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // esi

  v4 = a4;
  v7 = ZwFreeVirtualMemory(-1LL, a2, a3, a4);
  if ( v7 == -1073741755 && (unsigned __int8)RtlFlushSecureMemoryCache(*a2, *a3) )
    return ZwFreeVirtualMemory(-1LL, a2, a3, v4);
  else
    return v7;
}
