/*
 * XREFs of sub_140591040 @ 0x140591040
 * Callers:
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 *     sub_140590E20 @ 0x140590E20 (sub_140590E20.c)
 * Callees:
 *     sub_1402E8154 @ 0x1402E8154 (sub_1402E8154.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 */

signed __int64 __fastcall sub_140591040(__m128i *a1, __m128i *a2)
{
  sub_1402E8154(a1, a2);
  a1[2].m128i_i8[2] = a1[2].m128i_i8[2] & 0xF8 | 6;
  return sub_14033C300((__int64)a1, 2);
}
