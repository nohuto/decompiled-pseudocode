/*
 * XREFs of NtGetNotificationResourceManager @ 0x1403DFB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtGetNotificationResourceManager(
        HANDLE ResourceManagerHandle,
        PTRANSACTION_NOTIFICATION TransactionNotification,
        ULONG NotificationLength,
        PLARGE_INTEGER Timeout,
        PULONG ReturnLength,
        ULONG Asynchronous,
        ULONG_PTR AsynchronousContext)
{
  return NtGetNotificationResourceManager_0(
           ResourceManagerHandle,
           TransactionNotification,
           NotificationLength,
           Timeout,
           ReturnLength,
           Asynchronous,
           AsynchronousContext);
}
