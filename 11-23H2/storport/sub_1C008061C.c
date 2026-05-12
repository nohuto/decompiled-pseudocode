/*
 * XREFs of sub_1C008061C @ 0x1C008061C
 * Callers:
 *     sub_1C007FA90 @ 0x1C007FA90 (sub_1C007FA90.c)
 * Callees:
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C0080710 @ 0x1C0080710 (sub_1C0080710.c)
 */

__int64 __fastcall sub_1C008061C(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  int v3; // r9d
  int v4; // r9d
  int v6; // [rsp+20h] [rbp-18h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v1 = a1 + 56;
  v2 = sub_1C0080710(a1 + 56, &v7);
  if ( v2 >= 0 )
  {
    v3 = *(_DWORD *)(v7 + 8);
    if ( v3 != 2 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x16u, (__int64)&unk_1C008B728, v3);
      return (unsigned int)-1073741435;
    }
    v2 = sub_1C0080710(v1, &v7);
    if ( v2 >= 0 )
    {
      v4 = *(_DWORD *)(v7 + 8);
      if ( (unsigned int)(v4 - 7) > 7 || *(_DWORD *)(v7 + 12) > 1u )
      {
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        {
          v6 = *(_DWORD *)(v7 + 12);
          sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0x17u, (__int64)&unk_1C008B728, v4, v6);
        }
        return (unsigned int)-1073741435;
      }
      if ( *(_QWORD *)(v7 + 16) == 1LL )
        return (unsigned int)-1073741297;
    }
  }
  return (unsigned int)v2;
}
