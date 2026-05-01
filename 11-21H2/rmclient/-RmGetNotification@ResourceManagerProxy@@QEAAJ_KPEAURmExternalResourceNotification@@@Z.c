/*
 * XREFs of ?RmGetNotification@ResourceManagerProxy@@QEAAJ_KPEAURmExternalResourceNotification@@@Z @ 0x18001BF54
 * Callers:
 *     RmGetNotification @ 0x18001C240 (RmGetNotification.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmGetNotification(
        ResourceManagerProxy *this,
        __int64 a2,
        struct RmExternalResourceNotification *a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021A58, 7u, 0LL, a2, a3);
}
