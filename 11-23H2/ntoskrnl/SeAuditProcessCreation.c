/*
 * XREFs of SeAuditProcessCreation @ 0x140840FC4
 * Callers:
 *     PspInsertProcess @ 0x1406B9FD4 (PspInsertProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140232A90 (PsReferencePrimaryTokenWithTag.c)
 *     PsQueryProcessCommandLine @ 0x140354890 (PsQueryProcessCommandLine.c)
 *     SepAdtLogAuditRecord @ 0x14039B960 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsLookupProcessByProcessId @ 0x1406FA580 (PsLookupProcessByProcessId.c)
 *     RtlCopySid @ 0x140715180 (RtlCopySid.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140742964 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAuditFailed @ 0x1409D1E40 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall SeAuditProcessCreation(_QWORD *BugCheckParameter1, UNICODE_STRING *a2)
{
  char v3; // si
  UNICODE_STRING *Pool2; // rdi
  unsigned int v5; // r13d
  void *v6; // rbx
  int AllocatedFullProcessImageName; // r14d
  void *v8; // rbx
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // rsi
  int v11; // ecx
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbx
  _BYTE *v15; // r14
  __int64 v16; // rdx
  bool v17; // r8
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22[3]; // [rsp+34h] [rbp-CCh] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  PVOID v24; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING *v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  void *v28; // [rsp+70h] [rbp-90h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-88h] BYREF
  _QWORD Src[132]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE DestinationSid[80]; // [rsp+4C0h] [rbp+3C0h] BYREF

  v26 = a2;
  v3 = 0;
  memset(v22, 0, sizeof(v22));
  Pool2 = 0LL;
  v5 = 0;
  P = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v24 = 0LL;
  DestinationString = 0LL;
  if ( !BugCheckParameter1[184] )
    return;
  v6 = (void *)BugCheckParameter1[168];
  v27 = BugCheckParameter1[136];
  v28 = v6;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)BugCheckParameter1);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( PsLookupProcessByProcessId(v6, (PEPROCESS *)&v22[1]) < 0 )
    {
      v5 = 1845;
    }
    else
    {
      v8 = *(void **)&v22[1];
      if ( *(_QWORD *)(*(_QWORD *)&v22[1] + 1472LL) )
        PsGetAllocatedFullProcessImageNameEx(*(__int64 *)&v22[1]);
      else
        v5 = 1844;
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
    }
    v9 = PsReferencePrimaryTokenWithTag((__int64)BugCheckParameter1, 0x746C6644u);
    v10 = v9;
    if ( v9 )
    {
      v11 = *(_DWORD *)(*(_QWORD *)(v9 + 216) + 32LL);
      if ( (v11 & 4) != 0 )
        v12 = 1938LL;
      else
        v12 = (v11 & 2 | 0xF20uLL) >> 1;
      v13 = *(unsigned int *)(v9 + 208);
      v14 = *(_QWORD *)(v10 + 24);
      *(_QWORD *)&v22[1] = v14;
      if ( (unsigned int)v13 >= *(_DWORD *)(v10 + 124) )
      {
        v15 = SeNullSid;
LABEL_13:
        ObfDereferenceObject((PVOID)v10);
        if ( SepRmAuditProcessCommandLine )
        {
          if ( v26 )
          {
            Pool2 = v26;
            goto LABEL_15;
          }
          if ( (unsigned int)PsQueryProcessCommandLine((ULONG_PTR)BugCheckParameter1, 0LL, 0, 0, v22) == -1073741820 )
          {
            Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, v22[0], 1279485267LL);
            if ( Pool2 )
            {
              if ( (int)PsQueryProcessCommandLine((ULONG_PTR)BugCheckParameter1, (__int64)Pool2, v22[0], 0, v22) >= 0 )
              {
                v3 = 1;
                goto LABEL_16;
              }
              ExFreePoolWithTag(Pool2, 0);
            }
          }
        }
        RtlInitUnicodeString(&DestinationString, &word_140888010);
        Pool2 = &DestinationString;
LABEL_15:
        v3 = 0;
LABEL_16:
        SeCaptureSubjectContext(&SubjectContext);
        memset(Src, 0, 0x418uLL);
        Src[0] = 0x125000000005LL;
        LODWORD(Src[2]) = 524422;
        v16 = **((_QWORD **)SubjectContext.PrimaryToken + 19);
        v17 = *((_QWORD *)SubjectContext.PrimaryToken + 3) != __PAIR64__(v22[2], v14);
        v18 = *(unsigned __int8 *)(v16 + 1);
        Src[12] = *((_QWORD *)SubjectContext.PrimaryToken + 3);
        Src[16] = v27;
        Src[6] = v16;
        HIDWORD(Src[3]) = 4 * v18 + 8;
        LODWORD(Src[3]) = 4;
        Src[10] = &SeSubsystemName;
        Src[22] = P;
        Src[7] = 0x2000000001LL;
        v19 = *(unsigned __int16 *)P + 16;
        Src[11] = 0x800000005LL;
        HIDWORD(Src[19]) = v19;
        Src[28] = v28;
        v20 = Pool2->Length + 16;
        Src[15] = 0x80000000BLL;
        LODWORD(Src[19]) = 2;
        Src[23] = 0x400000015LL;
        Src[24] = v12;
        Src[27] = 0x80000000BLL;
        LODWORD(Src[31]) = 34;
        HIDWORD(Src[31]) = v20;
        Src[34] = Pool2;
        if ( v17 )
        {
          Src[35] = 0x800000023LL;
          Src[36] = v14;
        }
        else
        {
          LODWORD(Src[35]) = 6;
        }
        if ( v5 )
        {
          Src[40] = v5;
          Src[39] = 0x400000015LL;
        }
        else
        {
          LODWORD(Src[39]) = 2;
          Src[42] = v24;
          HIDWORD(Src[39]) = *(unsigned __int16 *)v24 + 16;
        }
        v21 = (unsigned __int8)v15[1];
        LODWORD(Src[43]) = 4;
        Src[46] = v15;
        LODWORD(Src[1]) = 11;
        HIDWORD(Src[43]) = 4 * v21 + 8;
        SepAdtLogAuditRecord(Src);
        SeReleaseSubjectContext(&SubjectContext);
        goto LABEL_21;
      }
      AllocatedFullProcessImageName = RtlCopySid(0x44u, DestinationSid, *(PSID *)(*(_QWORD *)(v10 + 152) + 16 * v13));
      if ( AllocatedFullProcessImageName >= 0 )
      {
        v15 = DestinationSid;
        goto LABEL_13;
      }
      ObfDereferenceObject((PVOID)v10);
    }
    else
    {
      AllocatedFullProcessImageName = -1073741700;
    }
    v3 = 0;
  }
  SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
LABEL_21:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  if ( v3 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
}
