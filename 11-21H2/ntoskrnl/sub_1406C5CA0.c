/*
 * XREFs of sub_1406C5CA0 @ 0x1406C5CA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140723E0C @ 0x140723E0C (sub_140723E0C.c)
 *     sub_140723F80 @ 0x140723F80 (sub_140723F80.c)
 *     sub_140724008 @ 0x140724008 (sub_140724008.c)
 *     sub_1407241BC @ 0x1407241BC (sub_1407241BC.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409C8EE8 @ 0x1409C8EE8 (sub_1409C8EE8.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406C5CA0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        HANDLE Handle,
        int a7,
        int a8,
        char *Src,
        int a10,
        BOOLEAN AccessGranted,
        _BYTE *a12)
{
  __int64 v12; // r14
  KPROCESSOR_MODE v14; // r12
  __int64 v15; // rdx
  int v16; // edx
  NTSTATUS v17; // edi
  PVOID v18; // rdi
  __int64 v19; // rdx
  int v20; // esi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  unsigned int v24; // r14d
  unsigned int v25; // ecx
  char *v26; // rdx
  unsigned int *Pool2; // rax
  __int64 v28; // rdx
  __int64 v29; // r9
  unsigned int *v30; // r12
  PVOID v32; // r14
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // r9
  PVOID v36; // rdi
  char v37; // r13
  unsigned int v38; // ebx
  __int64 v39; // rcx
  __int16 v40; // ax
  __int64 v41; // rdx
  ACL *v42; // rdx
  __int64 v43; // rax
  ACL *v44; // rcx
  int HandleInformation; // [rsp+28h] [rbp-130h]
  BOOLEAN GenerateAudit; // [rsp+A1h] [rbp-B7h] BYREF
  BOOLEAN GenerateAlarm; // [rsp+A2h] [rbp-B6h] BYREF
  KPROCESSOR_MODE v48; // [rsp+A3h] [rbp-B5h]
  KPROCESSOR_MODE v49; // [rsp+A4h] [rbp-B4h]
  int v50; // [rsp+A8h] [rbp-B0h]
  unsigned __int16 v51; // [rsp+ACh] [rbp-ACh] BYREF
  PVOID v52; // [rsp+B0h] [rbp-A8h] BYREF
  PVOID Token; // [rsp+B8h] [rbp-A0h] BYREF
  PVOID v54; // [rsp+C0h] [rbp-98h] BYREF
  PVOID P; // [rsp+C8h] [rbp-90h] BYREF
  PVOID v56; // [rsp+D0h] [rbp-88h] BYREF
  PVOID v57; // [rsp+D8h] [rbp-80h]
  __int64 v58; // [rsp+E0h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-70h] BYREF
  unsigned int v60; // [rsp+108h] [rbp-50h]
  unsigned int v61; // [rsp+10Ch] [rbp-4Ch]
  size_t Size; // [rsp+110h] [rbp-48h]

  v12 = a3;
  P = 0LL;
  v54 = 0LL;
  v56 = 0LL;
  v52 = 0LL;
  v57 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GenerateAudit = 0;
  GenerateAlarm = 0;
  v58 = 0LL;
  v51 = 0;
  v14 = *((_BYTE *)KeGetCurrentThread() + 562);
  v48 = v14;
  v49 = v14;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v15) = v14;
  if ( !(unsigned __int8)sub_140724008(&SubjectContext, v15) )
  {
    v38 = -1073741727;
LABEL_54:
    SeReleaseSubjectContext(&SubjectContext);
    return v38;
  }
  Token = 0LL;
  v17 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)SeTokenObjectType, v14, &Token, 0LL);
  if ( v17 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v17 != -1073741816 )
    {
      v39 = (unsigned int)v17;
LABEL_50:
      sub_1409CF1A0(v39);
    }
    return (unsigned int)v17;
  }
  v18 = Token;
  if ( *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 1 )
  {
    ObfDereferenceObject(Token);
    v38 = -1073741659;
    goto LABEL_54;
  }
  if ( !a5 )
  {
    ObfDereferenceObject(Token);
    v38 = -1073741703;
    goto LABEL_54;
  }
  LOBYTE(v16) = v14;
  v20 = SeCaptureSecurityDescriptor(a5, v16, 1, 0, (__int64)&v52);
  v50 = v20;
  if ( v20 >= 0 && v52 )
  {
    if ( AccessGranted && Src )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        goto LABEL_29;
      v23 = 0x7FFFFFFF0000LL;
      v24 = *(_DWORD *)Src;
      v60 = v24;
      if ( v24 >= 0x43 )
      {
        v17 = -1073741811;
        v50 = -1073741811;
        goto LABEL_30;
      }
      v25 = 12 * v24 + 8;
      v61 = v25;
      if ( 12 * v24 != -8 )
      {
        v26 = &Src[v25];
        if ( (unsigned __int64)v26 > 0x7FFFFFFF0000LL || v26 < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      Size = v25;
      Pool2 = (unsigned int *)ExAllocatePool2(256LL, v25, 1917871443LL);
      v30 = Pool2;
      v57 = Pool2;
      if ( !Pool2 )
      {
        LOBYTE(v28) = v48;
        SeReleaseSecurityDescriptor(v52, v28, 0LL, v29);
        ObfDereferenceObject(Token);
        SeReleaseSubjectContext(&SubjectContext);
        v50 = -1073741670;
        sub_1409CF1A0(3221225626LL);
        return 3221225626LL;
      }
      memmove(Pool2, Src, Size);
      *v30 = v24;
      v14 = v48;
      v12 = a3;
    }
    else
    {
      v23 = 0x7FFFFFFF0000LL;
    }
    if ( !a2 )
    {
LABEL_20:
      if ( (unsigned __int64)a12 < 0x7FFFFFFF0000LL )
        v23 = (__int64)a12;
      *(_BYTE *)v23 = *(_BYTE *)v23;
      v17 = sub_140723E0C(a1, &P);
      v50 = v17;
      if ( v17 >= 0 )
      {
        v17 = sub_140723E0C(v12, &v54);
        v50 = v17;
        if ( v17 >= 0 )
        {
          v17 = sub_140723E0C(a4, &v56);
          v50 = v17;
        }
      }
LABEL_30:
      if ( v17 >= 0 )
      {
        LOBYTE(v22) = AccessGranted == 0;
        LOBYTE(HandleInformation) = 0;
        LOBYTE(v21) = AccessGranted;
        v32 = v54;
        v33 = sub_140723F80(0LL, v54, v21, v22, &SubjectContext, HandleInformation, &v51);
        v36 = v52;
        if ( !v33 )
          goto LABEL_32;
        v40 = *((_WORD *)v52 + 1);
        if ( (v40 & 0x10) == 0 )
          goto LABEL_69;
        if ( v40 >= 0 )
        {
          v42 = (ACL *)*((_QWORD *)v52 + 3);
          goto LABEL_71;
        }
        v41 = *((unsigned int *)v52 + 3);
        if ( (_DWORD)v41 )
          v42 = (ACL *)((char *)v52 + v41);
        else
LABEL_69:
          v42 = 0LL;
LABEL_71:
        if ( (v40 & 0x10) == 0 )
          goto LABEL_75;
        if ( v40 >= 0 )
        {
          v44 = (ACL *)*((_QWORD *)v52 + 3);
          goto LABEL_77;
        }
        v43 = *((unsigned int *)v52 + 3);
        if ( (_DWORD)v43 )
          v44 = (ACL *)((char *)v52 + v43);
        else
LABEL_75:
          v44 = 0LL;
LABEL_77:
        SeExamineSacl(v44, v42, Token, a8 | a7, AccessGranted, &GenerateAudit, &GenerateAlarm);
        if ( GenerateAudit || GenerateAlarm )
        {
          v36 = v52;
          v32 = v54;
          v37 = sub_1409C8EE8(
                  v51,
                  (int)P,
                  (unsigned __int64)&v58 & -(__int64)(a2 != 0LL),
                  (int)v54,
                  (__int64)v56,
                  v52,
                  (__int64)Token,
                  (__int64)SubjectContext.PrimaryToken,
                  a7,
                  a8,
                  (__int64)v57,
                  AccessGranted,
                  *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL),
                  2,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  0LL);
LABEL_33:
          if ( !GenerateAudit && !GenerateAlarm && Src && AccessGranted )
          {
            v32 = v54;
            sub_1407241BC(
              (_DWORD)P,
              (_DWORD)v54,
              (_DWORD)v56,
              v58,
              (__int64)Token,
              (__int64)SubjectContext.PrimaryToken,
              *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL),
              a7,
              (__int64)v57,
              AccessGranted);
            v37 = 0;
            v36 = v52;
          }
          LOBYTE(v34) = v14;
          SeReleaseSecurityDescriptor(v36, v34, 0LL, v35);
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( v32 )
            ExFreePoolWithTag(v32, 0);
          if ( v56 )
            ExFreePoolWithTag(v56, 0);
          if ( v57 )
            ExFreePoolWithTag(v57, 0);
          ObfDereferenceObject(Token);
          SeReleaseSubjectContext(&SubjectContext);
          *a12 = v37;
          return 0LL;
        }
LABEL_32:
        v37 = 0;
        goto LABEL_33;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v54 )
        ExFreePoolWithTag(v54, 0);
      if ( v56 )
        ExFreePoolWithTag(v56, 0);
      if ( v57 )
        ExFreePoolWithTag(v57, 0);
      LOBYTE(v19) = v14;
      SeReleaseSecurityDescriptor(v52, v19, 0LL, v22);
      ObfDereferenceObject(Token);
      SeReleaseSubjectContext(&SubjectContext);
      if ( v17 == -1073741670 )
      {
        v39 = 3221225626LL;
        goto LABEL_50;
      }
      return (unsigned int)v17;
    }
    if ( ((unsigned __int8)a2 & 7) == 0 )
    {
      v58 = *a2;
      goto LABEL_20;
    }
LABEL_29:
    ExRaiseDatatypeMisalignment();
  }
  ObfDereferenceObject(v18);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v20 == -1073741670 )
    sub_1409CF1A0(3221225626LL);
  return (unsigned int)v20;
}
