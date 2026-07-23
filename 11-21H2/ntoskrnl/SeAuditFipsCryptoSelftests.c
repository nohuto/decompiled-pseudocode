/*
 * XREFs of SeAuditFipsCryptoSelftests @ 0x1409C7340
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_1407B66E0 @ 0x1407B66E0 (sub_1407B66E0.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SeAuditFipsCryptoSelftests(char a1, unsigned int a2)
{
  __int64 v3; // rdi
  _QWORD **PrimaryToken; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v6; // r14
  int v7; // ebx
  int v8; // ecx
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  SubjectContext.ClientToken = 0LL;
  v3 = a2;
  SubjectContext.ImpersonationLevel = 0x80000000;
  memset(&SubjectContext.ImpersonationLevel + 1, 0, 20);
  memset(Src, 0, 0x418uLL);
  P = 0LL;
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
  Src[10] = &qword_140001B08;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  v6 = *(_QWORD *)(CurrentThreadProcess + 1088);
  v7 = sub_1407B66E0(CurrentThreadProcess, &P);
  if ( v7 >= 0 )
  {
    Src[11] = 0x80000000BLL;
    Src[12] = v6;
    v8 = *(unsigned __int16 *)P + 16;
    LODWORD(Src[15]) = 2;
    HIDWORD(Src[15]) = v8;
    Src[18] = P;
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
    sub_1403CD84C(Src);
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 < 0 )
    sub_1409CF1A0((unsigned int)v7);
}
