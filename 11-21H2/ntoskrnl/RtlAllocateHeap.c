/*
 * XREFs of RtlAllocateHeap @ 0x140371850
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403718A8 @ 0x1403718A8 (sub_1403718A8.c)
 *     sub_1405E511C @ 0x1405E511C (sub_1405E511C.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

PVOID __stdcall RtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  if ( !HeapHandle )
    sub_1405F1BBC(19, 0, 0, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return (PVOID)sub_1405E511C(HeapHandle, Size, Flags);
  else
    return (PVOID)sub_1403718A8(HeapHandle);
}
