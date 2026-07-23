/*
 * XREFs of sub_1405A3DC0 @ 0x1405A3DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1405905F0 @ 0x1405905F0 (sub_1405905F0.c)
 */

__int64 __fastcall sub_1405A3DC0(__int64 a1, __int64 a2)
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
    sub_1405905F0((ULONG_PTR)&v5[v3], *(_QWORD *)(a2 + 8));
  }
  return 1LL;
}
