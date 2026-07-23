/*
 * XREFs of SeAuditFipsCryptoSelftests @ 0x1409CA7D0
 * Callers:
 *     <none>
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

void __fastcall SeAuditFipsCryptoSelftests(char a1, unsigned int a2)
{
  __int64 v3; // rdi
  _QWORD **PrimaryToken; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // r14
  int AllocatedFullProcessImageName; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  SubjectContext.ClientToken = 0LL;
  v3 = a2;
  SubjectContext.ImpersonationLevel = 0x80000000;
  memset(&SubjectContext.ImpersonationLevel + 1, 0, 20);
  memset(Src, 0, 0x418uLL);
  LODWORD(Src[0]) = 1;
  LOWORD(Src[2]) = 102;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  LODWORD(Src[3]) = 4;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  Src[7] = 0x2000000001LL;
  Src[6] = *PrimaryToken[19];
  HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(Src[6] + 1LL) + 8;
  Src[10] = &SeSubsystemName;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    Src[11] = 0x80000000BLL;
    Src[12] = Flink;
    LODWORD(Src[15]) = 2;
    HIDWORD(Src[15]) = MEMORY[0] + 16;
    Src[18] = 0LL;
    LODWORD(Src[1]) = 4;
    if ( a1 )
    {
      HIDWORD(Src[0]) = 6417;
      WORD1(Src[2]) = 8;
    }
    else
    {
      HIDWORD(Src[0]) = 6418;
      WORD1(Src[2]) = 16;
      Src[19] = 0x40000000ALL;
      Src[20] = v3;
      LODWORD(Src[1]) = 5;
    }
    SepAdtLogAuditRecord(Src);
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
}
