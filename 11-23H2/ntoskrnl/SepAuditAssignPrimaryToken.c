/*
 * XREFs of SepAuditAssignPrimaryToken @ 0x140840DA0
 * Callers:
 *     SeExchangePrimaryToken @ 0x1408405F8 (SeExchangePrimaryToken.c)
 *     SeAssignPrimaryToken @ 0x14084079C (SeAssignPrimaryToken.c)
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

void __fastcall SepAuditAssignPrimaryToken(__int64 a1, __int64 a2)
{
  _KPROCESS *CurrentThreadProcess; // rax
  __int64 v5; // rbx
  struct _LIST_ENTRY *Flink; // r12
  __int64 v7; // rdi
  __int64 v8; // r14
  int AllocatedFullProcessImageName; // ebx
  __int64 v10; // r15
  int v11; // eax
  _QWORD SubjectContext[5]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  memset(&SubjectContext[1], 0, 32);
  memset(Src, 0, 0x418uLL);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  v5 = (__int64)CurrentThreadProcess;
  if ( CurrentThreadProcess[1].ActiveProcessors.StaticBitmap[2] )
  {
    Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
    v7 = SubjectContext[3];
    if ( SubjectContext[1] )
      v7 = SubjectContext[1];
    if ( v7 )
    {
      v8 = **(_QWORD **)(v7 + 152);
      AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(v5);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        v10 = *(_QWORD *)(a1 + 1088);
        AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(a1);
        if ( AllocatedFullProcessImageName >= 0 )
        {
          v11 = *(unsigned __int8 *)(v8 + 1);
          Src[0] = 0x125800000005LL;
          Src[11] = 0x800000005LL;
          LODWORD(Src[2]) = 524422;
          HIDWORD(Src[3]) = 4 * v11 + 8;
          LODWORD(Src[3]) = 4;
          Src[6] = v8;
          Src[10] = &SeSubsystemName;
          Src[12] = *(_QWORD *)(v7 + 24);
          Src[16] = *(_QWORD *)(a2 + 24);
          Src[26] = 0LL;
          HIDWORD(Src[23]) = MEMORY[0] + 16;
          Src[34] = 0LL;
          Src[7] = 0x2000000001LL;
          HIDWORD(Src[31]) = HIDWORD(Src[23]);
          Src[15] = 0x800000023LL;
          Src[19] = 0x80000000BLL;
          Src[20] = v10;
          LODWORD(Src[23]) = 2;
          Src[27] = 0x80000000BLL;
          Src[28] = Flink;
          LODWORD(Src[31]) = 2;
          LODWORD(Src[1]) = 8;
          SepAdtLogAuditRecord(Src);
        }
      }
    }
    else
    {
      AllocatedFullProcessImageName = -1073741700;
    }
    if ( AllocatedFullProcessImageName < 0 )
      SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
  }
}
