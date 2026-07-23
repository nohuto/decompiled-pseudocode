/*
 * XREFs of SeAuditSystemTimeChange @ 0x1409CB298
 * Callers:
 *     NtSetSystemTime @ 0x1409F8520 (NtSetSystemTime.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14020BB00 (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x14039B960 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140742964 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAuditFailed @ 0x1409D1E40 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SeAuditSystemTimeChange(__int64 a1, __int64 a2)
{
  _QWORD *ClientToken; // rsi
  _QWORD *PrimaryToken; // r15
  _QWORD **v6; // rax
  __int64 v7; // r14
  _KPROCESS *CurrentThreadProcess; // r13
  int AllocatedFullProcessImageName; // eax
  int v10; // eax
  __int64 v11; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD Src[132]; // [rsp+50h] [rbp-B0h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  v6 = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    v6 = (_QWORD **)SubjectContext.ClientToken;
  v7 = *v6[19];
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  memset(Src, 0, 0x418uLL);
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess);
  if ( AllocatedFullProcessImageName < 0 )
  {
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  }
  else
  {
    v10 = *(unsigned __int8 *)(v7 + 1);
    Src[0] = 0x120800000001LL;
    LODWORD(Src[2]) = 524388;
    LODWORD(Src[3]) = 4;
    HIDWORD(Src[3]) = 4 * v10 + 8;
    Src[10] = &SeSubsystemName;
    Src[6] = v7;
    Src[7] = 0x2000000001LL;
    Src[11] = 0x800000005LL;
    if ( ClientToken )
      v11 = ClientToken[3];
    else
      v11 = PrimaryToken[3];
    Src[12] = v11;
    Src[15] = 0x80000000CLL;
    Src[19] = 0x80000000CLL;
    Src[24] = CurrentThreadProcess[1].Header.WaitListHead.Flink;
    Src[30] = 0LL;
    HIDWORD(Src[27]) = MEMORY[0] + 16;
    Src[16] = a1;
    Src[20] = a2;
    Src[23] = 0x80000000BLL;
    LODWORD(Src[27]) = 2;
    LODWORD(Src[1]) = 7;
    SepAdtLogAuditRecord(Src);
  }
  SeReleaseSubjectContext(&SubjectContext);
}
