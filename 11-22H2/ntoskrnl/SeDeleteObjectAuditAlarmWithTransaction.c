/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CE140
 * Callers:
 *     NtDeleteKey @ 0x14070FD60 (NtDeleteKey.c)
 *     NtMakeTemporaryObject @ 0x1407E1190 (NtMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarm @ 0x1409CE120 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x1407380C0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409CBAB4 (SepAdtDeleteObjectAuditAlarm.c)
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
