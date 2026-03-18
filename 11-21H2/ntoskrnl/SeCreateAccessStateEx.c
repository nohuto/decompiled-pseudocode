/*
 * XREFs of SeCreateAccessStateEx @ 0x14071F190
 * Callers:
 *     PspOneDirectionSecurityDomainCombine @ 0x14066CC94 (PspOneDirectionSecurityDomainCombine.c)
 *     PspInsertProcess @ 0x14066D0AC (PspInsertProcess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406B5158 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 *     SeCreateAccessState @ 0x14071F140 (SeCreateAccessState.c)
 *     PspCombineSecurityDomains @ 0x1407527F4 (PspCombineSecurityDomains.c)
 *     CmpDoAccessCheckOnKCB @ 0x140916788 (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x140347A20 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessStateEx(
        struct _KTHREAD *a1,
        struct _KPROCESS *a2,
        _QWORD *a3,
        _QWORD *a4,
        ACCESS_MASK a5,
        GENERIC_MAPPING *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT v9; // [rsp+30h] [rbp-28h] BYREF

  memset(&v9, 0, sizeof(v9));
  SeCaptureSubjectContextEx(a1, a2, &v9);
  return SepCreateAccessStateFromSubjectContext(&v9, a3, a4, a5, a6);
}
