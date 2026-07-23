/*
 * XREFs of sub_1409B06C4 @ 0x1409B06C4
 * Callers:
 *     sub_1406FFA80 @ 0x1406FFA80 (sub_1406FFA80.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 */

NTSTATUS __fastcall sub_1409B06C4(_QWORD *a1)
{
  ULONG v1; // r8d
  NTSTATUS result; // eax
  int Buffer; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+54h] [rbp+Ch]
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  if ( !a1 )
  {
    Buffer = -1;
    v1 = 4;
    v4 = 0;
    return ZwUpdateWnfStateData(&stru_140037860, &Buffer, v1, 0LL, 0LL, 0, 0);
  }
  if ( !qword_140D3B140 )
  {
    v5 = 0LL;
    result = sub_1406FF880(a1, 0, 0, (int)sub_1409B0300, (__int64)&v5, 0);
    if ( v5 )
    {
      Buffer = 1;
      v1 = 8;
      v4 = *(_DWORD *)(v5 + 1088);
      qword_140D3B140 = (PVOID)v5;
      return ZwUpdateWnfStateData(&stru_140037860, &Buffer, v1, 0LL, 0LL, 0, 0);
    }
  }
  return result;
}
