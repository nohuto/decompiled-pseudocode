/*
 * XREFs of sub_1C007AB88 @ 0x1C007AB88
 * Callers:
 *     sub_1C005B9F4 @ 0x1C005B9F4 (sub_1C005B9F4.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007C648 @ 0x1C007C648 (sub_1C007C648.c)
 *     sub_1C007F44C @ 0x1C007F44C (sub_1C007F44C.c)
 */

__int64 __fastcall sub_1C007AB88(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v8; // r14
  __int64 v9; // rdx
  int v10; // ebx
  __int64 *v11; // r10
  __int64 *v12; // r9
  int v13; // r9d
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF

  v16 = 0LL;
  v8 = a3;
  v10 = sub_1C007B2F4(a1);
  if ( v10 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 28), 1, 0) == 1 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x2Eu, (__int64)&unk_1C008B3A0);
      return (unsigned int)-2147483631;
    }
    else
    {
      v12 = &v16;
      if ( v11 )
        v12 = v11;
      v10 = sub_1C007F44C(a1, v9, v8 + 0x900030001LL, v12);
      if ( v10 >= 0 )
      {
        v14 = sub_1C007C648(a1, a2, v8, v13, a5, a6);
        v10 = v14;
        if ( v14 < 0 )
          v10 = sub_1C007B340(a1, a2, (unsigned int)v14);
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
  {
    sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x2Du, (__int64)&unk_1C008B3A0, v10);
  }
  return (unsigned int)v10;
}
