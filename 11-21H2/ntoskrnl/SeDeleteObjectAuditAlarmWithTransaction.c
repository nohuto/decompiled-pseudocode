/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CADE0
 * Callers:
 *     sub_14067DE90 @ 0x14067DE90 (sub_14067DE90.c)
 *     sub_1406E1680 @ 0x1406E1680 (sub_1406E1680.c)
 *     SeDeleteObjectAuditAlarm @ 0x1409CADC0 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409C8774 @ 0x1409C8774 (sub_1409C8774.c)
 */

void __stdcall SeDeleteObjectAuditAlarmWithTransaction(PVOID Object, HANDLE Handle, GUID *TransactionId)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  sub_1409C8774(
    (const UNICODE_STRING *)&qword_140001B08,
    (unsigned __int64)Handle,
    (__int64 *)&SubjectContext,
    (__int64)Object,
    (__int128 *)TransactionId,
    1);
  SeReleaseSubjectContext(&SubjectContext);
}
