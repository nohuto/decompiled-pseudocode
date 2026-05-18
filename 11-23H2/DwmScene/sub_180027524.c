/*
 * XREFs of sub_180027524 @ 0x180027524
 * Callers:
 *     sub_18005E754 @ 0x18005E754 (sub_18005E754.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001E9F4 @ 0x18001E9F4 (sub_18001E9F4.c)
 */

__int64 __fastcall sub_180027524(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax

  v4 = sub_18001E9F4(a2);
  result = sub_18001090C(v4);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 32 * a2;
  return result;
}
