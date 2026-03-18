/*
 * XREFs of PsReferenceProcessFilePointer @ 0x140673AD0
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140205B1C (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x1403761D8 (SepVerifyDesktopAppxImage.c)
 *     PsCheckProcessFileSigningLevel @ 0x14065FD10 (PsCheckProcessFileSigningLevel.c)
 *     CmpCheckExeOwnerForPca @ 0x1406B4F98 (CmpCheckExeOwnerForPca.c)
 *     PspCallProcessNotifyRoutines @ 0x1406F80E4 (PspCallProcessNotifyRoutines.c)
 *     DbgkCreateThread @ 0x140702604 (DbgkCreateThread.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     MiReferenceControlAreaFileWithTag @ 0x14027A794 (MiReferenceControlAreaFileWithTag.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, __int64 *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 Count; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __int64 result; // rax

  v2 = a1 + 139;
  if ( ExAcquireRundownProtection(a1 + 139) )
  {
    Count = a1[163].Count;
    if ( Count )
    {
      v6 = MiSectionControlArea(Count);
      v7 = MiReferenceControlAreaFileWithTag(v6, 1953261124LL);
      ExReleaseRundownProtection(v2);
      result = 0LL;
      *a2 = v7;
      return result;
    }
    ExReleaseRundownProtection(v2);
  }
  return 3221225473LL;
}
