/*
 * XREFs of sub_180051654 @ 0x180051654
 * Callers:
 *     sub_180051600 @ 0x180051600 (sub_180051600.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800515C4 @ 0x1800515C4 (sub_1800515C4.c)
 */

void *__fastcall sub_180051654(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 144);
  sub_1800515C4(a1 - 144);
  if ( (a2 & 1) != 0 )
    sub_18000B988(v2);
  return v2;
}
