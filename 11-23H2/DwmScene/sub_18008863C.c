/*
 * XREFs of sub_18008863C @ 0x18008863C
 * Callers:
 *     sub_180088DF8 @ 0x180088DF8 (sub_180088DF8.c)
 *     sub_18008B478 @ 0x18008B478 (sub_18008B478.c)
 * Callees:
 *     sub_180088934 @ 0x180088934 (sub_180088934.c)
 */

__int64 *__fastcall sub_18008863C(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      sub_180088934();
  }
  return a1;
}
