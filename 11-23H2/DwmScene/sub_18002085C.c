/*
 * XREFs of sub_18002085C @ 0x18002085C
 * Callers:
 *     sub_180020800 @ 0x180020800 (sub_180020800.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800207C8 @ 0x1800207C8 (sub_1800207C8.c)
 */

void *__fastcall sub_18002085C(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 152);
  sub_1800207C8(a1 - 152);
  if ( (a2 & 1) != 0 )
    sub_18000B988(v2);
  return v2;
}
