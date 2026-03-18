/*
 * XREFs of NtUserGetDeviceChangeInfo @ 0x1C01D1090
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetDeviceChangeInfo @ 0x1C01B2A4C (xxxGetDeviceChangeInfo.c)
 */

__int64 NtUserGetDeviceChangeInfo()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  EnterCrit(0LL, 0LL);
  v3 = xxxGetDeviceChangeInfo(v1, v0, v2);
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v3;
}
