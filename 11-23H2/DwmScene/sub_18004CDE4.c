/*
 * XREFs of sub_18004CDE4 @ 0x18004CDE4
 * Callers:
 *     sub_18004A620 @ 0x18004A620 (sub_18004A620.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18002AF84 @ 0x18002AF84 (sub_18002AF84.c)
 *     sub_18004A788 @ 0x18004A788 (sub_18004A788.c)
 *     sub_18004CD10 @ 0x18004CD10 (sub_18004CD10.c)
 */

__int64 __fastcall sub_18004CDE4(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 result; // rax

  if ( a2 > 0x2E8BA2E8BA2E8BALL )
    sub_180011B80();
  v3 = sub_18004CD10(a1, a2);
  if ( *a1 )
  {
    sub_18004A788(*a1, a1[1]);
    sub_1800100E8((void *)*a1, 8 * ((a1[2] - *a1) >> 3));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  v4 = sub_18002AF84(v3);
  result = sub_18001090C(v4);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 88 * v3;
  return result;
}
