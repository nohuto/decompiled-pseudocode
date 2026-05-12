/*
 * XREFs of sub_1C007A558 @ 0x1C007A558
 * Callers:
 *     sub_1C005B214 @ 0x1C005B214 (sub_1C005B214.c)
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007D8D4 @ 0x1C007D8D4 (sub_1C007D8D4.c)
 *     sub_1C007F44C @ 0x1C007F44C (sub_1C007F44C.c)
 */

__int64 __fastcall sub_1C007A558(__int64 a1, __int64 a2)
{
  int v2; // r9d
  int v5; // ebx
  __int64 v6; // rdx
  char v7; // r10
  __int64 v8; // r11

  v2 = *(_DWORD *)(a1 + 32);
  if ( v2 == 512 )
  {
    v5 = sub_1C007B2F4(a1);
    if ( v5 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x11u, (__int64)&unk_1C008B3A0, v5);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), 1, 0) == 1 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x12u, (__int64)&unk_1C008B3A0);
      return (unsigned int)-2147483631;
    }
    else
    {
      v5 = sub_1C007F44C(a1, v6, v7 != 0 ? 0x90001FF01LL : 0x900000006LL, v8);
      if ( v5 < 0 || (v5 = sub_1C007D8D4(a1, a2), v5 < 0) )
        v5 = sub_1C007B340(a1, a2, (unsigned int)v5);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x10u, (__int64)&unk_1C008B3A0, v2);
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v5;
}
