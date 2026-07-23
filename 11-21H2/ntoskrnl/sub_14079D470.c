/*
 * XREFs of sub_14079D470 @ 0x14079D470
 * Callers:
 *     sub_14079E024 @ 0x14079E024 (sub_14079E024.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F4C6C @ 0x1405F4C6C (sub_1405F4C6C.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     sub_1407B66E0 @ 0x1407B66E0 (sub_1407B66E0.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_14079D470(__int64 a1, char *a2, unsigned int a3, char *a4, unsigned int a5, char a6)
{
  int *v9; // r14
  int *v10; // rsi
  _QWORD **ClientToken; // rdi
  __int64 CurrentThreadProcess; // rax
  _QWORD *PrimaryToken; // rcx
  _QWORD **v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  int *Pool2; // rax
  signed __int64 v18; // rdx
  __int64 v19; // r9
  int *v20; // rax
  signed __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+30h] [rbp-D0h]
  __int64 v32; // [rsp+38h] [rbp-C8h]
  __int64 v33; // [rsp+40h] [rbp-C0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+70h] [rbp-90h] BYREF

  P = 0LL;
  v31 = a1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = 0LL;
  v10 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = (_QWORD **)SubjectContext.ClientToken;
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(138LL) && (sub_1405F4C6C(a2, a3) || sub_1405F4C6C(a4, a5)) )
  {
    memset(Src, 0, 0x418uLL);
    Src[0] = 0x125F00000005LL;
    LODWORD(Src[2]) = 524426;
    if ( !a6 )
      WORD1(Src[2]) = 16;
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    if ( *(_QWORD *)(CurrentThreadProcess + 1472) )
    {
      v33 = *(_QWORD *)(CurrentThreadProcess + 1088);
      if ( (int)sub_1407B66E0(CurrentThreadProcess, &P) >= 0 )
      {
        PrimaryToken = SubjectContext.PrimaryToken;
        v14 = (_QWORD **)SubjectContext.PrimaryToken;
        if ( ClientToken )
        {
          v14 = ClientToken;
          PrimaryToken = ClientToken;
        }
        v15 = PrimaryToken[3];
        v16 = *(_QWORD *)(v31 + 24);
        v32 = *v14[19];
        if ( a5 )
        {
          Pool2 = (int *)ExAllocatePool2(256LL, 12 * a5 + 20LL, 1883333971LL);
          v9 = Pool2;
          if ( !Pool2 )
            goto LABEL_2;
          Pool2[1] = 1;
          v18 = (char *)Pool2 - a4;
          *Pool2 = a5;
          v19 = a5;
          do
          {
            *(_QWORD *)&a4[v18 + 8] = *(_QWORD *)a4;
            *(_DWORD *)&a4[v18 + 16] = *((_DWORD *)a4 + 2);
            a4 += 12;
            --v19;
          }
          while ( v19 );
        }
        if ( a3 )
        {
          v20 = (int *)ExAllocatePool2(256LL, 12 * a3 + 20LL, 1883333971LL);
          v10 = v20;
          if ( !v20 )
            goto LABEL_2;
          v20[1] = 1;
          v21 = (char *)v20 - a2;
          *v20 = a3;
          v22 = a3;
          do
          {
            *(_QWORD *)&a2[v21 + 8] = *(_QWORD *)a2;
            *(_DWORD *)&a2[v21 + 16] = *((_DWORD *)a2 + 2);
            a2 += 12;
            --v22;
          }
          while ( v22 );
        }
        Src[6] = v32;
        LODWORD(Src[3]) = 4;
        Src[7] = 0x2000000001LL;
        v23 = *(unsigned __int8 *)(v32 + 1);
        Src[11] = 0x800000005LL;
        HIDWORD(Src[3]) = 4 * v23 + 8;
        Src[10] = &qword_140001B08;
        v24 = *(unsigned __int16 *)P + 16;
        Src[12] = v15;
        HIDWORD(Src[19]) = v24;
        Src[24] = v33;
        Src[15] = 0x800000023LL;
        Src[16] = v16;
        LODWORD(Src[19]) = 2;
        Src[22] = P;
        Src[23] = 0x80000000BLL;
        if ( v9 )
        {
          v25 = *v9;
          LODWORD(Src[27]) = 8;
          if ( v25 )
            v26 = 12 * v25 + 8;
          else
            v26 = 8;
          HIDWORD(Src[27]) = v26;
          Src[30] = v9;
        }
        if ( v10 )
        {
          v27 = *v10;
          LODWORD(Src[31]) = 8;
          if ( v27 )
            v28 = 12 * v27 + 8;
          else
            v28 = 8;
          HIDWORD(Src[31]) = v28;
          Src[34] = v10;
        }
        LODWORD(Src[1]) = 8;
        sub_1403CD84C(Src);
      }
    }
  }
LABEL_2:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  SeReleaseSubjectContext(&SubjectContext);
}
