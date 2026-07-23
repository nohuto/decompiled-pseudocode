/*
 * XREFs of sub_14024FB60 @ 0x14024FB60
 * Callers:
 *     sub_1406D4DF0 @ 0x1406D4DF0 (sub_1406D4DF0.c)
 *     sub_1406D4EFC @ 0x1406D4EFC (sub_1406D4EFC.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14024FB60(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = sub_1403614FC(qword_140C474D8);
  if ( result )
  {
    sub_14042A5E0(a1, v3);
    return sub_1402AD030(qword_140C474D8 + 64);
  }
  return result;
}
