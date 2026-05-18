/*
 * XREFs of sub_18007454C @ 0x18007454C
 * Callers:
 *     sub_180074358 @ 0x180074358 (sub_180074358.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180074510 @ 0x180074510 (sub_180074510.c)
 */

unsigned __int64 __fastcall sub_18007454C(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    sub_180011B80();
  v3 = sub_180074510(a1, a2);
  if ( *a1 )
  {
    sub_1800100E8((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return sub_1800744CC(a1, v3);
}
