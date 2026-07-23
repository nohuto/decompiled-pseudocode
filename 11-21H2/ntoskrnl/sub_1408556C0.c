/*
 * XREFs of sub_1408556C0 @ 0x1408556C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1408556F0 @ 0x1408556F0 (sub_1408556F0.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1408556C0(LPCGUID SettingGuid, PVOID Value, ULONG ValueLength, PVOID Context)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = (unsigned int)Context;
  sub_140A48330((_DWORD)SettingGuid);
  v5 = sub_1408556F0(0LL, v4);
  sub_140A47CF8(v7, v6);
  return v5;
}
