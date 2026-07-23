/*
 * XREFs of ZwAccessCheckAndAuditAlarm @ 0x14041BC80
 * Callers:
 *     sub_14061C620 @ 0x14061C620 (sub_14061C620.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAccessCheckAndAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ACCESS_MASK DesiredAccess,
        PGENERIC_MAPPING GenericMapping,
        BOOLEAN ObjectCreation,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus,
        PBOOLEAN GenerateOnClose)
{
  _disable();
  __readeflags();
  return sub_140433F80(SubsystemName, HandleId);
}
