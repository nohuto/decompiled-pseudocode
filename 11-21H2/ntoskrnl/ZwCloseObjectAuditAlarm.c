/*
 * XREFs of ZwCloseObjectAuditAlarm @ 0x14041BEC0
 * Callers:
 *     sub_14061DD70 @ 0x14061DD70 (sub_14061DD70.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  _disable();
  __readeflags();
  return sub_140433F80(SubsystemName, HandleId);
}
