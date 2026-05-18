/*
 * XREFs of sub_1800744CC @ 0x1800744CC
 * Callers:
 *     sub_18007454C @ 0x18007454C (sub_18007454C.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180017058 @ 0x180017058 (sub_180017058.c)
 */

unsigned __int64 __fastcall sub_1800744CC(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  v4 = sub_180017058(a2);
  v5 = sub_18001090C(v4);
  *a1 = v5;
  a1[1] = v5;
  result = v5 + 8 * a2;
  a1[2] = result;
  return result;
}
