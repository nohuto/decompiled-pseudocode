/*
 * XREFs of ZwGetNotificationResourceManager @ 0x14041D760
 * Callers:
 *     sub_140620D40 @ 0x140620D40 (sub_140620D40.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwGetNotificationResourceManager(
        HANDLE ResourceManagerHandle,
        PTRANSACTION_NOTIFICATION TransactionNotification,
        ULONG NotificationLength,
        PLARGE_INTEGER Timeout,
        PULONG ReturnLength,
        ULONG Asynchronous,
        ULONG_PTR AsynchronousContext)
{
  _disable();
  __readeflags();
  return sub_140433F80(ResourceManagerHandle, TransactionNotification);
}
