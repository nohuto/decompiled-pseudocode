/*
 * XREFs of sub_18000A570 @ 0x18000A570
 * Callers:
 *     sub_180003FF0 @ 0x180003FF0 (sub_180003FF0.c)
 *     sub_1800049B0 @ 0x1800049B0 (sub_1800049B0.c)
 *     sub_180004B70 @ 0x180004B70 (sub_180004B70.c)
 *     sub_180018210 @ 0x180018210 (sub_180018210.c)
 *     sub_180018230 @ 0x180018230 (sub_180018230.c)
 *     sub_180018250 @ 0x180018250 (sub_180018250.c)
 *     sub_18001AB4C @ 0x18001AB4C (sub_18001AB4C.c)
 *     sub_18001BC8C @ 0x18001BC8C (sub_18001BC8C.c)
 *     sub_18001BE48 @ 0x18001BE48 (sub_18001BE48.c)
 * Callees:
 *     sub_180004C40 @ 0x180004C40 (sub_180004C40.c)
 */

volatile signed __int32 *__fastcall sub_18000A570(volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)sub_180004C40(result);
  }
  return result;
}
