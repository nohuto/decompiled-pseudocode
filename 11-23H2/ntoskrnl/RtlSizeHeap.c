/*
 * XREFs of RtlSizeHeap @ 0x1405AA2B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSizeHeapInternal @ 0x1405AE7DC (RtlpSizeHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x1405B503C (RtlpLogHeapFailure.c)
 */

// local variable allocation has failed, the output may be wrong!
SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  return RtlpSizeHeapInternal(HeapHandle, *(_QWORD *)&Flags, BaseAddress);
}
