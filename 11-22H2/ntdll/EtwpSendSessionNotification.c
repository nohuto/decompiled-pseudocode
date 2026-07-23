/*
 * XREFs of EtwpSendSessionNotification @ 0x1800612EC
 * Callers:
 *     EtwpLogger @ 0x18005E0E0 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x18005E2FC (EtwpFlushActiveBuffers.c)
 *     EtwpStartUmLogger @ 0x18005EB9C (EtwpStartUmLogger.c)
 *     EtwpStopLoggerInstance @ 0x1800625A4 (EtwpStopLoggerInstance.c)
 * Callees:
 *     EtwDeliverDataBlock @ 0x180061670 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, int a2, int a3)
{
  GUID v6; // xmm1
  __int64 v8; // [rsp+20h] [rbp-39h]
  _ETW_NOTIFICATION_HEADER Notification; // [rsp+30h] [rbp-29h] BYREF
  int v10; // [rsp+78h] [rbp+1Fh]
  int v11; // [rsp+7Ch] [rbp+23h]
  __int64 v12; // [rsp+80h] [rbp+27h]

  v8 = *(unsigned __int16 *)(a1 + 20);
  BYTE3(v8) = 1;
  memset_thunk_772440563353939046(&Notification, 0, 0x60uLL);
  LODWORD(Notification.Reserved2) = -1;
  v6 = *(GUID *)(a1 + 44);
  Notification.NotificationSize = 96;
  Notification.DestinationGuid = SessionNotificationGuid;
  Notification.NotificationType = EtwNotificationTypeSession;
  Notification.SourceGuid = v6;
  v12 = v8;
  v10 = a2;
  v11 = a3;
  Notification.SourcePID = (ULONG)NtCurrentTeb()->ClientId.UniqueProcess;
  return EtwDeliverDataBlock(&Notification);
}
