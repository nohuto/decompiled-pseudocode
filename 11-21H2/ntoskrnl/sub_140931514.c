/*
 * XREFs of sub_140931514 @ 0x140931514
 * Callers:
 *     sub_1405A5990 @ 0x1405A5990 (sub_1405A5990.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140931514(__int64 a1, __int64 a2, int a3, _QWORD *a4, int a5, _QWORD *a6)
{
  __int64 result; // rax
  _QWORD v10[14]; // [rsp+20h] [rbp-98h] BYREF

  memset(v10, 0, 0x68uLL);
  v10[4] = *a4;
  v10[1] = a1;
  v10[2] = 0x100003000LL;
  LODWORD(v10[3]) = a3;
  result = sub_140358A20(2u, 224, 0, (__int64)v10);
  if ( (int)result >= 0 )
    *a6 = v10[2];
  return result;
}
