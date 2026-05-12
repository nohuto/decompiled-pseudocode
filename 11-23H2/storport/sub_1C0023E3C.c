/*
 * XREFs of sub_1C0023E3C @ 0x1C0023E3C
 * Callers:
 *     sub_1C00A6E08 @ 0x1C00A6E08 (sub_1C00A6E08.c)
 *     sub_1C00AAB80 @ 0x1C00AAB80 (sub_1C00AAB80.c)
 * Callees:
 *     <none>
 */

BOOLEAN sub_1C0023E3C()
{
  PACCESS_TOKEN PrimaryToken; // rcx
  BOOLEAN IsAdmin; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  IsAdmin = SeTokenIsAdmin(PrimaryToken);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return IsAdmin;
}
