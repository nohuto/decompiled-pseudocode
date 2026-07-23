/*
 * XREFs of sub_1409E8BA0 @ 0x1409E8BA0
 * Callers:
 *     sub_140747D68 @ 0x140747D68 (sub_140747D68.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 */

NTSTATUS __fastcall sub_1409E8BA0(_DWORD *a1)
{
  NTSTATUS result; // eax
  ULONG v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 8LL;
  v3 = 0;
  result = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v4, 8u, &v3);
  if ( result >= 0 )
    *a1 = HIDWORD(v4);
  return result;
}
