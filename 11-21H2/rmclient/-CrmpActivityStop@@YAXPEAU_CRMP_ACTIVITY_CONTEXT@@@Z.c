/*
 * XREFs of ?CrmpActivityStop@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180004E50
 * Callers:
 *     CrmActivityStop @ 0x180004DB0 (CrmActivityStop.c)
 * Callees:
 *     <none>
 */

void __fastcall CrmpActivityStop(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  NdrClientCall3(
    (MIDL_STUBLESS_PROXY_INFO *)&stru_1800216E0,
    7u,
    0LL,
    *((_QWORD *)a1 + 1),
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL));
}
