/*
 * XREFs of sub_18001F6A8 @ 0x18001F6A8
 * Callers:
 *     sub_18001E924 @ 0x18001E924 (sub_18001E924.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18001F54C @ 0x18001F54C (sub_18001F54C.c)
 */

unsigned __int64 __fastcall sub_18001F6A8(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180011B80();
  v3 = sub_18001F54C(a1, a2);
  if ( *a1 )
  {
    sub_1800100E8((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFFCuLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return sub_18001B57C(a1, v3);
}
