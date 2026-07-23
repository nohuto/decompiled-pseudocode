/*
 * XREFs of sub_1407F4160 @ 0x1407F4160
 * Callers:
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     sub_1407F40A8 @ 0x1407F40A8 (sub_1407F40A8.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall sub_1407F4160(char a1)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  __int64 v3; // [rsp+90h] [rbp+8h] BYREF
  __int64 v4; // [rsp+98h] [rbp+10h] BYREF

  LODWORD(v4) = 0;
  LODWORD(v3) = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a1 )
    return 3221225506LL;
  SeCaptureSubjectContextEx(0LL, *((PEPROCESS *)KeGetCurrentThread() + 23), &SubjectContext);
  SeAccessCheckWithHint(
    (__int64)&qword_140A3BB10,
    7,
    &SubjectContext,
    0,
    1u,
    0,
    0LL,
    (__int64)ExTimerObjectType + 76,
    1,
    (unsigned int *)&v4,
    (int *)&v3);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)v3;
}
