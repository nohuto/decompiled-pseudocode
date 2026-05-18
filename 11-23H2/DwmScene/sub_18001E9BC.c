/*
 * XREFs of sub_18001E9BC @ 0x18001E9BC
 * Callers:
 *     sub_18001EF38 @ 0x18001EF38 (sub_18001EF38.c)
 *     sub_18001F188 @ 0x18001F188 (sub_18001F188.c)
 *     sub_18001F62C @ 0x18001F62C (sub_18001F62C.c)
 *     sub_18001F750 @ 0x18001F750 (sub_18001F750.c)
 *     sub_18002509C @ 0x18002509C (sub_18002509C.c)
 *     sub_1800587AC @ 0x1800587AC (sub_1800587AC.c)
 *     sub_18005E754 @ 0x18005E754 (sub_18005E754.c)
 *     sub_1800DD780 @ 0x1800DD780 (sub_1800DD780.c)
 *     sub_1800DDD4C @ 0x1800DDD4C (sub_1800DDD4C.c)
 * Callees:
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 */

__int64 __fastcall sub_18001E9BC(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180013348(v3);
      v3 += 32LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
