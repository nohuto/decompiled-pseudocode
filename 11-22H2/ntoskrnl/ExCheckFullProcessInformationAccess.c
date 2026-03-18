/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x1407E0FE8
 * Callers:
 *     ExpGetProcessInformation @ 0x1407432D0 (ExpGetProcessInformation.c)
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     NtSetDefaultLocale @ 0x1407FCF20 (NtSetDefaultLocale.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x1409F3B34 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3C8C (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1402316A0 (SeAccessCheckWithHint.c)
 *     SeCaptureSubjectContextEx @ 0x1407380F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     RtlRunOnceExecuteOnce @ 0x1407582A0 (RtlRunOnceExecuteOnce.c)
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
