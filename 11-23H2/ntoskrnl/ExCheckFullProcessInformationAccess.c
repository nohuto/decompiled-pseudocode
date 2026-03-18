/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x1407E0A68
 * Callers:
 *     ExpGetProcessInformation @ 0x140742DC0 (ExpGetProcessInformation.c)
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     NtSetDefaultLocale @ 0x1407FC870 (NtSetDefaultLocale.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x1409F3A84 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3BDC (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1402316C0 (SeAccessCheckWithHint.c)
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140737CA0 (SeCaptureSubjectContextEx.c)
 *     RtlRunOnceExecuteOnce @ 0x140757D90 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall ExCheckFullProcessInformationAccess(char a1)
{
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-20h] BYREF
  NTSTATUS v4; // [rsp+90h] [rbp+10h] BYREF
  unsigned int v5; // [rsp+98h] [rbp+18h] BYREF
  PVOID Context; // [rsp+A0h] [rbp+20h] BYREF

  v5 = 0;
  Context = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a1 != 1 )
    return -1073741790;
  result = RtlRunOnceExecuteOnce(&ExpFullProcessInfoInit, ExpInitFullProcessSecurityInfo, 0LL, &Context);
  v4 = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
    SeAccessCheckWithHint(
      (__int64)Context,
      7,
      &SubjectContext,
      0,
      1u,
      0,
      0LL,
      (__int64)&ExpRestrictedGenericMapping,
      1,
      &v5,
      &v4);
    SeReleaseSubjectContext(&SubjectContext);
    return v4;
  }
  return result;
}
