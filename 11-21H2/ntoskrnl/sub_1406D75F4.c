/*
 * XREFs of sub_1406D75F4 @ 0x1406D75F4
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1407F42D0 @ 0x1407F42D0 (sub_1407F42D0.c)
 *     sub_1409F3D68 @ 0x1409F3D68 (sub_1409F3D68.c)
 *     sub_1409F3EC0 @ 0x1409F3EC0 (sub_1409F3EC0.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     RtlRunOnceExecuteOnce @ 0x14075BD80 (RtlRunOnceExecuteOnce.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

NTSTATUS __fastcall sub_1406D75F4(char a1)
{
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-20h] BYREF
  __int64 v4; // [rsp+90h] [rbp+10h] BYREF
  __int64 v5; // [rsp+98h] [rbp+18h] BYREF
  PVOID Context; // [rsp+A0h] [rbp+20h] BYREF

  LODWORD(v5) = 0;
  Context = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a1 != 1 )
    return -1073741790;
  result = RtlRunOnceExecuteOnce(&stru_140D3B5E0, sub_14085F700, 0LL, &Context);
  LODWORD(v4) = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    SeCaptureSubjectContextEx(CurrentThread, *((PEPROCESS *)CurrentThread + 23), &SubjectContext);
    SeAccessCheckWithHint(
      (__int64)Context,
      7,
      &SubjectContext,
      0,
      1u,
      0,
      0LL,
      (__int64)&stru_140A37FA0,
      1,
      (unsigned int *)&v5,
      (int *)&v4);
    SeReleaseSubjectContext(&SubjectContext);
    return v4;
  }
  return result;
}
