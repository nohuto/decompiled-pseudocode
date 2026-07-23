/*
 * XREFs of RtlFreeHeap @ 0x140371770
 * Callers:
 *     sub_1403718A8 @ 0x1403718A8 (sub_1403718A8.c)
 * Callees:
 *     sub_1403717D4 @ 0x1403717D4 (sub_1403717D4.c)
 *     sub_1405E5190 @ 0x1405E5190 (sub_1405E5190.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

BOOLEAN __stdcall RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  if ( !BaseAddress )
    return 1;
  if ( !HeapHandle )
    sub_1405F1BBC(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return sub_1405E5190(HeapHandle, BaseAddress, Flags);
  else
    return sub_1403717D4(HeapHandle, BaseAddress, Flags);
}
