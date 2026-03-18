/*
 * XREFs of PsReferenceEffectiveToken @ 0x14071D6EC
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140225D3C (SepDesktopAppxSubProcessToken.c)
 *     RtlpQueryLowBoxId @ 0x140297B18 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1402B2E70 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeCaptureAtomTableCallout @ 0x140356510 (SeCaptureAtomTableCallout.c)
 *     SeLogAccessFailure @ 0x14035B34C (SeLogAccessFailure.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14036ED08 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     RtlpAllowsLowBoxAccess @ 0x1403ACD20 (RtlpAllowsLowBoxAccess.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B83CC (SeSetLearningModeObjectInformation.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     SeSubProcessToken @ 0x1406B71F8 (SeSubProcessToken.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140714A30 (ExpWnfQueryCurrentUserSID.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D037C (MiIsUserQueryVmCallerTrusted.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x1402329C0 (PsReferencePrimaryTokenWithTag.c)
 *     PsReferenceImpersonationTokenEx @ 0x14071D7A0 (PsReferenceImpersonationTokenEx.c)
 */

__int64 __fastcall PsReferenceEffectiveToken(__int64 a1, ULONG a2, _DWORD *a3, _BYTE *a4, __int64 a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // rbx
  _BYTE *v11; // rdi
  __int64 v12; // rcx
  ULONG_PTR v13; // rax
  char v15; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a1 + 544);
  v11 = a6;
  v12 = PsReferenceImpersonationTokenEx(a1, 0LL, a2, &v15, a4, a5, a6);
  if ( v12 )
  {
    *a3 = 2;
  }
  else
  {
    v13 = PsReferencePrimaryTokenWithTag(Process, a2);
    *a3 = 1;
    v12 = v13;
    *a4 = 0;
    if ( v11 )
      *v11 = *(_BYTE *)(Process + 2170);
  }
  return v12;
}
