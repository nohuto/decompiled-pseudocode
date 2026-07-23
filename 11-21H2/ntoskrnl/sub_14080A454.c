/*
 * XREFs of sub_14080A454 @ 0x14080A454
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     sub_1407EF098 @ 0x1407EF098 (sub_1407EF098.c)
 *     sub_1407EF120 @ 0x1407EF120 (sub_1407EF120.c)
 */

char sub_14080A454()
{
  char v0; // bl

  v0 = 1;
  sub_1407EF098(1);
  if ( !byte_140C1F3A1 || byte_140C1F3A2 || dword_140C1F3B8 == -1 )
    v0 = 0;
  sub_1407EF120();
  return v0;
}
