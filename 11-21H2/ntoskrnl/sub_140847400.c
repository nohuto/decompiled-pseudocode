/*
 * XREFs of sub_140847400 @ 0x140847400
 * Callers:
 *     sub_1408471EC @ 0x1408471EC (sub_1408471EC.c)
 *     sub_140847260 @ 0x140847260 (sub_140847260.c)
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

void __fastcall sub_140847400(__int64 a1, __int64 a2)
{
  __int64 CurrentThreadProcess; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  _QWORD **v7; // rdi
  __int64 v8; // r14
  int v9; // ebx
  __int64 v10; // r15
  int v11; // eax
  int v12; // eax
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  PVOID SubjectContext[5]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  memset(SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  memset(Src, 0, 0x418uLL);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  v5 = CurrentThreadProcess;
  if ( *(_QWORD *)(CurrentThreadProcess + 1472) )
  {
    v6 = *(_QWORD *)(CurrentThreadProcess + 1088);
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
    v7 = (_QWORD **)SubjectContext[3];
    if ( SubjectContext[1] )
      v7 = (_QWORD **)SubjectContext[1];
    if ( v7 )
    {
      v8 = *v7[19];
      v9 = sub_1407B66E0(v5, SubjectContext);
      if ( v9 >= 0 )
      {
        v10 = *(_QWORD *)(a1 + 1088);
        v9 = sub_1407B66E0(a1, &P);
        if ( v9 >= 0 )
        {
          v11 = *(unsigned __int8 *)(v8 + 1);
          Src[0] = 0x125800000005LL;
          Src[11] = 0x800000005LL;
          LODWORD(Src[2]) = 524421;
          HIDWORD(Src[3]) = 4 * v11 + 8;
          LODWORD(Src[3]) = 4;
          Src[6] = v8;
          Src[10] = &qword_140001B08;
          Src[12] = v7[3];
          Src[16] = *(_QWORD *)(a2 + 24);
          v12 = *(unsigned __int16 *)P + 16;
          Src[26] = P;
          HIDWORD(Src[23]) = v12;
          Src[34] = SubjectContext[0];
          Src[7] = 0x2000000001LL;
          HIDWORD(Src[31]) = *(unsigned __int16 *)SubjectContext[0] + 16;
          Src[15] = 0x800000023LL;
          Src[19] = 0x80000000BLL;
          Src[20] = v10;
          LODWORD(Src[23]) = 2;
          Src[27] = 0x80000000BLL;
          Src[28] = v6;
          LODWORD(Src[31]) = 2;
          LODWORD(Src[1]) = 8;
          sub_1403CD84C(Src);
        }
      }
    }
    else
    {
      v9 = -1073741700;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( SubjectContext[0] )
      ExFreePoolWithTag(SubjectContext[0], 0);
    if ( v9 < 0 )
      sub_1409CF1A0((unsigned int)v9);
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
  }
}
