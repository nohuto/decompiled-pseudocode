/*
 * XREFs of sub_1402D0490 @ 0x1402D0490
 * Callers:
 *     sub_14023A12C @ 0x14023A12C (sub_14023A12C.c)
 *     sub_140241138 @ 0x140241138 (sub_140241138.c)
 *     sub_1402426F4 @ 0x1402426F4 (sub_1402426F4.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_14033D860 @ 0x14033D860 (sub_14033D860.c)
 *     sub_140367828 @ 0x140367828 (sub_140367828.c)
 * Callees:
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 */

__int64 __fastcall sub_1402D0490(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  __int64 v4; // rsi

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a3 = sub_1402CF4F0(a1);
  sub_14031DE00(a1, v4, 0LL);
  return v4;
}
