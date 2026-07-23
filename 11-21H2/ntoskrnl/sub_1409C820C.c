/*
 * XREFs of sub_1409C820C @ 0x1409C820C
 * Callers:
 *     sub_1409851A4 @ 0x1409851A4 (sub_1409851A4.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     sub_1402F3558 @ 0x1402F3558 (sub_1402F3558.c)
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F4CC8 @ 0x1405F4CC8 (sub_1405F4CC8.c)
 *     sub_140696CCC @ 0x140696CCC (sub_140696CCC.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_1407B66E0 @ 0x1407B66E0 (sub_1407B66E0.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_140882966 @ 0x140882966 (sub_140882966.c)
 *     sub_1409CE6B8 @ 0x1409CE6B8 (sub_1409CE6B8.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409C820C(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        const UNICODE_STRING *a4,
        unsigned int a5,
        int a6,
        void *a7)
{
  PVOID v7; // rbx
  int v11; // r14d
  __int64 CurrentThreadProcess; // rax
  __int64 v13; // r13
  int v14; // esi
  _QWORD **PrimaryToken; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  int v22; // r10d
  unsigned int v23; // r11d
  int v24; // eax
  int v25; // eax
  int v26; // eax
  _BYTE v27[4]; // [rsp+20h] [rbp-E0h] BYREF
  ULONG v28; // [rsp+24h] [rbp-DCh] BYREF
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  PVOID v30; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v31; // [rsp+38h] [rbp-C8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD Src[132]; // [rsp+60h] [rbp-A0h] BYREF

  v7 = a7;
  P = a7;
  v30 = 0LL;
  v31 = 0LL;
  v28 = 0;
  v27[0] = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v11 = (unsigned __int16)sub_140882966(a2, a4, 1, 0);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  v13 = *(_QWORD *)(CurrentThreadProcess + 1088);
  v14 = sub_1407B66E0(CurrentThreadProcess, &v30);
  if ( v14 < 0 )
  {
LABEL_24:
    sub_1409CF1A0((unsigned int)v14);
    goto LABEL_25;
  }
  memset(Src, 0, 0x418uLL);
  Src[0] = 0x123700000003LL;
  WORD1(Src[2]) = 8;
  LOWORD(Src[2]) = v11;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  LODWORD(Src[3]) = 4;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  Src[10] = &qword_140001B08;
  Src[11] = 0x800000005LL;
  Src[6] = *PrimaryToken[19];
  v16 = *(unsigned __int8 *)(Src[6] + 1LL);
  Src[7] = 0x2000000001LL;
  HIDWORD(Src[3]) = 4 * v16 + 8;
  if ( SubjectContext.ClientToken )
    v17 = *((_QWORD *)SubjectContext.ClientToken + 3);
  else
    v17 = *((_QWORD *)SubjectContext.PrimaryToken + 3);
  Src[12] = v17;
  v18 = a4->Length + 16;
  Src[15] = 0x2000000001LL;
  LODWORD(Src[19]) = 1;
  HIDWORD(Src[19]) = v18;
  Src[18] = &qword_140001B08;
  Src[22] = a4;
  sub_140696CCC(a2, &v31);
  if ( v31 )
  {
    if ( (_WORD)v11 == 116 || (LODWORD(Src[23]) = 1, (_WORD)v11 == 128) )
      LODWORD(Src[23]) = 2;
    v19 = *(unsigned __int16 *)v31;
    Src[26] = v31;
    HIDWORD(Src[23]) = v19 + 16;
  }
  Src[27] = 0x80000000BLL;
  if ( sub_1402F3558(a3, 0) )
    a3 ^= 0xFFFFFFFF80000000uLL;
  Src[33] = 4LL;
  Src[32] = a5;
  Src[36] = a5;
  Src[46] = v30;
  v24 = *(unsigned __int16 *)v30 + 16;
  Src[28] = a3 & 0xFFFFFFFFFFFFFFFCuLL;
  Src[31] = 0x400000007LL;
  Src[35] = 0x40000000ALL;
  Src[39] = __PAIR64__(v20, v21);
  Src[40] = v13;
  Src[43] = __PAIR64__(v24, v23);
  if ( v11 != v22 && v11 - v22 != 12 || !a7 )
    goto LABEL_19;
  v25 = sub_1405F4CC8((__int16 *)a7, &P, &v28, v27);
  v7 = P;
  v14 = v25;
  if ( v25 >= 0 )
  {
    LODWORD(Src[47]) = 31;
    v26 = sub_1409CE6B8(P);
    Src[49] = 0LL;
    HIDWORD(Src[47]) = v26;
    Src[50] = v7;
    Src[48] = 32LL;
LABEL_19:
    LODWORD(Src[1]) = 12;
    sub_1403CD84C(Src);
    SeReleaseSubjectContext(&SubjectContext);
  }
  if ( v27[0] && v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v14 < 0 )
    goto LABEL_24;
LABEL_25:
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
}
