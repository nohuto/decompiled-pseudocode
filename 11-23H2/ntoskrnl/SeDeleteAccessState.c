/*
 * XREFs of SeDeleteAccessState @ 0x1407DB210
 * Callers:
 *     SepCreateTokenEx @ 0x140229820 (SepCreateTokenEx.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140232340 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
