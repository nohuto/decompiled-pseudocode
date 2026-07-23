/*
 * XREFs of sub_140511A58 @ 0x140511A58
 * Callers:
 *     sub_1402305F0 @ 0x1402305F0 (sub_1402305F0.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     IoFreeMapRegisters @ 0x140456A30 (IoFreeMapRegisters.c)
 *     sub_140516D80 @ 0x140516D80 (sub_140516D80.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140511A58(PDMA_ADAPTER DmaAdapter, __int64 a2, char a3)
{
  __int64 v3; // rdi
  struct _MDL *v5; // rbx
  struct _MDL *Next; // rsi

  v3 = *(_QWORD *)(a2 + 8);
  sub_140516D80(
    (_DWORD)DmaAdapter,
    *(_QWORD *)(v3 + 8),
    *(_QWORD *)(v3 + 24),
    *(_DWORD *)(v3 + 32) - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 44LL) - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 32LL),
    *(_DWORD *)(v3 + 40),
    a3);
  IoFreeMapRegisters(DmaAdapter, *(PVOID *)(v3 + 24), *(_DWORD *)(v3 + 44));
  v5 = *(struct _MDL **)(v3 + 16);
  if ( v5 )
  {
    do
    {
      Next = v5->Next;
      if ( (v5->MdlFlags & 1) != 0 )
        MmUnmapLockedPages(v5->MappedSystemVa, v5);
      IoFreeMdl(v5);
      v5 = Next;
    }
    while ( Next );
  }
  if ( (*(_DWORD *)v3 & 1) == 0 )
    ExFreePoolWithTag(*(PVOID *)(v3 + 160), 0);
}
