/*
 * XREFs of sub_140551F2C @ 0x140551F2C
 * Callers:
 *     sub_140579060 @ 0x140579060 (sub_140579060.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

bool sub_140551F2C()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !qword_140D00A80 || !qword_140C54E00 )
    return 0;
  sub_14042A5E0(6LL, &v1);
  return v1 >= 0;
}
