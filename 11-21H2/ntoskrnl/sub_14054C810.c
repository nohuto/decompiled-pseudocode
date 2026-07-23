/*
 * XREFs of sub_14054C810 @ 0x14054C810
 * Callers:
 *     sub_14054C1A4 @ 0x14054C1A4 (sub_14054C1A4.c)
 * Callees:
 *     sub_14054BFF0 @ 0x14054BFF0 (sub_14054BFF0.c)
 *     sub_14054C0E0 @ 0x14054C0E0 (sub_14054C0E0.c)
 */

char sub_14054C810()
{
  char v0; // bl
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1LL;
  v0 = 0;
  sub_14054C0E0(589831, 1uLL);
  sub_14054BFF0(589831, &v2);
  if ( (v2 & 0x4000000000000000LL) != 0 )
  {
    sub_14054C0E0(589831, 0x8000000000000001uLL);
    return 1;
  }
  return v0;
}
