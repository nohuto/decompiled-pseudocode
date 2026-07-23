/*
 * XREFs of SeAuditTransactionStateChange @ 0x1409CB460
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14020BB00 (PsGetCurrentThreadProcess.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     SepAdtLogAuditRecord @ 0x14039B960 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140742964 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __stdcall SeAuditTransactionStateChange(GUID *TransactionId, GUID *ResourceManagerId, ULONG NewTransactionState)
{
  __int64 v4; // r15
  GUID *v6; // rsi
  _QWORD *PrimaryToken; // rbx
  _QWORD **ClientToken; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  _KPROCESS *CurrentThreadProcess; // rax
  int v12; // eax
  _KPROCESS *v13; // rax
  _QWORD DestinationString[3]; // [rsp+28h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD Src[132]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v17; // [rsp+488h] [rbp+380h] BYREF

  SubjectContext.ClientToken = 0LL;
  v4 = NewTransactionState;
  SubjectContext.ImpersonationLevel = 0x80000000;
  memset(&SubjectContext.ImpersonationLevel + 1, 0, 20);
  memset(Src, 0, 0x418uLL);
  v6 = (GUID *)&v17;
  Src[0] = 0x137900000003LL;
  LOWORD(Src[2]) = 117;
  if ( ResourceManagerId )
    v6 = ResourceManagerId;
  v17 = 0LL;
  WORD1(Src[2]) = 8;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( (_DWORD)v4 == 6 )
    WORD1(Src[2]) = 16;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
  {
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    PrimaryToken = SubjectContext.ClientToken;
  }
  v9 = PrimaryToken[3];
  v10 = *ClientToken[19];
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess);
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"?");
  v12 = *(unsigned __int8 *)(v10 + 1);
  Src[12] = v9;
  LODWORD(Src[3]) = 4;
  Src[6] = v10;
  Src[7] = 0x2000000001LL;
  HIDWORD(Src[3]) = 4 * v12 + 8;
  Src[11] = 0x800000005LL;
  Src[10] = &SeSubsystemName;
  Src[15] = 0x100000000DLL;
  Src[18] = TransactionId;
  Src[19] = 0x400000003LL;
  Src[20] = v4;
  Src[23] = 0x100000000DLL;
  Src[26] = v6;
  Src[27] = 0x80000000BLL;
  v13 = PsGetCurrentThreadProcess();
  LODWORD(Src[31]) = 2;
  Src[34] = &DestinationString[1];
  LODWORD(Src[1]) = 8;
  Src[28] = v13[1].Header.WaitListHead.Flink;
  HIDWORD(Src[31]) = LOWORD(DestinationString[1]) + 16;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext(&SubjectContext);
}
