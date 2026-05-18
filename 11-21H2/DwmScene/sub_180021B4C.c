/*
 * XREFs of sub_180021B4C @ 0x180021B4C
 * Callers:
 *     sub_180021AF0 @ 0x180021AF0 (sub_180021AF0.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180021A6C @ 0x180021A6C (sub_180021A6C.c)
 */

void *__fastcall sub_180021B4C(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 152);
  sub_180021A6C(a1 - 152);
  if ( (a2 & 1) != 0 )
    sub_18000B998(v2);
  return v2;
}
