/*
 * XREFs of ExpCheckWakeTimerAccess @ 0x1407EBB98
 * Callers:
 *     ExpSetTimerObject @ 0x14032EAB4 (ExpSetTimerObject.c)
 *     ExpCheckIRTimerAccess @ 0x1407EBD34 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140231790 (SeAccessCheckWithHint.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140737E90 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall ExpCheckWakeTimerAccess(char a1)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+98h] [rbp+10h] BYREF

  v4 = 0;
  v3 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a1 )
    return 3221225506LL;
  SeCaptureSubjectContextEx(0LL, KeGetCurrentThread()->ApcState.Process, &SubjectContext);
  SeAccessCheckWithHint(
    (__int64)ExpWakeTimerSecurityDescriptor,
    7,
    &SubjectContext,
    0,
    1u,
    0,
    0LL,
    (__int64)&ExTimerObjectType->TypeInfo.GenericMapping,
    1,
    &v4,
    (NTSTATUS *)&v3);
  SeReleaseSubjectContext(&SubjectContext);
  return v3;
}
