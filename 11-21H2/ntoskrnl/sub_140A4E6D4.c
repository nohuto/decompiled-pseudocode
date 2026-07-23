/*
 * XREFs of sub_140A4E6D4 @ 0x140A4E6D4
 * Callers:
 *     sub_140A4EB20 @ 0x140A4EB20 (sub_140A4EB20.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140A4E6D4(PVOID MemoryMap)
{
  __int64 *i; // rbx
  PVOID *j; // rbx
  PVOID *k; // rsi

  for ( i = (__int64 *)qword_140C4BCE0; i != &qword_140C4BCE0; i = (__int64 *)*i )
  {
    if ( i[38] )
      sub_14042A5E0(MemoryMap, i[2]);
  }
  if ( MemoryMap )
  {
    PoSetHiberRange(MemoryMap, 2u, &qword_140C4A138, 8uLL, 0x496C6148u);
    for ( j = (PVOID *)qword_140C4A140; j != &qword_140C4A140; j = (PVOID *)*j )
    {
      PoSetHiberRange(MemoryMap, 2u, j, 0x40uLL, 0x496C6148u);
      for ( k = (PVOID *)j[6]; k != j + 6; k = (PVOID *)*k )
        PoSetHiberRange(MemoryMap, 2u, k, 0x80uLL, 0x496C6148u);
    }
  }
}
