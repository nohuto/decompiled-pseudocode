/*
 * XREFs of sub_14054FDF0 @ 0x14054FDF0
 * Callers:
 *     sub_14054F814 @ 0x14054F814 (sub_14054F814.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054FDF0(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a2;
  v4 = a3;
  v5 = a1;
  memset(v7, 0, 0x68uLL);
  v7[1] = v5;
  v7[2] = v3;
  v7[3] = v4;
  return sub_140358A20(2u, 56, 0, (__int64)v7);
}
