/*
 * XREFs of SeMarkLogonSessionForTerminationNotification @ 0x1406E8700
 * Callers:
 *     <none>
 * Callees:
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1406E8720 (SeMarkLogonSessionForTerminationNotificationEx.c)
 */

NTSTATUS __stdcall SeMarkLogonSessionForTerminationNotification(PLUID LogonId)
{
  return SeMarkLogonSessionForTerminationNotificationEx(LogonId, 0LL);
}
