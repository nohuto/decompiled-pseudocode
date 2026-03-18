/*
 * XREFs of SeDeleteAccessState @ 0x14066C150
 * Callers:
 *     SepCreateTokenEx @ 0x1402022FC (SepCreateTokenEx.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14066CC94 (PspOneDirectionSecurityDomainCombine.c)
 *     CmpDoBuildVirtualStack @ 0x140916918 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     SepDeleteAccessState @ 0x1403478A0 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
