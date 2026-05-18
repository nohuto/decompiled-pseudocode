/*
 * XREFs of sub_18005C5EC @ 0x18005C5EC
 * Callers:
 *     sub_18009EC10 @ 0x18009EC10 (sub_18009EC10.c)
 *     sub_1800A0D7C @ 0x1800A0D7C (sub_1800A0D7C.c)
 * Callees:
 *     sub_18005C610 @ 0x18005C610 (sub_18005C610.c)
 */

__int64 __fastcall sub_18005C5EC(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a1 + 4 * a2;
  sub_18005C610(a1, v2);
  return v2;
}
