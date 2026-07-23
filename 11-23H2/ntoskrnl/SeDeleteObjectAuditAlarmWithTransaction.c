/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CE290
 * Callers:
 *     NtDeleteKey @ 0x14070FEC0 (NtDeleteKey.c)
 *     NtMakeTemporaryObject @ 0x1407E0EE0 (NtMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarm @ 0x1409CE270 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409CBC04 (SepAdtDeleteObjectAuditAlarm.c)
 */

void __stdcall SeDeleteObjectAuditAlarmWithTransaction(PVOID Object, HANDLE Handle, GUID *TransactionId)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SepAdtDeleteObjectAuditAlarm(
    (const UNICODE_STRING *)&SeSubsystemName,
    (__int64)Handle,
    (__int64 *)&SubjectContext,
    (__int64)Object,
    (__int128 *)TransactionId,
    1);
  SeReleaseSubjectContext(&SubjectContext);
}
