/*
 * XREFs of SeReportSecurityEvent @ 0x1405B91A0
 * Callers:
 *     <none>
 * Callees:
 *     SeReportSecurityEventWithSubCategory @ 0x140226C90 (SeReportSecurityEventWithSubCategory.c)
 */

NTSTATUS __stdcall SeReportSecurityEvent(
        ULONG Flags,
        PUNICODE_STRING SourceName,
        PSID UserSid,
        PSE_ADT_PARAMETER_ARRAY AuditParameters)
{
  if ( AuditParameters )
    AuditParameters->CategoryId = 3;
  return SeReportSecurityEventWithSubCategory(Flags, SourceName, UserSid, AuditParameters, 0x7Bu);
}
