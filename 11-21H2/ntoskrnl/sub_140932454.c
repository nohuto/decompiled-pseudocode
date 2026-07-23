/*
 * XREFs of sub_140932454 @ 0x140932454
 * Callers:
 *     sub_1409B4318 @ 0x1409B4318 (sub_1409B4318.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140932454(__int64 a1, __int64 a2, struct _MDL *a3, ULONG a4, __int64 a5, __int64 a6, _DWORD *a7)
{
  __int64 result; // rax
  int v12; // ebx
  __int64 *v13[10]; // [rsp+30h] [rbp-B1h] BYREF
  _QWORD v14[14]; // [rsp+80h] [rbp-61h] BYREF

  memset(v14, 0, 0x68uLL);
  memset(v13, 0, 0x48uLL);
  result = sub_1403A0F08((__int64)v13, a3, a4, 0, 0);
  if ( (int)result >= 0 )
  {
    v14[3] = v13[0];
    v14[4] = v13[7];
    v14[5] = a5;
    v14[6] = a6;
    v14[1] = a1;
    v14[2] = a2;
    v12 = sub_140358A20(2u, 49, 0, (__int64)v14);
    if ( v12 >= 0 )
      *a7 = v14[2];
    sub_1403A0EB4(v13);
    return (unsigned int)v12;
  }
  return result;
}
