/*
 * XREFs of MiDoesDriverProvideImportsForDriver @ 0x140B4AAB0
 * Callers:
 *     MiDoesDriverProvideBaseImageImports @ 0x140B4AA60 (MiDoesDriverProvideBaseImageImports.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall MiDoesDriverProvideImportsForDriver(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  int v4; // ebx
  unsigned __int64 v5; // rdi
  _QWORD *v6; // r8
  unsigned __int64 v7; // rdx
  ULONG Size; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(unsigned int *)(a1 + 64);
  v4 = 0;
  Size = 0;
  v5 = v2 + v3;
  v6 = RtlImageDirectoryEntryToData(*(PVOID *)(a2 + 48), 1u, 0xCu, &Size);
  if ( !v6 || !(Size >> 3) )
    return 0LL;
  while ( 1 )
  {
    v7 = v6[v4];
    if ( v7 >= v2 && v7 < v5 )
      break;
    if ( ++v4 >= Size >> 3 )
      return 0LL;
  }
  return 1LL;
}
