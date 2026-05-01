/*
 * XREFs of HamQueryActivityPendDiagnostics @ 0x18001D550
 * Callers:
 *     ?WaitForStarted@HamActivityWrapper@@QEAAJK@Z @ 0x18001C714 (-WaitForStarted@HamActivityWrapper@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamQueryActivityPendDiagnostics(_QWORD *a1, __int64 a2, __int64 a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0xAu, 0LL, *a1, a2, a3);
}
