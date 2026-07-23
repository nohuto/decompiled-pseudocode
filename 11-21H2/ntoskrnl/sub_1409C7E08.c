/*
 * XREFs of sub_1409C7E08 @ 0x1409C7E08
 * Callers:
 *     sub_1409F8350 @ 0x1409F8350 (sub_1409F8350.c)
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

void __fastcall sub_1409C7E08(__int64 a1, __int64 a2)
{
  _QWORD *ClientToken; // rsi
  _QWORD *PrimaryToken; // r15
  _QWORD **v6; // rax
  __int64 v7; // r14
  __int64 CurrentThreadProcess; // r13
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  PVOID P; // [rsp+20h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD Src[132]; // [rsp+50h] [rbp-B0h] BYREF

  P = 0LL;
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
  v9 = sub_1407B66E0(CurrentThreadProcess, &P);
  if ( v9 < 0 )
  {
    sub_1409CF1A0((unsigned int)v9);
  }
  else
  {
    v10 = *(unsigned __int8 *)(v7 + 1);
    Src[0] = 0x120800000001LL;
    LODWORD(Src[2]) = 524388;
    LODWORD(Src[3]) = 4;
    HIDWORD(Src[3]) = 4 * v10 + 8;
    Src[10] = &qword_140001B08;
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
    Src[24] = *(_QWORD *)(CurrentThreadProcess + 1088);
    v12 = *(unsigned __int16 *)P + 16;
    Src[30] = P;
    HIDWORD(Src[27]) = v12;
    Src[16] = a1;
    Src[20] = a2;
    Src[23] = 0x80000000BLL;
    LODWORD(Src[27]) = 2;
    LODWORD(Src[1]) = 7;
    sub_1403CD84C(Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  SeReleaseSubjectContext(&SubjectContext);
}
