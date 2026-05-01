/*
 * XREFs of ?SetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJ_KPEAH@Z @ 0x18001B514
 * Callers:
 *     ?TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z @ 0x18001B330 (-TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ModernResourceManagerProxy::SetMemoryUsageLimit(
        ModernResourceManagerProxy *this,
        __int64 a2,
        int *a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021A58, 1u, 0LL, *((_QWORD *)this + 2), a2, a3);
}
