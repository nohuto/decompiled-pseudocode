/*
 * XREFs of sub_140932778 @ 0x140932778
 * Callers:
 *     sub_14097A714 @ 0x14097A714 (sub_14097A714.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140932778(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _MDL *a5,
        ULONG a6,
        _BYTE *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  __int64 result; // rax
  int v13; // ebx
  __int64 *v15[10]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v16[14]; // [rsp+98h] [rbp-70h] BYREF

  memset(v16, 0, 0x68uLL);
  memset(v15, 0, 0x48uLL);
  result = sub_1403A0F08((__int64)v15, a5, a6, 0, 0);
  if ( (int)result >= 0 )
  {
    v16[1] = a1;
    v16[5] = v15[0];
    v16[6] = v15[7];
    v16[2] = a2;
    v16[3] = a4;
    v16[4] = a3;
    v13 = sub_140358A20(2u, 48, 0, (__int64)v16);
    sub_1403A0EB4(v15);
    if ( v13 >= 0 )
    {
      if ( a7 )
        *a7 = v16[2];
      if ( a8 )
        *a8 = v16[3];
      if ( a9 )
        *a9 = v16[4];
    }
    return (unsigned int)v13;
  }
  return result;
}
