/*
 * XREFs of EtwReplyNotification @ 0x18005F080
 * Callers:
 *     EtwDeliverDataBlock @ 0x18005E7E0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A4900 (NtTraceControl.c)
 */

ULONG __cdecl EtwReplyNotification(PETW_NOTIFICATION_HEADER Notification)
{
  ULONG v1; // ebx
  NTSTATUS v2; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = NtTraceControl(EtwSendReplyDataBlock, Notification, Notification->NotificationSize, 0LL, 0, &ReturnLength);
  if ( v2 )
    return RtlNtStatusToDosError(v2);
  return v1;
}
