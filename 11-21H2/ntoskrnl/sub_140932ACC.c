/*
 * XREFs of sub_140932ACC @ 0x140932ACC
 * Callers:
 *     sub_1405A5DF0 @ 0x1405A5DF0 (sub_1405A5DF0.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140932ACC(int a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[2] = *a2;
  LODWORD(v5[1]) = a1;
  result = sub_140358A20(2u, 226, 0, (__int64)v5);
  if ( (int)result >= 0 )
    *a2 = v5[2];
  return result;
}
