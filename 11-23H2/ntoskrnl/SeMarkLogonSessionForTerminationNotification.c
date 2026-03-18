/*
 * XREFs of SeMarkLogonSessionForTerminationNotification @ 0x140885420
 * Callers:
 *     <none>
 * Callees:
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140885440 (SeMarkLogonSessionForTerminationNotificationEx.c)
 */

NTSTATUS __stdcall SeMarkLogonSessionForTerminationNotification(PLUID LogonId)
{
  return SeMarkLogonSessionForTerminationNotificationEx(LogonId, 0LL);
}
