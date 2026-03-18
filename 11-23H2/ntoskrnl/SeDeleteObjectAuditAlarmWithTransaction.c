/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CE090
 * Callers:
 *     NtDeleteKey @ 0x14070FCB0 (NtDeleteKey.c)
 *     NtMakeTemporaryObject @ 0x1407E0C10 (NtMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarm @ 0x1409CE070 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737C70 (SeCaptureSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409CBA04 (SepAdtDeleteObjectAuditAlarm.c)
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
