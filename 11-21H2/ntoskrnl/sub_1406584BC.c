/*
 * XREFs of sub_1406584BC @ 0x1406584BC
 * Callers:
 *     sub_140659320 @ 0x140659320 (sub_140659320.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1406584BC(unsigned int a1, ULONG a2, struct _MDL *a3)
{
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 *v8[10]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v9[14]; // [rsp+80h] [rbp-88h] BYREF

  v4 = a1;
  memset(v9, 0, 0x68uLL);
  memset(v8, 0, 0x48uLL);
  result = sub_1403A0F08((__int64)v8, a3, a2, 0, 0);
  if ( (int)result >= 0 )
  {
    v9[2] = v8[0];
    v9[3] = v8[7];
    v9[1] = v4;
    v7 = sub_140358A20(2u, 227, 0, (__int64)v9);
    sub_1403A0EB4(v8);
    return v7;
  }
  return result;
}
