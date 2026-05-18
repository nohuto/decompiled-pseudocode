/*
 * XREFs of sub_180027938 @ 0x180027938
 * Callers:
 *     sub_180026F00 @ 0x180026F00 (sub_180026F00.c)
 * Callees:
 *     sub_180024BE4 @ 0x180024BE4 (sub_180024BE4.c)
 */

__int64 __fastcall sub_180027938(__int64 *a1)
{
  __int64 result; // rax

  sub_180024BE4(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
