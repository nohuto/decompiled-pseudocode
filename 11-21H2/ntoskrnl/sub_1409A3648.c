/*
 * XREFs of sub_1409A3648 @ 0x1409A3648
 * Callers:
 *     sub_1409A33CC @ 0x1409A33CC (sub_1409A33CC.c)
 *     sub_1409A371C @ 0x1409A371C (sub_1409A371C.c)
 *     sub_1409A4E68 @ 0x1409A4E68 (sub_1409A4E68.c)
 *     sub_1409A6CB4 @ 0x1409A6CB4 (sub_1409A6CB4.c)
 * Callees:
 *     sub_1409A3A54 @ 0x1409A3A54 (sub_1409A3A54.c)
 *     sub_1409A3C10 @ 0x1409A3C10 (sub_1409A3C10.c)
 *     sub_1409A4D70 @ 0x1409A4D70 (sub_1409A4D70.c)
 *     sub_1409A8D70 @ 0x1409A8D70 (sub_1409A8D70.c)
 *     sub_1409AA978 @ 0x1409AA978 (sub_1409AA978.c)
 *     sub_1409AAA90 @ 0x1409AAA90 (sub_1409AAA90.c)
 */

__int64 __fastcall sub_1409A3648(__int64 a1, unsigned int *a2, char a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // rcx

  v8 = a1;
  if ( (a2[9] & 8) != 0 )
  {
    if ( !a3 || a4 != 1 || !(unsigned __int8)sub_1409A3C10(a2) )
    {
      LOBYTE(a1) = a3;
      return sub_1409A8D70(a1, a4, a5);
    }
    LOBYTE(v9) = a4;
    sub_1409A3A54(v8, a2, v9);
  }
  v10 = a2[7];
  if ( a3 )
    sub_1409AAA90(v10, a4, a5);
  else
    sub_1409AA978(v10, a4, a5);
  a2[14] = a4;
  a2[9] |= 4u;
  a2[13] = 2 - (a3 != 0);
  return sub_1409A4D70(v8, 2LL);
}
