/*
 * XREFs of sub_1C007ACDC @ 0x1C007ACDC
 * Callers:
 *     sub_1C005B7F4 @ 0x1C005B7F4 (sub_1C005B7F4.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007E84C @ 0x1C007E84C (sub_1C007E84C.c)
 *     sub_1C007F44C @ 0x1C007F44C (sub_1C007F44C.c)
 */

__int64 __fastcall sub_1C007ACDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // rdx
  int v8; // ebx
  __int64 *v9; // r10
  __int64 v10; // r11
  __int64 *v11; // r9
  __int64 v12; // r14
  __int64 *v13; // r9
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF

  v15 = 0LL;
  v8 = sub_1C007B2F4(a1);
  if ( v8 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x26u, (__int64)&unk_1C008B3A0);
      return (unsigned int)-2147483631;
    }
    else
    {
      v11 = &v15;
      if ( v9 )
        v11 = v9;
      v12 = v10;
      v8 = sub_1C007F44C(a1, v7, v10 + 0x900030001LL, v11);
      if ( v8 < 0 )
        goto LABEL_16;
      v13 = &v15;
      if ( a5 )
        v13 = a5;
      v8 = sub_1C007E84C(a1, a2, v12 + 0xB00030001LL, v13, v15);
      if ( v8 < 0 )
LABEL_16:
        v8 = sub_1C007B340(a1, a2, (unsigned int)v8);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
  {
    sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x25u, (__int64)&unk_1C008B3A0, v8);
  }
  return (unsigned int)v8;
}
