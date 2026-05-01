/*
 * XREFs of sub_18000BDC4 @ 0x18000BDC4
 * Callers:
 *     sub_180013F04 @ 0x180013F04 (sub_180013F04.c)
 * Callees:
 *     <none>
 */

_BOOL8 sub_18000BDC4()
{
  _DWORD SystemInformation[2]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD *v2; // [rsp+28h] [rbp-50h]
  int v3; // [rsp+30h] [rbp-48h]
  _DWORD v4[16]; // [rsp+38h] [rbp-40h] BYREF

  SystemInformation[0] = 1;
  SystemInformation[1] = 22;
  v3 = 48;
  memset(v4, 0, 48);
  v4[0] = 4;
  v2 = v4;
  return NtQuerySystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u, 0LL) >= 0;
}
