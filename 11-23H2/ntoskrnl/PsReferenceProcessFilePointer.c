/*
 * XREFs of PsReferenceProcessFilePointer @ 0x14069A0A0
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140225BB0 (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x1405B7F70 (SepVerifyDesktopAppxImage.c)
 *     CmpCheckExeOwnerForPca @ 0x14069A314 (CmpCheckExeOwnerForPca.c)
 *     PspCallProcessNotifyRoutines @ 0x1406AF954 (PspCallProcessNotifyRoutines.c)
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 *     DbgkCreateThread @ 0x14076FC1C (DbgkCreateThread.c)
 *     PsCheckProcessFileSigningLevel @ 0x1409B0810 (PsCheckProcessFileSigningLevel.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B360 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 *     MiSectionControlArea @ 0x14029F880 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402A23F0 (MiReferenceControlAreaFileWithTag.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, unsigned __int64 *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 Count; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 result; // rax

  v2 = a1 + 139;
  if ( ExAcquireRundownProtection_0(a1 + 139) )
  {
    Count = a1[163].Count;
    if ( Count )
    {
      v6 = MiSectionControlArea(Count);
      v7 = MiReferenceControlAreaFileWithTag(v6, 0x746C6644u);
      ExReleaseRundownProtection_0(v2);
      result = 0LL;
      *a2 = v7;
      return result;
    }
    ExReleaseRundownProtection_0(v2);
  }
  return 3221225473LL;
}
