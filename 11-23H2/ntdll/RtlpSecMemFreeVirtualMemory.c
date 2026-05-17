/*
 * XREFs of RtlpSecMemFreeVirtualMemory @ 0x180046B30
 * Callers:
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180044F5C (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x180045D18 (RtlpExtendHeap.c)
 *     RtlpDecommitBlock @ 0x1800469A4 (RtlpDecommitBlock.c)
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x180049364 (RtlpCreateLowFragHeap.c)
 *     RtlDestroyHeap @ 0x180049550 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1800497B4 (RtlpDestroyHeapSegment.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x180082D7C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlDebugDestroyHeap @ 0x180105FDC (RtlDebugDestroyHeap.c)
 *     RtlpValidateHeap @ 0x180107E20 (RtlpValidateHeap.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A1270 (ZwFreeVirtualMemory.c)
 *     RtlFlushSecureMemoryCache @ 0x180104510 (RtlFlushSecureMemoryCache.c)
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
