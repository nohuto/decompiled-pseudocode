/*
 * XREFs of sub_14054FE7C @ 0x14054FE7C
 * Callers:
 *     sub_14054F814 @ 0x14054F814 (sub_14054F814.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054FE7C(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 result; // rax
  _QWORD v10[14]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v10, 0, 0x68uLL);
  result = sub_140358A20(2u, 58, 0, (__int64)v10);
  if ( (int)result >= 0 )
  {
    *a1 = v10[2];
    *a2 = v10[3];
    *a3 = v10[4];
    *a4 = v10[5];
    *a5 = v10[6];
  }
  return result;
}
