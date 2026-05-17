/*
 * XREFs of RtlpSecMemFreeVirtualMemory @ 0x1800206D4
 * Callers:
 *     RtlpDecommitBlock @ 0x180020548 (RtlpDecommitBlock.c)
 *     RtlpExtendHeap @ 0x180020860 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180022B64 (RtlpDeCommitFreeBlock.c)
 *     RtlpReAllocateHeap @ 0x180024890 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x18005347C (RtlpCreateLowFragHeap.c)
 *     RtlDestroyHeap @ 0x1800570A0 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x180057340 (RtlpDestroyHeapSegment.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1800866D8 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlDebugDestroyHeap @ 0x180104EE8 (RtlDebugDestroyHeap.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 *     RtlFlushSecureMemoryCache @ 0x180103400 (RtlFlushSecureMemoryCache.c)
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
