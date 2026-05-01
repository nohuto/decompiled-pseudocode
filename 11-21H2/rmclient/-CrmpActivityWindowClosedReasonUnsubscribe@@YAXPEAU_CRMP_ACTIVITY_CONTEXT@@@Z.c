/*
 * XREFs of ?CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x1800050B8
 * Callers:
 *     ?CrmpActivityWindowClosedReasonSubscribe@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@P6AXPEAX11@Z1@Z @ 0x180002A6C (-CrmpActivityWindowClosedReasonSubscribe@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@P6AXPEAX11@Z1@Z.c)
 *     ?CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180004DC0 (-CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 *     CrmActivityWindowClosedReasonUnsubscribe @ 0x18001E390 (CrmActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     <none>
 */

void __fastcall CrmpActivityWindowClosedReasonUnsubscribe(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  if ( *((_QWORD *)a1 + 12) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)a1 + 12) = 0LL;
  }
  if ( *((_DWORD *)a1 + 22) || *((_DWORD *)a1 + 23) )
  {
    NdrClientCall3(
      (MIDL_STUBLESS_PROXY_INFO *)&stru_1800216E0,
      9u,
      0LL,
      *((_QWORD *)a1 + 1),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL));
    *((_QWORD *)a1 + 11) = 0LL;
  }
}
