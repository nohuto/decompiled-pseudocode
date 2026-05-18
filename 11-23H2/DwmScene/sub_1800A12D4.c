/*
 * XREFs of sub_1800A12D4 @ 0x1800A12D4
 * Callers:
 *     sub_18002BF50 @ 0x18002BF50 (sub_18002BF50.c)
 * Callees:
 *     sub_180057460 @ 0x180057460 (sub_180057460.c)
 */

char __fastcall sub_1800A12D4(__int64 a1)
{
  char result; // al
  __int64 v2; // r8

  result = sub_180057460(a1 + 184);
  if ( result )
    return sub_1800A1248(v2, *(_QWORD *)(v2 + 192));
  return result;
}
