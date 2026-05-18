/*
 * XREFs of sub_1800742F0 @ 0x1800742F0
 * Callers:
 *     sub_18002BCA0 @ 0x18002BCA0 (sub_18002BCA0.c)
 * Callees:
 *     sub_180034880 @ 0x180034880 (sub_180034880.c)
 */

__int64 __fastcall sub_1800742F0(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = a3 & 0x7E;
  if ( (a3 & 1) != 0 || (a3 & 0x7E) != 0 )
    sub_180034880();
  return result;
}
