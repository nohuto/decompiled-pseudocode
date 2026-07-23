/*
 * XREFs of sub_14054A2E0 @ 0x14054A2E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054A3D8 @ 0x14054A3D8 (sub_14054A3D8.c)
 */

__int64 __fastcall sub_14054A2E0(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v7; // [rsp+20h] [rbp-1A8h]
  _QWORD v8[52]; // [rsp+28h] [rbp-1A0h] BYREF

  if ( ValueLength != 4 || !Value )
    return 3221225485LL;
  LODWORD(v7) = (_DWORD)Context;
  HIDWORD(v7) = *Value;
  memset(v8, 0, 0x194uLL);
  v8[1] = v7;
  LODWORD(v8[0]) = 5;
  return sub_14054A3D8(v8, v4, v5);
}
