/*
 * XREFs of sub_1C007A098 @ 0x1C007A098
 * Callers:
 *     sub_1C0058FA8 @ 0x1C0058FA8 (sub_1C0058FA8.c)
 *     sub_1C00594D4 @ 0x1C00594D4 (sub_1C00594D4.c)
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007BC8C @ 0x1C007BC8C (sub_1C007BC8C.c)
 */

__int64 __fastcall sub_1C007A098(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  unsigned int v6; // r10d
  int v7; // eax

  v5 = sub_1C007B2F4(a1);
  if ( v5 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 28), 1, 0) == 1 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x2Au, (__int64)&unk_1C008B3A0);
      return (unsigned int)-2147483631;
    }
    else
    {
      v7 = sub_1C007BC8C(a1, v4, v6);
      v5 = v7;
      if ( v7 < 0 )
        v5 = sub_1C007B340(a1, a2, (unsigned int)v7);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
  {
    sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x29u, (__int64)&unk_1C008B3A0, v5);
  }
  return (unsigned int)v5;
}
