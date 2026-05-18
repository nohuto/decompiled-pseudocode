/*
 * XREFs of sub_180027964 @ 0x180027964
 * Callers:
 *     sub_180026F00 @ 0x180026F00 (sub_180026F00.c)
 *     sub_180035390 @ 0x180035390 (sub_180035390.c)
 *     sub_180097460 @ 0x180097460 (sub_180097460.c)
 *     sub_1800974D4 @ 0x1800974D4 (sub_1800974D4.c)
 *     sub_180097570 @ 0x180097570 (sub_180097570.c)
 *     sub_1800977A8 @ 0x1800977A8 (sub_1800977A8.c)
 *     sub_18009BF90 @ 0x18009BF90 (sub_18009BF90.c)
 *     sub_18009D490 @ 0x18009D490 (sub_18009D490.c)
 *     sub_1800E0830 @ 0x1800E0830 (sub_1800E0830.c)
 * Callees:
 *     sub_18001203C @ 0x18001203C (sub_18001203C.c)
 */

__int64 __fastcall sub_180027964(__int64 *a1)
{
  __int64 result; // rax

  sub_18001203C(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
