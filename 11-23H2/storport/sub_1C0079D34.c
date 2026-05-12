/*
 * XREFs of sub_1C0079D34 @ 0x1C0079D34
 * Callers:
 *     sub_1C00580FC @ 0x1C00580FC (sub_1C00580FC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007D7E4 @ 0x1C007D7E4 (sub_1C007D7E4.c)
 *     sub_1C007F44C @ 0x1C007F44C (sub_1C007F44C.c)
 */

__int64 __fastcall sub_1C0079D34(__int64 a1, __int64 a2, char a3)
{
  int v3; // r9d
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 *v9; // r10
  __int64 *v10; // r9
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  v14 = 0LL;
  if ( v3 == 512 )
  {
    v7 = sub_1C007B2F4(a1);
    if ( v7 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x14u, (__int64)&unk_1C008B3A0, v7);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x15u, (__int64)&unk_1C008B3A0);
      return (unsigned int)-2147483631;
    }
    else
    {
      v10 = &v14;
      if ( v9 )
        v10 = v9;
      v7 = sub_1C007F44C(a1, v8, 0x900010001LL, v10);
      if ( v7 )
      {
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
          sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x16u, (__int64)&unk_1C008B3A0, v7);
      }
      else
      {
        LOBYTE(v11) = a3;
        v12 = sub_1C007D7E4(a1, a2, v11);
        v7 = v12;
        if ( v12 )
          v7 = sub_1C007B340(a1, a2, v12);
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x13u, (__int64)&unk_1C008B3A0, v3);
    return (unsigned int)-1073741637;
  }
  return v7;
}
