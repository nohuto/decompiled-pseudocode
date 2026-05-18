/*
 * XREFs of sub_18001B57C @ 0x18001B57C
 * Callers:
 *     sub_18001B544 @ 0x18001B544 (sub_18001B544.c)
 *     sub_18001B628 @ 0x18001B628 (sub_18001B628.c)
 *     sub_18001F6A8 @ 0x18001F6A8 (sub_18001F6A8.c)
 *     sub_1800471D8 @ 0x1800471D8 (sub_1800471D8.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180017028 @ 0x180017028 (sub_180017028.c)
 */

unsigned __int64 __fastcall sub_18001B57C(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  v4 = sub_180017028(a2);
  v5 = sub_18001090C(v4);
  *a1 = v5;
  a1[1] = v5;
  result = v5 + 4 * a2;
  a1[2] = result;
  return result;
}
