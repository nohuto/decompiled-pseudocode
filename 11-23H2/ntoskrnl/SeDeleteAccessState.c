/*
 * XREFs of SeDeleteAccessState @ 0x1407DAF40
 * Callers:
 *     SepCreateTokenEx @ 0x140229710 (SepCreateTokenEx.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140232270 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
