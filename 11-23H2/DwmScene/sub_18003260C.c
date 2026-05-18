/*
 * XREFs of sub_18003260C @ 0x18003260C
 * Callers:
 *     sub_180032230 @ 0x180032230 (sub_180032230.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800321F8 @ 0x1800321F8 (sub_1800321F8.c)
 */

void *__fastcall sub_18003260C(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 152);
  sub_1800321F8(a1 - 152);
  if ( (a2 & 1) != 0 )
    sub_18000B988(v2);
  return v2;
}
