/*
 * XREFs of sub_1800706D8 @ 0x1800706D8
 * Callers:
 *     sub_18007007C @ 0x18007007C (sub_18007007C.c)
 *     sub_180070408 @ 0x180070408 (sub_180070408.c)
 * Callees:
 *     sub_18006FE14 @ 0x18006FE14 (sub_18006FE14.c)
 */

__int64 __fastcall sub_1800706D8(__int64 *a1)
{
  __int64 result; // rax

  sub_18006FE14(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
