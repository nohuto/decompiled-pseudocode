/*
 * XREFs of SeAdtRegistryValueChangedAuditAlarm @ 0x1409C6D8C
 * Callers:
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     ObpIsKernelHandle @ 0x1402F3558 (ObpIsKernelHandle.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     SepAdtLogAuditRecord @ 0x1403CD84C (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SepQueryNameString @ 0x140696CCC (SepQueryNameString.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1407B66E0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     SeExamineGlobalSacl @ 0x140882A70 (SeExamineGlobalSacl.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 *     SepAuditFailed @ 0x1409CF1A0 (SepAuditFailed.c)
 *     AdtpBuildRegistryValueString @ 0x140A1B468 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildReplacementString @ 0x140A1C7F0 (AdtpBuildReplacementString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SeAdtRegistryValueChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned int *a7,
        int a8)
{
  unsigned __int16 *v10; // rdi
  PACCESS_TOKEN ClientToken; // r15
  PACCESS_TOKEN PrimaryToken; // r13
  PACCESS_TOKEN v13; // rdx
  __int16 v14; // ax
  void *v15; // r8
  ACL *v16; // rdx
  ACL *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int16 v20; // ax
  void *v21; // r8
  ACL *v22; // rdx
  __int64 v23; // rax
  int NameString; // eax
  unsigned int v25; // ebx
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rax
  _QWORD **v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  bool IsKernelHandle; // al
  unsigned __int64 v38; // r8
  unsigned int v39; // r9d
  int v40; // r10d
  unsigned int v41; // r11d
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  int v44; // eax
  BOOLEAN GenerateAudit[8]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int16 *v47; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v48; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING v49; // [rsp+70h] [rbp-98h] BYREF
  __int128 v50; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING v51; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v52; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD Src[132]; // [rsp+E8h] [rbp-20h] BYREF
  char v56; // [rsp+508h] [rbp+400h] BYREF
  char v57; // [rsp+528h] [rbp+420h] BYREF
  char v58; // [rsp+548h] [rbp+440h] BYREF

  memset(Src, 0, 0x418uLL);
  v47 = 0LL;
  GenerateAudit[2] = 0;
  v10 = 0LL;
  GenerateAudit[3] = 0;
  v51 = 0LL;
  P = 0LL;
  v52 = 0LL;
  GenerateAudit[1] = 0;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  DestinationString = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  v13 = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    v13 = SubjectContext.ClientToken;
  GenerateAudit[0] = SeAuditingWithTokenForSubcategory(117, (__int64)v13);
  if ( GenerateAudit[0] )
  {
    v14 = *(_WORD *)(a2 + 2);
    v15 = PrimaryToken;
    if ( ClientToken )
      v15 = ClientToken;
    if ( (v14 & 0x10) == 0 )
    {
      v16 = 0LL;
LABEL_8:
      v17 = 0LL;
      goto LABEL_18;
    }
    if ( v14 >= 0 )
    {
      v16 = *(ACL **)(a2 + 24);
    }
    else
    {
      v18 = *(unsigned int *)(a2 + 12);
      if ( (_DWORD)v18 )
        v16 = (ACL *)(a2 + v18);
      else
        v16 = 0LL;
    }
    if ( v14 >= 0 )
    {
      v17 = *(ACL **)(a2 + 24);
    }
    else
    {
      v19 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v19 )
        goto LABEL_8;
      v17 = (ACL *)(a2 + v19);
    }
LABEL_18:
    SeExamineSacl(v17, v16, v15, 2u, 1u, GenerateAudit, &GenerateAudit[1]);
    RtlInitUnicodeString(&DestinationString, L"Key");
    v20 = *(_WORD *)(a2 + 2);
    v21 = PrimaryToken;
    if ( ClientToken )
      v21 = ClientToken;
    if ( (v20 & 0x10) == 0 )
      goto LABEL_21;
    if ( v20 >= 0 )
    {
      v22 = *(ACL **)(a2 + 24);
    }
    else
    {
      v23 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v23 )
      {
LABEL_21:
        v22 = 0LL;
        goto LABEL_26;
      }
      v22 = (ACL *)(a2 + v23);
    }
LABEL_26:
    SeExamineGlobalSacl(&DestinationString, v22, v21, 2u, 1u, GenerateAudit, &GenerateAudit[1]);
    if ( !GenerateAudit[0] )
      goto LABEL_63;
    if ( a5 )
    {
      NameString = SepQueryNameString(a5, (PVOID *)&v47);
      if ( NameString < 0 )
        goto LABEL_54;
      if ( v47 )
        v10 = v47;
    }
    v25 = 4096;
    if ( a8 )
    {
      v26 = a7[1];
      v27 = 4096LL;
      if ( v26 < 0x1000 )
        v27 = v26;
      NameString = AdtpBuildRegistryValueString(*a7, v27, *((_QWORD *)a7 + 1), &v51, &GenerateAudit[2]);
      if ( NameString < 0 )
        goto LABEL_54;
      v28 = *a7 + 1872;
      v48.MaximumLength = 26;
      v48.Buffer = (wchar_t *)&v56;
      NameString = AdtpBuildReplacementString(v28, &v48);
      if ( NameString < 0 )
        goto LABEL_54;
      if ( a8 == 2 )
      {
        RtlInitUnicodeString(&v52, L"-");
        RtlInitUnicodeString(&v49, L"-");
LABEL_43:
        WORD1(v50) = 26;
        *((_QWORD *)&v50 + 1) = &v58;
        NameString = AdtpBuildReplacementString((unsigned int)(a8 + 1904), &v50);
        if ( NameString >= 0 )
        {
          CurrentThreadProcess = PsGetCurrentThreadProcess();
          Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
          NameString = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, &P);
          if ( NameString >= 0 )
          {
            LODWORD(Src[0]) = 3;
            v32 = PrimaryToken;
            LODWORD(Src[2]) = 524405;
            if ( ClientToken )
              v32 = ClientToken;
            HIDWORD(Src[0]) = 4657;
            LODWORD(Src[3]) = 4;
            Src[7] = 0x2000000001LL;
            v33 = v32[19];
            Src[11] = 0x800000005LL;
            HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(*(_QWORD *)v33 + 1LL) + 8;
            v34 = (_QWORD **)PrimaryToken;
            if ( ClientToken )
            {
              v34 = (_QWORD **)ClientToken;
              PrimaryToken = ClientToken;
            }
            v35 = *v34[19];
            Src[10] = &SeSubsystemName;
            Src[12] = *((_QWORD *)PrimaryToken + 3);
            Src[6] = v35;
            if ( v10 )
            {
              v36 = *v10;
              LODWORD(Src[15]) = 1;
              HIDWORD(Src[15]) = v36 + 16;
              Src[18] = v10;
            }
            HIDWORD(Src[19]) = *a4 + 16;
            LODWORD(Src[19]) = 1;
            Src[22] = a4;
            Src[23] = 0x80000000BLL;
            IsKernelHandle = ObpIsKernelHandle(a6, 0);
            v43 = v42 ^ 0xFFFFFFFF80000000uLL;
            LODWORD(Src[27]) = v40;
            LODWORD(Src[31]) = v40;
            if ( !IsKernelHandle )
              v43 = v38;
            LODWORD(Src[35]) = v40;
            LODWORD(Src[39]) = v40;
            HIDWORD(Src[27]) = (unsigned __int16)v50 + 16;
            Src[24] = v43 & 0xFFFFFFFFFFFFFFFCuLL;
            Src[30] = &v50;
            Src[54] = P;
            HIDWORD(Src[31]) = v48.Length + 16;
            Src[34] = &v48;
            LODWORD(Src[43]) = v40;
            HIDWORD(Src[35]) = v51.Length + 16;
            Src[38] = &v51;
            Src[47] = __PAIR64__(v41, v39);
            HIDWORD(Src[39]) = v49.Length + 16;
            Src[42] = &v49;
            HIDWORD(Src[43]) = v52.Length + 16;
            Src[46] = &v52;
            v44 = *(unsigned __int16 *)P + 16;
            Src[48] = Flink;
            HIDWORD(Src[51]) = v44;
            LODWORD(Src[51]) = 2;
            LODWORD(Src[1]) = 13;
            SepAdtLogAuditRecord(Src);
            goto LABEL_55;
          }
        }
LABEL_54:
        SepAuditFailed((unsigned int)NameString);
LABEL_55:
        if ( GenerateAudit[2] )
          ExFreePoolWithTag(v51.Buffer, 0);
        if ( GenerateAudit[3] )
          ExFreePoolWithTag(v52.Buffer, 0);
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v47 )
          ExFreePoolWithTag(v47, 0);
        goto LABEL_63;
      }
    }
    else
    {
      RtlInitUnicodeString(&v51, L"-");
      RtlInitUnicodeString(&v48, L"-");
    }
    if ( a7[5] < 0x1000 )
      v25 = a7[5];
    NameString = AdtpBuildRegistryValueString(a7[4], v25, *((_QWORD *)a7 + 3), &v52, &GenerateAudit[3]);
    if ( NameString < 0 )
      goto LABEL_54;
    v29 = a7[4] + 1872;
    v49.MaximumLength = 26;
    v49.Buffer = (wchar_t *)&v57;
    NameString = AdtpBuildReplacementString(v29, &v49);
    if ( NameString < 0 )
      goto LABEL_54;
    goto LABEL_43;
  }
LABEL_63:
  SeReleaseSubjectContext(&SubjectContext);
}
