/*
 * XREFs of sub_1C0079AD4 @ 0x1C0079AD4
 * Callers:
 *     sub_1C0058378 @ 0x1C0058378 (sub_1C0058378.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007BB50 @ 0x1C007BB50 (sub_1C007BB50.c)
 *     sub_1C007F44C @ 0x1C007F44C (sub_1C007F44C.c)
 */

__int64 __fastcall sub_1C0079AD4(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  int v9; // ebx
  __int64 *v10; // r10
  __int64 *v11; // r9
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF

  v13 = 0LL;
  if ( a3 && a5 )
  {
    v9 = sub_1C007B2F4(a1);
    if ( v9 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x21u, (__int64)&unk_1C008B3A0, v9);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x22u, (__int64)&unk_1C008B3A0);
      return (unsigned int)-2147483631;
    }
    else
    {
      v11 = &v13;
      if ( v10 )
        v11 = v10;
      v9 = sub_1C007F44C(a1, v8, 0x900010001LL, v11);
      if ( v9 < 0 || (v9 = sub_1C007BB50(a1, a2, a3, a5, v13), v9 < 0) )
        v9 = sub_1C007B340(a1, a2, (unsigned int)v9);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x20u, (__int64)&unk_1C008B3A0);
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
