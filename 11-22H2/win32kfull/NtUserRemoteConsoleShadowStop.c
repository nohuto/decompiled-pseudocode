/*
 * XREFs of NtUserRemoteConsoleShadowStop @ 0x1C01D9AC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteConsoleShadowStop @ 0x1C0203D54 (xxxRemoteConsoleShadowStop.c)
 */

__int64 NtUserRemoteConsoleShadowStop()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 0LL);
  v0 = xxxRemoteConsoleShadowStop();
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
