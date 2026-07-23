/*
 * XREFs of sub_14093267C @ 0x14093267C
 * Callers:
 *     sub_1405E33F8 @ 0x1405E33F8 (sub_1405E33F8.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A108C @ 0x1403A108C (sub_1403A108C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14093267C(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  __int64 v7; // r14
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // ebx
  __int64 *v12[10]; // [rsp+28h] [rbp-99h] BYREF
  _QWORD v13[14]; // [rsp+78h] [rbp-49h] BYREF

  v7 = a3;
  v9 = a4;
  memset(v13, 0, 0x68uLL);
  memset(v12, 0, 0x48uLL);
  if ( !a5 || (result = sub_1403A108C((__int64)v12, a5, 0), (int)result >= 0) )
  {
    v13[6] = v12[7];
    v13[1] = a1;
    v13[2] = a2;
    v13[3] = v7;
    v13[4] = v9;
    v13[5] = a5;
    v11 = sub_140358A20(2u, 47, 0, (__int64)v13);
    if ( a5 )
      sub_1403A0EB4(v12);
    if ( v11 >= 0 )
      *a6 = v13[2];
    return (unsigned int)v11;
  }
  return result;
}
