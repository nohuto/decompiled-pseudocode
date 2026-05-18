/*
 * XREFs of sub_18007BFD8 @ 0x18007BFD8
 * Callers:
 *     sub_18007BF3C @ 0x18007BF3C (sub_18007BF3C.c)
 * Callees:
 *     sub_18007BBAC @ 0x18007BBAC (sub_18007BBAC.c)
 */

__int64 *__fastcall sub_18007BFD8(__int64 *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_18007BBAC();
  return a1;
}
