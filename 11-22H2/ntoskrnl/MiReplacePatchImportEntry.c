/*
 * XREFs of MiReplacePatchImportEntry @ 0x140642F50
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 *     MiReplaceImportEntry @ 0x14062C720 (MiReplaceImportEntry.c)
 */

__int64 __fastcall MiReplacePatchImportEntry(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  int v3; // ebx
  _QWORD *v5; // r9
  ULONG Size; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(void **)(a1 + 48);
  v3 = 0;
  Size = 0;
  v5 = RtlImageDirectoryEntryToData(v2, 1u, 0xCu, &Size);
  if ( v5 && Size >= 8 && Size >> 3 )
  {
    while ( v5[v3] != *(_QWORD *)(a2 + 16) )
    {
      if ( ++v3 >= Size >> 3 )
        return 1LL;
    }
    MiReplaceImportEntry((ULONG_PTR)&v5[v3], *(_QWORD *)(a2 + 8));
  }
  return 1LL;
}
