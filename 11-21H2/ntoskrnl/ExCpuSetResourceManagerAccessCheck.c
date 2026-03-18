/*
 * XREFs of ExCpuSetResourceManagerAccessCheck @ 0x140258040
 * Callers:
 *     NtAcquireProcessActivityReference @ 0x1406E1100 (NtAcquireProcessActivityReference.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExCpuSetResourceManagerAccessCheck(KPROCESSOR_MODE a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  __int64 v5; // [rsp+90h] [rbp+8h] BYREF
  __int64 v6; // [rsp+98h] [rbp+10h] BYREF

  LODWORD(v6) = 0;
  LODWORD(v5) = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a1 || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a1) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
  SeAccessCheckWithHint(
    (__int64)&ExpCpuSetSecurityDescriptor,
    1,
    0,
    0LL,
    (__int64)&ExpRestrictedGenericMapping,
    a1,
    (__int64)&v6,
    (__int64)&v5);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)v5;
}
