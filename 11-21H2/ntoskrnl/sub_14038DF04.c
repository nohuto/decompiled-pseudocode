/*
 * XREFs of sub_14038DF04 @ 0x14038DF04
 * Callers:
 *     sub_140A4EB20 @ 0x140A4EB20 (sub_140A4EB20.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

void __fastcall sub_14038DF04(PVOID MemoryMap)
{
  __int64 j; // rbx
  __int64 *i; // rbx

  if ( MemoryMap )
  {
    for ( i = (__int64 *)qword_140C4A250; i != &qword_140C4A250; i = (__int64 *)*i )
      PoSetHiberRange(MemoryMap, 2u, i + 2, 8uLL, 0x496C6148u);
  }
  else
  {
    for ( j = qword_140C4A240; (__int64 *)j != &qword_140C4A240; j = *(_QWORD *)j )
      PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(j + 16), *(_QWORD *)(j + 40), 0x496C6148u);
  }
}
