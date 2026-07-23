/*
 * XREFs of VfDriverApplyDifVerification @ 0x140ACA2F8
 * Callers:
 *     MmEnableOrDisableVerifierForDriver @ 0x140AE805C (MmEnableOrDisableVerifierForDriver.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 *     ExSetPoolFlags @ 0x140607FE8 (ExSetPoolFlags.c)
 *     MmIsVerifierApplicableToImage @ 0x14061C59C (MmIsVerifierApplicableToImage.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 *     VfUtilIsProtectedDriver @ 0x140AC27EC (VfUtilIsProtectedDriver.c)
 *     VfDriverLock @ 0x140ACA75C (VfDriverLock.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140ADA2A8 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectDriversLookupName @ 0x140ADAA14 (VfSuspectDriversLookupName.c)
 */

__int64 __fastcall VfDriverApplyDifVerification(__int64 a1, __int64 a2, _DWORD *a3)
{
  PVOID *v3; // rbx
  int v6; // r15d
  unsigned int v7; // esi
  int IsVerifierApplicableToImage; // edi
  __int64 *v9; // rax
  int IsProtectedDriver; // eax
  int v11; // eax

  v3 = 0LL;
  *a3 = 0;
  v6 = 0;
  v7 = 0;
  IsVerifierApplicableToImage = 0;
  VfDriverLock();
  if ( (unsigned int)VfSuspectDriversLookupName(a1 + 24) )
    goto LABEL_27;
  if ( RtlEqualUnicodeString(&VfKernelImageName, (PCUNICODE_STRING)(a1 + 24), 1u) )
  {
    KernelVerifier = 1;
    goto LABEL_4;
  }
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v3 = (PVOID *)PsLoadedModuleList;
  v6 = 1;
  while ( v3 != &PsLoadedModuleList )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 24), (PCUNICODE_STRING)(v3 + 11), 1u) )
      goto LABEL_11;
    v3 = (PVOID *)*v3;
    ++v7;
  }
  v3 = 0LL;
LABEL_11:
  if ( !KernelVerifier )
  {
    if ( !v3 )
    {
      IsVerifierApplicableToImage = -1073738629;
      goto LABEL_26;
    }
    IsProtectedDriver = VfUtilIsProtectedDriver();
    if ( v7 <= 1 || IsProtectedDriver )
    {
      IsVerifierApplicableToImage = -1073738739;
      goto LABEL_26;
    }
    IsVerifierApplicableToImage = MmIsVerifierApplicableToImage((__int64)v3);
    if ( IsVerifierApplicableToImage < 0 )
    {
LABEL_26:
      ExReleaseResourceLite(&PsLoadedModuleResource);
      goto LABEL_27;
    }
  }
LABEL_4:
  v9 = (__int64 *)qword_140C37378;
  if ( *(__int64 **)qword_140C37378 != &VfSuspectDriversList )
    __fastfail(3u);
  *(_QWORD *)a1 = &VfSuspectDriversList;
  *(_QWORD *)(a1 + 8) = v9;
  *v9 = a1;
  qword_140C37378 = a1;
  if ( KernelVerifier
    || (IsVerifierApplicableToImage = VfSuspectApplyDifVolatileVerification(v3, a1), IsVerifierApplicableToImage >= 0) )
  {
    v11 = dword_140C139A0 + 1;
    *a3 = 1;
    dword_140C139A0 = v11;
    if ( KernelVerifier && ((VfRuleClasses & 8) != 0 || (VfRuleClasses & 1) != 0) )
      ExSetPoolFlags(8u);
  }
  if ( v6 )
    goto LABEL_26;
LABEL_27:
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)IsVerifierApplicableToImage;
}
