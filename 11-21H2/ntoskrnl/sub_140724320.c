/*
 * XREFs of sub_140724320 @ 0x140724320
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x1402A4690 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1402EC620 (SeReportSecurityEventWithSubCategory.c)
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     SeAuditingFileEventsWithContextEx @ 0x1405F4D90 (SeAuditingFileEventsWithContextEx.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     sub_1406B5B9C @ 0x1406B5B9C (sub_1406B5B9C.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x1406EAAB0 (SeAuditingHardLinkEventsWithContext.c)
 *     sub_1407225F4 @ 0x1407225F4 (sub_1407225F4.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     sub_140723F80 @ 0x140723F80 (sub_140723F80.c)
 *     sub_14072427C @ 0x14072427C (sub_14072427C.c)
 *     sub_140753358 @ 0x140753358 (sub_140753358.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1408629D0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     sub_1409C8548 @ 0x1409C8548 (sub_1409C8548.c)
 *     sub_1409C8EE8 @ 0x1409C8EE8 (sub_1409C8EE8.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1409CA280 (SeAuditingFileOrGlobalEvents.c)
 * Callees:
 *     sub_1402A4700 @ 0x1402A4700 (sub_1402A4700.c)
 *     sub_1407243A0 @ 0x1407243A0 (sub_1407243A0.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409CA3C4 @ 0x1409CA3C4 (sub_1409CA3C4.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 */

char __fastcall sub_140724320(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, struct _SECURITY_SUBJECT_CONTEXT *a4)
{
  int v7; // ebx
  char result; // al
  __int64 v9; // rbx
  char v10; // di
  BOOL v11; // eax
  __int64 v12; // rdx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r15
  PACCESS_TOKEN ClientToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-38h] BYREF
  char v16; // [rsp+70h] [rbp+8h] BYREF

  v7 = a1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (unsigned int)a1 <= 8 )
  {
    v11 = a2 != 0;
    v12 = v11 | 0x10u;
    if ( !a3 )
      v12 = v11;
    return sub_1407243A0(a1, v12, a4);
  }
  else
  {
    result = sub_1402A4700(a1, a2, a3);
    v9 = (unsigned int)(v7 - 100);
    v16 = result;
    v10 = result;
    if ( dword_140C1B400[v9] )
    {
      if ( a4 )
      {
        p_SubjectContext = a4;
      }
      else
      {
        p_SubjectContext = &SubjectContext;
        SeCaptureSubjectContext(&SubjectContext);
      }
      ClientToken = p_SubjectContext->ClientToken;
      if ( p_SubjectContext->ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
      {
        sub_1409CA3C4(v9, a2, a3, (_DWORD)ClientToken, (__int64)&v16);
        v10 = v16;
      }
      else
      {
        sub_1409CF1A0(3221225596LL);
      }
      if ( !a4 )
        SeReleaseSubjectContext(p_SubjectContext);
      return v10;
    }
  }
  return result;
}
