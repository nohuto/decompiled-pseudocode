/*
 * XREFs of sub_180085CCC @ 0x180085CCC
 * Callers:
 *     sub_180084078 @ 0x180084078 (sub_180084078.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180029054 @ 0x180029054 (sub_180029054.c)
 *     sub_180081650 @ 0x180081650 (sub_180081650.c)
 *     sub_18008390C @ 0x18008390C (sub_18008390C.c)
 */

unsigned __int64 __fastcall sub_180085CCC(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  if ( a2 > 0x666666666666666LL )
    sub_180011B80();
  v3 = sub_18008390C(a1, a2);
  if ( *a1 )
  {
    sub_180081650(*a1, a1[1]);
    sub_1800100E8((void *)*a1, 8 * ((a1[2] - *a1) >> 3));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  v4 = sub_180029054(v3);
  v5 = sub_18001090C(v4);
  *a1 = v5;
  a1[1] = v5;
  result = v5 + 40 * v3;
  a1[2] = result;
  return result;
}
