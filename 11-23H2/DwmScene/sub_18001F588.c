/*
 * XREFs of sub_18001F588 @ 0x18001F588
 * Callers:
 *     sub_180054E24 @ 0x180054E24 (sub_180054E24.c)
 *     sub_180058B2C @ 0x180058B2C (sub_180058B2C.c)
 *     sub_18005E754 @ 0x18005E754 (sub_18005E754.c)
 *     sub_1800DD780 @ 0x1800DD780 (sub_1800DD780.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F588(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x7FFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 5;
  v4 = v3 >> 1;
  if ( v3 <= 0x7FFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
