/*
 * XREFs of ZwCloseObjectAuditAlarm @ 0x14041AE00
 * Callers:
 *     DifZwCloseObjectAuditAlarmWrapper @ 0x1405EDDB0 (DifZwCloseObjectAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SubsystemName);
}
