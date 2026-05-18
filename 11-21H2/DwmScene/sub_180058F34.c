/*
 * XREFs of sub_180058F34 @ 0x180058F34
 * Callers:
 *     sub_180058EE0 @ 0x180058EE0 (sub_180058EE0.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180058E60 @ 0x180058E60 (sub_180058E60.c)
 */

void *__fastcall sub_180058F34(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 144);
  sub_180058E60(a1 - 144);
  if ( (a2 & 1) != 0 )
    sub_18000B998(v2);
  return v2;
}
