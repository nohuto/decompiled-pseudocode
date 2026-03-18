/*
 * XREFs of SeDeleteObjectAuditAlarm @ 0x1409CE120
 * Callers:
 *     <none>
 * Callees:
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CE140 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

void __stdcall SeDeleteObjectAuditAlarm(PVOID Object, HANDLE Handle)
{
  SeDeleteObjectAuditAlarmWithTransaction(Object, Handle, 0LL);
}
