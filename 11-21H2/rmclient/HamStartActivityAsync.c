/*
 * XREFs of HamStartActivityAsync @ 0x180005780
 * Callers:
 *     ?StartAsyncForProcess@HamActivityWrapper@@QEAAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_START_TYPE@@@Z @ 0x18001C624 (-StartAsyncForProcess@HamActivityWrapper@@QEAAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamStartActivityAsync(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 7u, 0LL, *a1, a2, a3, a4);
}
