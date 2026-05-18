/*
 * XREFs of sub_180038698 @ 0x180038698
 * Callers:
 *     sub_180035B28 @ 0x180035B28 (sub_180035B28.c)
 * Callees:
 *     sub_1800109B0 @ 0x1800109B0 (sub_1800109B0.c)
 */

__int64 __fastcall sub_180038698(__int64 *a1)
{
  __int64 result; // rax

  sub_1800109B0(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
