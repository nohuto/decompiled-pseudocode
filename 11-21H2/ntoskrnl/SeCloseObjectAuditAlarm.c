/*
 * XREFs of SeCloseObjectAuditAlarm @ 0x1409CAD20
 * Callers:
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     sub_1407A2E10 @ 0x1407A2E10 (sub_1407A2E10.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409C8548 @ 0x1409C8548 (sub_1409C8548.c)
 */

void __fastcall SeCloseObjectAuditAlarm(__int64 a1, unsigned __int64 a2, char a3)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  if ( a3 )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    sub_1409C8548((const UNICODE_STRING *)&qword_140001B08, a2, &SubjectContext, a1, 1);
    SeReleaseSubjectContext(&SubjectContext);
  }
}
