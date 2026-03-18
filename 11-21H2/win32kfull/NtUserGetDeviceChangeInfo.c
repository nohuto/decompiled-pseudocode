/*
 * XREFs of NtUserGetDeviceChangeInfo @ 0x1C01F3E60
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetDeviceChangeInfo @ 0x1C01D941C (xxxGetDeviceChangeInfo.c)
 */

__int64 NtUserGetDeviceChangeInfo()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = xxxGetDeviceChangeInfo(v1, v0);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
