/*
 * XREFs of RtlSizeHeap @ 0x1405E50D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405EB088 @ 0x1405EB088 (sub_1405EB088.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

// local variable allocation has failed, the output may be wrong!
SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  if ( !HeapHandle )
    sub_1405F1BBC(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  return sub_1405EB088(HeapHandle, *(_QWORD *)&Flags, BaseAddress);
}
