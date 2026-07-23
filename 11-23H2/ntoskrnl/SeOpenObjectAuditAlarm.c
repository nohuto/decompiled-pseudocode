/*
 * XREFs of SeOpenObjectAuditAlarm @ 0x1406C0500
 * Callers:
 *     IopCreateSecurityCheck @ 0x14035A8EC (IopCreateSecurityCheck.c)
 *     CmpCheckCreateAccess @ 0x1406C0878 (CmpCheckCreateAccess.c)
 *     ObCheckObjectAccess @ 0x1407B6540 (ObCheckObjectAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140A1B398 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0560 (SeOpenObjectAuditAlarmWithTransaction.c)
 */

void __stdcall SeOpenObjectAuditAlarm(
        PUNICODE_STRING ObjectTypeName,
        PVOID Object,
        PUNICODE_STRING AbsoluteObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PACCESS_STATE AccessState,
        BOOLEAN ObjectCreated,
        BOOLEAN AccessGranted,
        KPROCESSOR_MODE AccessMode,
        PBOOLEAN GenerateOnClose)
{
  if ( AccessMode )
    SeOpenObjectAuditAlarmWithTransaction(
      ObjectTypeName,
      Object,
      AbsoluteObjectName,
      SecurityDescriptor,
      AccessState,
      ObjectCreated,
      AccessGranted,
      AccessMode,
      0LL,
      GenerateOnClose);
}
