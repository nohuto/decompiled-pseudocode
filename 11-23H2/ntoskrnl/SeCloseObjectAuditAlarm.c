/*
 * XREFs of SeCloseObjectAuditAlarm @ 0x1409CDFD0
 * Callers:
 *     ObpCloseHandle @ 0x1406E7680 (ObpCloseHandle.c)
 *     ObCloseHandleTableEntry @ 0x14073FDC4 (ObCloseHandleTableEntry.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737C70 (SeCaptureSubjectContext.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409CB7D8 (SepAdtCloseObjectAuditAlarm.c)
 */

void __fastcall SeCloseObjectAuditAlarm(__int64 a1, __int64 a2, char a3)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  if ( a3 )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    SepAdtCloseObjectAuditAlarm((const UNICODE_STRING *)&SeSubsystemName, a2, &SubjectContext, a1, 1);
    SeReleaseSubjectContext(&SubjectContext);
  }
}
