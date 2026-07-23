/*
 * XREFs of sub_140931B88 @ 0x140931B88
 * Callers:
 *     sub_1405A9744 @ 0x1405A9744 (sub_1405A9744.c)
 *     sub_1407BEBF0 @ 0x1407BEBF0 (sub_1407BEBF0.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140931B88(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, unsigned int a5, _DWORD *a6)
{
  __int64 result; // rax
  _QWORD v11[14]; // [rsp+20h] [rbp-98h] BYREF

  memset(v11, 0, 0x68uLL);
  v11[1] = *(_QWORD *)(a1 + 992);
  v11[3] = *a3;
  v11[4] = *a4;
  v11[5] = a5;
  v11[2] = a2;
  result = sub_140358A20(2u, 39, 0, (__int64)v11);
  if ( (int)result >= 0 )
  {
    *a3 = v11[3];
    *a4 = v11[4];
    *a6 = v11[5];
  }
  return result;
}
