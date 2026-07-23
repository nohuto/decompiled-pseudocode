/*
 * XREFs of sub_140933454 @ 0x140933454
 * Callers:
 *     sub_1405A216C @ 0x1405A216C (sub_1405A216C.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140933454(__int64 a1, struct _MDL *a2, int a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 *v8[10]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v9[14]; // [rsp+80h] [rbp-88h] BYREF

  memset(v9, 0, 0x68uLL);
  memset(v8, 0, 0x48uLL);
  if ( (((unsigned int)(24 * a3) + ((unsigned __int16)a2 & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  result = sub_1403A0F08((__int64)v8, a2, 24 * a3, 0, 0);
  if ( (int)result >= 0 )
  {
    v9[1] = *(_QWORD *)(a1 + 48);
    v9[2] = v8[0];
    v9[3] = v8[7];
    v7 = sub_140358A20(2u, 223, 0, (__int64)v9);
    sub_1403A0EB4(v8);
    return v7;
  }
  return result;
}
