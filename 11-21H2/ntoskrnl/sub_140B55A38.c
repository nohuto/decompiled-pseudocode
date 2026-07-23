/*
 * XREFs of sub_140B55A38 @ 0x140B55A38
 * Callers:
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IoUnregisterPlugPlayNotification @ 0x1406E78B0 (IoUnregisterPlugPlayNotification.c)
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 */

__int64 sub_140B55A38()
{
  NTSTATUS v0; // ebx
  PVOID NotificationEntry; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+58h] [rbp+10h] BYREF

  NotificationEntry = 0LL;
  stru_140C0DE20.Header.SignalState = 0;
  stru_140C0DE20.Header.WaitListHead.Blink = &stru_140C0DE20.Header.WaitListHead;
  stru_140C0DE20.Header.WaitListHead.Flink = &stru_140C0DE20.Header.WaitListHead;
  LOWORD(stru_140C0DE20.Header.Lock) = 1;
  stru_140C0DE20.Header.Size = 6;
  v0 = IoRegisterPlugPlayNotification(
         EventCategoryDeviceInterfaceChange,
         1u,
         qword_140047B28,
         qword_140C46250,
         (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)sub_140A344D0,
         0LL,
         &NotificationEntry);
  if ( v0 >= 0 )
  {
    Timeout.QuadPart = -100000000LL;
    v0 = KeWaitForSingleObject(&stru_140C0DE20, Executive, 0, 0, &Timeout);
    IoUnregisterPlugPlayNotification(NotificationEntry);
  }
  return (unsigned int)v0;
}
