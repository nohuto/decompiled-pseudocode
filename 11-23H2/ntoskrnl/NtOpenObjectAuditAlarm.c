/*
 * XREFs of NtOpenObjectAuditAlarm @ 0x1407DF750
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     SepProbeAndCaptureString_U @ 0x1406C22F4 (SepProbeAndCaptureString_U.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406C32B8 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C339C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeCheckAuditPrivilege @ 0x1406C35F8 (SeCheckAuditPrivilege.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     SeCaptureSecurityDescriptor @ 0x140736D40 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1407375C0 (SeReleaseSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     SeExamineSacl @ 0x1408A64A0 (SeExamineSacl.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409CC368 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x1409D1E40 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall NtOpenObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK GrantedAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN ObjectCreation,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateOnClose)
{
  BOOLEAN PreviousMode; // r14
  NTSTATUS v14; // edi
  PVOID v15; // rdi
  NTSTATUS v16; // r14d
  __int64 v17; // rdi
  PBOOLEAN v18; // r12
  ULONG PrivilegeCount; // r14d
  unsigned int v20; // ecx
  char *v21; // rdx
  ULONG *Pool2; // rax
  ULONG *v23; // r12
  PVOID v25; // r14
  char v26; // al
  PVOID v27; // rdi
  BOOLEAN v28; // r13
  __int64 v29; // rcx
  NTSTATUS v30; // ebx
  __int16 v31; // ax
  __int64 v32; // rdx
  ACL *v33; // rdx
  __int64 v34; // rax
  ACL *v35; // rcx
  char v36; // [rsp+A0h] [rbp-B8h]
  BOOLEAN GenerateAudit; // [rsp+A2h] [rbp-B6h] BYREF
  BOOLEAN GenerateAlarm[5]; // [rsp+A3h] [rbp-B5h] BYREF
  int v39; // [rsp+A8h] [rbp-B0h]
  unsigned __int16 v40; // [rsp+ACh] [rbp-ACh] BYREF
  PVOID v41; // [rsp+B0h] [rbp-A8h] BYREF
  PVOID Token; // [rsp+B8h] [rbp-A0h] BYREF
  PVOID v43; // [rsp+C0h] [rbp-98h] BYREF
  PVOID P; // [rsp+C8h] [rbp-90h] BYREF
  PVOID v45; // [rsp+D0h] [rbp-88h] BYREF
  PVOID v46; // [rsp+D8h] [rbp-80h]
  __int64 v47; // [rsp+E0h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-70h] BYREF
  ULONG v49; // [rsp+108h] [rbp-50h]
  unsigned int v50; // [rsp+10Ch] [rbp-4Ch]
  size_t Size; // [rsp+110h] [rbp-48h]

  P = 0LL;
  v43 = 0LL;
  v45 = 0LL;
  v41 = 0LL;
  v46 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GenerateAudit = 0;
  GenerateAlarm[0] = 0;
  v47 = 0LL;
  v40 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v36 = PreviousMode;
  GenerateAlarm[1] = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64)&SubjectContext, PreviousMode) )
  {
    v30 = -1073741727;
    goto LABEL_54;
  }
  Token = 0LL;
  v14 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  if ( v14 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v14 != -1073741816 )
    {
      v29 = (unsigned int)v14;
LABEL_51:
      SepAuditFailed(v29);
    }
    return v14;
  }
  v15 = Token;
  if ( *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 1 )
  {
    ObfDereferenceObject(Token);
    v30 = -1073741659;
LABEL_54:
    SeReleaseSubjectContext(&SubjectContext);
    return v30;
  }
  if ( !SecurityDescriptor )
  {
    ObfDereferenceObject(Token);
    v30 = -1073741703;
    goto LABEL_54;
  }
  v16 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, 1, 0, &v41);
  v39 = v16;
  if ( v16 >= 0 && v41 )
  {
    if ( AccessGranted && Privileges )
    {
      if ( ((unsigned __int8)Privileges & 3) != 0 )
        goto LABEL_28;
      v17 = 0x7FFFFFFF0000LL;
      PrivilegeCount = Privileges->PrivilegeCount;
      v49 = PrivilegeCount;
      if ( PrivilegeCount >= 0x43 )
      {
        v14 = -1073741811;
        v39 = -1073741811;
        v18 = GenerateOnClose;
        goto LABEL_29;
      }
      v20 = 12 * PrivilegeCount + 8;
      v50 = v20;
      if ( 12 * PrivilegeCount != -8 )
      {
        v21 = (char *)Privileges + v20;
        if ( (unsigned __int64)v21 > 0x7FFFFFFF0000LL || v21 < (char *)Privileges )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      Size = v20;
      Pool2 = (ULONG *)ExAllocatePool2(256LL, v20, 1917871443LL);
      v23 = Pool2;
      v46 = Pool2;
      if ( !Pool2 )
      {
        SeReleaseSecurityDescriptor(v41, v36, 0);
        ObfDereferenceObject(Token);
        SeReleaseSubjectContext(&SubjectContext);
        v39 = -1073741670;
        SepAuditFailed(3221225626LL);
        return -1073741670;
      }
      memmove(Pool2, Privileges, Size);
      *v23 = PrivilegeCount;
    }
    else
    {
      v17 = 0x7FFFFFFF0000LL;
    }
    if ( !HandleId )
    {
LABEL_13:
      v18 = GenerateOnClose;
      if ( (unsigned __int64)GenerateOnClose < 0x7FFFFFFF0000LL )
        v17 = (__int64)GenerateOnClose;
      *(_BYTE *)v17 = *(_BYTE *)v17;
      v14 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P);
      v39 = v14;
      if ( v14 >= 0 )
      {
        v14 = SepProbeAndCaptureString_U((unsigned __int64)ObjectTypeName, (__int64)&v43);
        v39 = v14;
        if ( v14 >= 0 )
        {
          v14 = SepProbeAndCaptureString_U((unsigned __int64)ObjectName, (__int64)&v45);
          v39 = v14;
        }
      }
LABEL_29:
      if ( v14 >= 0 )
      {
        v25 = v43;
        v26 = SepAdtAuditObjectAccessWithContext(
                0LL,
                (const UNICODE_STRING *)v43,
                AccessGranted,
                AccessGranted == 0,
                (__int64)&SubjectContext,
                0,
                &v40);
        v27 = v41;
        if ( !v26 )
          goto LABEL_31;
        v31 = *((_WORD *)v41 + 1);
        if ( (v31 & 0x10) == 0 )
          goto LABEL_69;
        if ( v31 >= 0 )
        {
          v33 = (ACL *)*((_QWORD *)v41 + 3);
          goto LABEL_71;
        }
        v32 = *((unsigned int *)v41 + 3);
        if ( (_DWORD)v32 )
          v33 = (ACL *)((char *)v41 + v32);
        else
LABEL_69:
          v33 = 0LL;
LABEL_71:
        if ( (v31 & 0x10) == 0 )
          goto LABEL_75;
        if ( v31 >= 0 )
        {
          v35 = (ACL *)*((_QWORD *)v41 + 3);
          goto LABEL_77;
        }
        v34 = *((unsigned int *)v41 + 3);
        if ( (_DWORD)v34 )
          v35 = (ACL *)((char *)v41 + v34);
        else
LABEL_75:
          v35 = 0LL;
LABEL_77:
        SeExamineSacl(v35, v33, Token, GrantedAccess | DesiredAccess, AccessGranted, &GenerateAudit, GenerateAlarm);
        if ( GenerateAudit || GenerateAlarm[0] )
        {
          v27 = v41;
          v25 = v43;
          v28 = SepAdtOpenObjectAuditAlarm(
                  v40,
                  (int)P,
                  (unsigned __int64)&v47 & -(__int64)(HandleId != 0LL),
                  (int)v43,
                  (__int64)v45,
                  v41,
                  (__int64)Token,
                  (__int64)SubjectContext.PrimaryToken,
                  DesiredAccess,
                  GrantedAccess,
                  (__int64)v46,
                  AccessGranted,
                  (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                  2,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  0LL);
LABEL_32:
          if ( !GenerateAudit && !GenerateAlarm[0] && Privileges && AccessGranted )
          {
            v25 = v43;
            SepAdtPrivilegeObjectAuditAlarm(
              (const int *)P,
              (unsigned __int16 *)v43,
              (unsigned __int16 *)v45,
              v47,
              (__int64)Token,
              (__int64)SubjectContext.PrimaryToken,
              (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
              DesiredAccess,
              (int *)v46,
              AccessGranted);
            v28 = 0;
            v27 = v41;
          }
          SeReleaseSecurityDescriptor(v27, v36, 0);
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( v25 )
            ExFreePoolWithTag(v25, 0);
          if ( v45 )
            ExFreePoolWithTag(v45, 0);
          if ( v46 )
            ExFreePoolWithTag(v46, 0);
          ObfDereferenceObject(Token);
          SeReleaseSubjectContext(&SubjectContext);
          *v18 = v28;
          return 0;
        }
LABEL_31:
        v28 = 0;
        goto LABEL_32;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v43 )
        ExFreePoolWithTag(v43, 0);
      if ( v45 )
        ExFreePoolWithTag(v45, 0);
      if ( v46 )
        ExFreePoolWithTag(v46, 0);
      SeReleaseSecurityDescriptor(v41, v36, 0);
      ObfDereferenceObject(Token);
      SeReleaseSubjectContext(&SubjectContext);
      if ( v14 == -1073741670 )
      {
        v29 = 3221225626LL;
        goto LABEL_51;
      }
      return v14;
    }
    if ( ((unsigned __int8)HandleId & 7) == 0 )
    {
      v47 = *(_QWORD *)HandleId;
      goto LABEL_13;
    }
LABEL_28:
    ExRaiseDatatypeMisalignment();
  }
  ObfDereferenceObject(v15);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v16 == -1073741670 )
    SepAuditFailed(3221225626LL);
  return v16;
}
