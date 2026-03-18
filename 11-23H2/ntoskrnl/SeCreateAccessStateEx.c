/*
 * XREFs of SeCreateAccessStateEx @ 0x1406C2EA0
 * Callers:
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14069A1C8 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7EA8 (PspOneDirectionSecurityDomainCombine.c)
 *     PspInsertProcess @ 0x1406B9FA4 (PspInsertProcess.c)
 *     SeCreateAccessState @ 0x1406C2E60 (SeCreateAccessState.c)
 *     PspInsertThread @ 0x14073EE9C (PspInsertThread.c)
 *     PspCombineSecurityDomains @ 0x1407C6D0C (PspCombineSecurityDomains.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A18F2C (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x140232B40 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140737CA0 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessStateEx(
        struct _KTHREAD *a1,
        struct _KPROCESS *a2,
        _QWORD *a3,
        _QWORD *a4,
        int a5,
        _DWORD *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT v9; // [rsp+30h] [rbp-28h] BYREF

  memset(&v9, 0, sizeof(v9));
  SeCaptureSubjectContextEx(a1, a2, &v9);
  return SepCreateAccessStateFromSubjectContext(&v9, a3, a4, a5, a6);
}
