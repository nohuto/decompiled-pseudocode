/*
 * XREFs of SeDeleteObjectAuditAlarm @ 0x1409CADC0
 * Callers:
 *     <none>
 * Callees:
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CADE0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

void __stdcall SeDeleteObjectAuditAlarm(PVOID Object, HANDLE Handle)
{
  SeDeleteObjectAuditAlarmWithTransaction(Object, Handle, 0LL);
}
