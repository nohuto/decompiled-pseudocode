/*
 * XREFs of sub_1409A3A54 @ 0x1409A3A54
 * Callers:
 *     sub_1409A3648 @ 0x1409A3648 (sub_1409A3648.c)
 *     sub_1409A371C @ 0x1409A371C (sub_1409A371C.c)
 * Callees:
 *     sub_1409A4D70 @ 0x1409A4D70 (sub_1409A4D70.c)
 *     sub_1409A8780 @ 0x1409A8780 (sub_1409A8780.c)
 */

__int64 __fastcall sub_1409A3A54(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = a2[9];
  if ( (result & 8) != 0 )
  {
    v5 = a2[67];
    a2[9] = result & 0xFFFFFFB7 | 0x40;
    sub_1409A8780(v5, a2[68]);
    a2[9] |= 4u;
    return sub_1409A4D70(a1, 2LL);
  }
  return result;
}
