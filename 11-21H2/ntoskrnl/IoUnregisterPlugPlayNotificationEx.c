/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x1406E7890
 * Callers:
 *     sub_140997FD0 @ 0x140997FD0 (sub_140997FD0.c)
 * Callees:
 *     sub_14025AA04 @ 0x14025AA04 (sub_14025AA04.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return sub_14025AA04(NotificationEntry, 1);
}
