/*
 * XREFs of ?RmpSystemNotificationContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18008CACC
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800837C4 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpSystemNotificationContextRundown(struct _RM_SERVICE_GLOBALS *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx

  v2 = (void *)*((_QWORD *)a1 + 72);
  if ( v2 )
    PowerSettingUnregisterNotification(v2);
  v3 = (void *)*((_QWORD *)a1 + 73);
  if ( v3 )
    PowerSettingUnregisterNotification(v3);
  v4 = *((_QWORD *)a1 + 75);
  if ( v4 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v4);
  v5 = *((_QWORD *)a1 + 76);
  if ( v5 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v5);
  v6 = *((_QWORD *)a1 + 77);
  if ( v6 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v6);
  v7 = (void *)*((_QWORD *)a1 + 79);
  if ( v7 )
    NtClose(v7);
}
