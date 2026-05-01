/*
 * XREFs of ?CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180004DC0
 * Callers:
 *     CrmActivityFree @ 0x180004D70 (CrmActivityFree.c)
 *     CrmActivityAllocate @ 0x180004EB0 (CrmActivityAllocate.c)
 * Callees:
 *     ?CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x1800050B8 (-CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 */

void __fastcall CrmpActivityContextCleanup(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  void *v2; // rcx

  CrmpActivityWindowClosedReasonUnsubscribe(a1);
  if ( *((_QWORD *)a1 + 6) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  v2 = (void *)*((_QWORD *)a1 + 8);
  if ( v2 )
    CloseHandle(v2);
  if ( *((_QWORD *)a1 + 1) != -1LL )
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800216E0, 4u, 0LL);
}
