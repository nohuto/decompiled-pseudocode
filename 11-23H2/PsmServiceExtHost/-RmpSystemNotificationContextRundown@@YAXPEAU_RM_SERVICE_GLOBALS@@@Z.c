/*
 * XREFs of ?RmpSystemNotificationContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18008A42C
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180082054 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpSystemNotificationContextRundown(struct _RM_SERVICE_GLOBALS *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)a1 + 72);
  if ( v2 )
    PowerSettingUnregisterNotification(v2);
  v3 = (void *)*((_QWORD *)a1 + 73);
  if ( v3 )
    PowerSettingUnregisterNotification(v3);
  if ( *((_QWORD *)a1 + 75) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 76) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 77) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  v4 = (void *)*((_QWORD *)a1 + 79);
  if ( v4 )
    NtClose(v4);
}
