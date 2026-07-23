/*
 * XREFs of sub_140B2D9E4 @ 0x140B2D9E4
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 */

NTSTATUS (*sub_140B2D9E4())()
{
  NTSTATUS (*result)(); // rax
  PVOID NotificationEntry; // [rsp+50h] [rbp+10h] BYREF

  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    qword_140013380,
    qword_140C46250,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)sub_140858C40,
    (PVOID)1,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    &qword_140013370,
    qword_140C46250,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)sub_140858C40,
    (PVOID)2,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    (PVOID)&InterfaceClassGuid,
    qword_140C46250,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)sub_140858C40,
    (PVOID)3,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    qword_140013350,
    qword_140C46250,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)sub_140858C40,
    (PVOID)8,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    qword_140013340,
    qword_140C46250,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)sub_140858C40,
    (PVOID)9,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    1u,
    &qword_140013330,
    qword_140C46250,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)sub_14099D180,
    0LL,
    &NotificationEntry);
  stru_140C1F220.Parameter = 0LL;
  result = sub_14099D210;
  stru_140C1F220.List.Flink = 0LL;
  stru_140C1F220.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14099D210;
  return result;
}
