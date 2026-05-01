/*
 * XREFs of sub_180013914 @ 0x180013914
 * Callers:
 *     sub_180013F04 @ 0x180013F04 (sub_180013F04.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180013914(__int64 a1)
{
  __int64 v1; // rax
  _DWORD SystemInformation[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v4; // [rsp+28h] [rbp-28h]
  __int64 v5; // [rsp+30h] [rbp-20h]
  _QWORD v6[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v7; // [rsp+48h] [rbp-8h]

  v5 = 24LL;
  v7 = 0LL;
  v4 = v6;
  v1 = *(_QWORD *)(a1 + 40);
  SystemInformation[0] = 1;
  SystemInformation[1] = 23;
  v6[0] = 1LL;
  v6[1] = v1;
  NtQuerySystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u, 0LL);
  return v7 & 1;
}
