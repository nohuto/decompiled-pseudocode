/*
 * XREFs of sub_14078BE3C @ 0x14078BE3C
 * Callers:
 *     sub_14078BC74 @ 0x14078BC74 (sub_14078BC74.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14078BE3C(__int64 a1)
{
  char v1; // r8

  v1 = 0;
  if ( *(_DWORD *)(a1 + 128) )
    return *(unsigned int *)(a1 + 128)
         * ((MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(a1 + 112) + 16LL))
          / 10000LL) > 600000;
  return v1;
}
