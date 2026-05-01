/*
 * XREFs of sub_18000CD10 @ 0x18000CD10
 * Callers:
 *     sub_180010248 @ 0x180010248 (sub_180010248.c)
 * Callees:
 *     sub_18000CFDC @ 0x18000CFDC (sub_18000CFDC.c)
 *     sub_18000D0B0 @ 0x18000D0B0 (sub_18000D0B0.c)
 */

__int64 __fastcall sub_18000CD10(__int64 a1)
{
  sub_18000CFDC(a1 + 32);
  sub_18000D0B0(a1 + 16);
  return sub_18000CF24(a1 + 8);
}
