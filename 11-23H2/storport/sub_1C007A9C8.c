/*
 * XREFs of sub_1C007A9C8 @ 0x1C007A9C8
 * Callers:
 *     sub_1C00586DC @ 0x1C00586DC (sub_1C00586DC.c)
 *     sub_1C0058FA8 @ 0x1C0058FA8 (sub_1C0058FA8.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007C52C @ 0x1C007C52C (sub_1C007C52C.c)
 *     sub_1C007F44C @ 0x1C007F44C (sub_1C007F44C.c)
 */

__int64 __fastcall sub_1C007A9C8(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r15
  __int64 v9; // rdx
  int v10; // ebx
  __int64 *v11; // r10
  char v12; // r11
  __int64 *v13; // r9
  __int64 v14; // r8
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF

  v7 = a3;
  v16 = 0LL;
  if ( a3 > *(_DWORD *)(a1 + 48) || !a6 || !a3 && (*(_QWORD *)(a6 + 8) || *(_QWORD *)(a6 + 16)) )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x17u, (__int64)&unk_1C008B3A0);
    return (unsigned int)-1073741811;
  }
  else
  {
    v10 = sub_1C007B2F4(a1);
    if ( v10 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x18u, (__int64)&unk_1C008B3A0, v10);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 28), 1, 0) == 1 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x19u, (__int64)&unk_1C008B3A0);
      return (unsigned int)-2147483631;
    }
    else
    {
      v13 = &v16;
      if ( v11 )
        v13 = v11;
      if ( v12 )
        v14 = 0x900010001LL;
      else
        v14 = v7 + 0x900030001LL;
      v10 = sub_1C007F44C(a1, v9, v14, v13);
      if ( v10 < 0 || (v10 = sub_1C007C52C(a1, a2, (unsigned int)v7, a6, v16), v10 < 0) )
        v10 = sub_1C007B340(a1, a2, (unsigned int)v10);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return (unsigned int)v10;
}
