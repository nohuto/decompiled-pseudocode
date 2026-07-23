/*
 * XREFs of sub_14081E450 @ 0x14081E450
 * Callers:
 *     sub_14081E300 @ 0x14081E300 (sub_14081E300.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     sub_140AF6D7C @ 0x140AF6D7C (sub_140AF6D7C.c)
 */

NTSTATUS sub_14081E450()
{
  NTSTATUS result; // eax
  PVOID NotificationEntry; // [rsp+50h] [rbp+8h] BYREF

  NotificationEntry = 0LL;
  sub_140AF6D7C();
  KeInitializeEvent(&stru_140C4C160, SynchronizationEvent, 1u);
  result = IoRegisterPlugPlayNotification(
             EventCategoryDeviceInterfaceChange,
             1u,
             qword_140013350,
             qword_140C4C180,
             sub_140908CD0,
             0LL,
             &NotificationEntry);
  byte_140C54B88 = 1;
  return result;
}
