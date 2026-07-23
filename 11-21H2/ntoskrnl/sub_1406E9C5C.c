/*
 * XREFs of sub_1406E9C5C @ 0x1406E9C5C
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 * Callees:
 *     sub_140689BB8 @ 0x140689BB8 (sub_140689BB8.c)
 *     sub_140689DAC @ 0x140689DAC (sub_140689DAC.c)
 *     sub_14068EC28 @ 0x14068EC28 (sub_14068EC28.c)
 */

__int64 __fastcall sub_1406E9C5C(unsigned int *a1)
{
  unsigned int v2; // eax
  __int64 v3; // r11
  __int64 result; // rax
  __int64 v5; // r11
  __int64 v6; // r11
  unsigned int v7; // edx

  if ( a1[42] == 1 )
  {
    sub_140689DAC(1);
    result = sub_140689BB8(a1);
    if ( *(_QWORD *)&a1[2 * v6 + 452] <= (unsigned __int64)(unsigned int)result )
      return result;
    v7 = 1;
    return sub_14068EC28((__int64)a1, v7, 0LL, 0);
  }
  sub_140689DAC(4);
  v2 = sub_140689BB8(a1);
  if ( *(_QWORD *)&a1[2 * v3 + 452] > (unsigned __int64)v2 )
    sub_14068EC28((__int64)a1, 4u, 0LL, 0);
  sub_140689DAC(5);
  result = sub_140689BB8(a1);
  if ( *(_QWORD *)&a1[2 * v5 + 452] > (unsigned __int64)(unsigned int)result )
  {
    v7 = 5;
    return sub_14068EC28((__int64)a1, v7, 0LL, 0);
  }
  return result;
}
