/*
 * XREFs of sub_1406E90B4 @ 0x1406E90B4
 * Callers:
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 * Callees:
 *     sub_1402C1900 @ 0x1402C1900 (sub_1402C1900.c)
 *     sub_1405A5DF0 @ 0x1405A5DF0 (sub_1405A5DF0.c)
 */

char __fastcall sub_1406E90B4(__int64 a1)
{
  char result; // al

  result = sub_1402C1900(*(_QWORD *)(a1 + 56), 2u, a1);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x800000) != 0 )
  {
    result = sub_1402C1900(*(_QWORD *)(a1 + 96) + (unsigned int)dword_140D06A0C, 8u, a1);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 1032) )
  {
    result = sub_1405A5DF0(*(_QWORD *)(a1 + 1048), (*(_DWORD *)(a1 + 116) >> 10) & 1, 0);
    *(_QWORD *)(a1 + 1032) = 0LL;
  }
  return result;
}
