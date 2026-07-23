/*
 * XREFs of sub_1409A3E2C @ 0x1409A3E2C
 * Callers:
 *     sub_1409A3CF4 @ 0x1409A3CF4 (sub_1409A3CF4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1409A3E2C(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  if ( a1 )
  {
    if ( a1 <= a2 )
      return 1;
    *a3 = a1;
  }
  return 0;
}
