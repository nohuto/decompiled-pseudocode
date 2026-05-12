/*
 * XREFs of sub_1C007A7F0 @ 0x1C007A7F0
 * Callers:
 *     sub_1C0058378 @ 0x1C0058378 (sub_1C0058378.c)
 *     sub_1C00586DC @ 0x1C00586DC (sub_1C00586DC.c)
 *     sub_1C0058FA8 @ 0x1C0058FA8 (sub_1C0058FA8.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1C005B568 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007C114 @ 0x1C007C114 (sub_1C007C114.c)
 *     sub_1C007F44C @ 0x1C007F44C (sub_1C007F44C.c)
 */

__int64 __fastcall sub_1C007A7F0(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, char a6, char a7, __int64 a8)
{
  __int64 v10; // r12
  __int64 v12; // rdx
  int v13; // ebx
  __int64 *v14; // r10
  __int64 *v15; // r9
  __int64 v17; // [rsp+40h] [rbp-48h] BYREF

  v10 = a3;
  v17 = 0LL;
  if ( a3 > *(_DWORD *)(a1 + 48) || (unsigned int)(a4 - 1) > 2 || (unsigned int)(a5 - 1) > 2 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x1Du, (__int64)&unk_1C008B3A0);
    return (unsigned int)-1073741811;
  }
  else
  {
    v13 = sub_1C007B2F4(a1);
    if ( v13 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x1Eu, (__int64)&unk_1C008B3A0, v13);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 28), 1, 0) == 1 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x1Fu, (__int64)&unk_1C008B3A0);
      return (unsigned int)-2147483631;
    }
    else
    {
      v15 = &v17;
      if ( v14 )
        v15 = v14;
      v13 = sub_1C007F44C(a1, v12, v10 + 0x900030001LL, v15);
      if ( v13 < 0 || (v13 = sub_1C007C114(a1, a2, v10, a4, a5, a6, a7, a8), v13 < 0) )
        v13 = sub_1C007B340(a1, a2, (unsigned int)v13);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return (unsigned int)v13;
}
