/*
 * XREFs of sub_1C007A184 @ 0x1C007A184
 * Callers:
 *     sub_1C005A188 @ 0x1C005A188 (sub_1C005A188.c)
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007BD64 @ 0x1C007BD64 (sub_1C007BD64.c)
 */

__int64 __fastcall sub_1C007A184(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v8; // rdx
  int v9; // ebx
  int v10; // r9d
  int v11; // r10d
  int v12; // eax

  v9 = sub_1C007B2F4(a1);
  if ( v9 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x2Cu, (__int64)&unk_1C008B3A0);
      return (unsigned int)-2147483631;
    }
    else
    {
      v12 = sub_1C007BD64(a1, v8, v11, v10, a5, a6);
      v9 = v12;
      if ( v12 < 0 )
        v9 = sub_1C007B340(a1, a2, (unsigned int)v12);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
  {
    sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x2Bu, (__int64)&unk_1C008B3A0, v9);
  }
  return (unsigned int)v9;
}
