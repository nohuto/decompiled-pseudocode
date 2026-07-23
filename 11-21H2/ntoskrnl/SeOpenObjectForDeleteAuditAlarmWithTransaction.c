/*
 * XREFs of SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB230
 * Callers:
 *     SeOpenObjectForDeleteAuditAlarm @ 0x1409CB1D0 (SeOpenObjectForDeleteAuditAlarm.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     sub_140696CCC @ 0x140696CCC (sub_140696CCC.c)
 *     sub_140723F80 @ 0x140723F80 (sub_140723F80.c)
 *     sub_14072427C @ 0x14072427C (sub_14072427C.c)
 *     sub_140882A70 @ 0x140882A70 (sub_140882A70.c)
 *     sub_1409C8EE8 @ 0x1409C8EE8 (sub_1409C8EE8.c)
 *     sub_1409C9784 @ 0x1409C9784 (sub_1409C9784.c)
 *     sub_1409CA168 @ 0x1409CA168 (sub_1409CA168.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __stdcall SeOpenObjectForDeleteAuditAlarmWithTransaction(
        PUNICODE_STRING ObjectTypeName,
        PVOID Object,
        PUNICODE_STRING AbsoluteObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PACCESS_STATE AccessState,
        BOOLEAN ObjectCreated,
        BOOLEAN AccessGranted,
        KPROCESSOR_MODE AccessMode,
        GUID *TransactionId,
        PBOOLEAN GenerateOnClose)
{
  const UNICODE_STRING *v11; // rax
  PVOID v12; // r10
  BOOLEAN v13; // r15
  BOOLEAN v14; // r13
  PVOID v15; // r12
  UNICODE_STRING *v16; // rsi
  UNICODE_STRING *v17; // r14
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdx
  int v19; // eax
  ACCESS_MASK v20; // r15d
  __int16 v21; // ax
  ACL *v22; // rdx
  ACL *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  BOOLEAN v26; // r13
  __int16 v27; // ax
  ACL *v28; // rdx
  __int64 v29; // rax
  int *v30; // rcx
  unsigned __int16 *v31; // rdx
  __int128 *v32; // rax
  GUID *v33; // r15
  wchar_t *Buffer; // rcx
  wchar_t *Pool2; // rax
  wchar_t *v36; // rcx
  wchar_t *v37; // rax
  int v38; // [rsp+40h] [rbp-91h]
  int v39; // [rsp+58h] [rbp-79h]
  BOOLEAN GenerateAudit; // [rsp+A8h] [rbp-29h] BYREF
  BOOLEAN GenerateAlarm[3]; // [rsp+A9h] [rbp-28h] BYREF
  unsigned __int16 v42[2]; // [rsp+ACh] [rbp-25h] BYREF
  int v43; // [rsp+B0h] [rbp-21h]
  int **AuxData; // [rsp+B8h] [rbp-19h]
  PVOID v45; // [rsp+C0h] [rbp-11h] BYREF
  PACCESS_TOKEN Token; // [rsp+C8h] [rbp-9h]
  PVOID P; // [rsp+D0h] [rbp-1h] BYREF

  v11 = ObjectTypeName;
  v12 = Object;
  v13 = 0;
  GenerateAudit = 0;
  v14 = 0;
  GenerateAlarm[0] = 0;
  v15 = 0LL;
  P = 0LL;
  v16 = 0LL;
  v45 = 0LL;
  v17 = 0LL;
  v43 = 0;
  v42[0] = 999;
  if ( AccessMode )
  {
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    AuxData = (int **)AccessState->AuxData;
    Token = AccessState->SubjectSecurityContext.ClientToken;
    if ( !Token )
      Token = AccessState->SubjectSecurityContext.PrimaryToken;
    if ( ObjectTypeName && ObjectTypeName->Length )
    {
      v17 = ObjectTypeName;
    }
    else if ( v12 )
    {
      v19 = sub_1409CA168((__int64)v12, &v45);
      v15 = v45;
      v43 = v19;
      if ( v19 < 0 )
        goto LABEL_66;
      v11 = ObjectTypeName;
      p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
      v12 = Object;
      if ( v45 )
        v17 = (UNICODE_STRING *)v45;
    }
    if ( !SecurityDescriptor
      || !(unsigned __int8)sub_140723F80(
                             (__int64)v12,
                             v11,
                             AccessGranted,
                             AccessGranted == 0,
                             (__int64)p_SubjectSecurityContext,
                             1,
                             v42) )
    {
      goto LABEL_34;
    }
    v20 = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
    v21 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v21 & 0x10) != 0 )
    {
      if ( v21 >= 0 )
      {
        v22 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v24 = *((unsigned int *)SecurityDescriptor + 3);
        if ( (_DWORD)v24 )
          v22 = (ACL *)((char *)SecurityDescriptor + v24);
        else
          v22 = 0LL;
      }
      if ( v21 >= 0 )
      {
        v23 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
        goto LABEL_25;
      }
      v25 = *((unsigned int *)SecurityDescriptor + 3);
      if ( (_DWORD)v25 )
      {
        v23 = (ACL *)((char *)SecurityDescriptor + v25);
        goto LABEL_25;
      }
    }
    else
    {
      v22 = 0LL;
    }
    v23 = 0LL;
LABEL_25:
    v26 = AccessGranted;
    SeExamineSacl(v23, v22, Token, v20, AccessGranted, &GenerateAudit, GenerateAlarm);
    v27 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v27 & 0x10) == 0 )
      goto LABEL_26;
    if ( v27 >= 0 )
    {
      v28 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      goto LABEL_31;
    }
    v29 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v29 )
      v28 = (ACL *)((char *)SecurityDescriptor + v29);
    else
LABEL_26:
      v28 = 0LL;
LABEL_31:
    sub_140882A70(
      (__int64)ObjectTypeName,
      v28,
      Token,
      v20,
      AccessGranted,
      (__int64)&GenerateAudit,
      (char *)GenerateAlarm);
    v13 = GenerateAudit;
    if ( GenerateAudit )
    {
      *GenerateOnClose = 1;
LABEL_42:
      AccessState->GenerateAudit = 1;
      if ( AbsoluteObjectName && AbsoluteObjectName->Length )
      {
        v16 = AbsoluteObjectName;
        goto LABEL_49;
      }
      if ( !Object )
      {
LABEL_49:
        if ( v26 )
        {
          v33 = (GUID *)AuxData;
          sub_1409C9784(
            v42[0],
            (__int64)p_SubjectSecurityContext,
            (__int64)AbsoluteObjectName,
            &v17->Length,
            &v16->Length,
            (__int64)AccessState->SubjectSecurityContext.ClientToken,
            (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
            v38,
            AccessState->PreviouslyGrantedAccess,
            *AuxData,
            v39,
            (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
            (__int128 *)TransactionId);
          if ( v16 )
          {
            Buffer = AccessState->ObjectName.Buffer;
            if ( Buffer )
            {
              ExFreePoolWithTag(Buffer, 0);
              AccessState->ObjectName.Length = 0;
              AccessState->ObjectName.MaximumLength = 0;
            }
            Pool2 = (wchar_t *)ExAllocatePool2(256LL, v16->MaximumLength, 538994003LL);
            AccessState->ObjectName.Buffer = Pool2;
            if ( Pool2 )
            {
              AccessState->ObjectName.MaximumLength = v16->MaximumLength;
              RtlCopyUnicodeString(&AccessState->ObjectName, v16);
            }
            v33 = (GUID *)AuxData;
          }
          if ( v17 )
          {
            v36 = AccessState->ObjectTypeName.Buffer;
            if ( v36 )
            {
              ExFreePoolWithTag(v36, 0);
              AccessState->ObjectTypeName.Length = 0;
              AccessState->ObjectTypeName.MaximumLength = 0;
            }
            v37 = (wchar_t *)ExAllocatePool2(256LL, v17->MaximumLength, 538994003LL);
            AccessState->ObjectTypeName.Buffer = v37;
            if ( v37 )
            {
              AccessState->ObjectTypeName.MaximumLength = v17->MaximumLength;
              RtlCopyUnicodeString(&AccessState->ObjectTypeName, v17);
            }
          }
          if ( TransactionId )
            v33[2] = *TransactionId;
        }
        else
        {
          v32 = (__int128 *)TransactionId;
          if ( !TransactionId )
            v32 = (__int128 *)(AuxData + 4);
          sub_1409C8EE8(
            v42[0],
            &qword_140001B08,
            0LL,
            &v17->Length,
            &v16->Length,
            (__int16 *)SecurityDescriptor,
            (_QWORD *)AccessState->SubjectSecurityContext.ClientToken,
            (_QWORD *)AccessState->SubjectSecurityContext.PrimaryToken,
            AccessState->OriginalDesiredAccess,
            AccessState->PreviouslyGrantedAccess,
            *AuxData,
            0,
            (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
            2,
            0LL,
            0,
            0LL,
            v32,
            (__int64)AccessState);
        }
        goto LABEL_66;
      }
      v43 = sub_140696CCC((__int64)Object, &P);
      if ( v43 >= 0 )
      {
        if ( P )
          v16 = (UNICODE_STRING *)P;
        goto LABEL_49;
      }
LABEL_66:
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
LABEL_70:
      if ( v43 < 0 )
        sub_1409CF1A0((unsigned int)v43);
      return;
    }
    v14 = GenerateAlarm[0];
LABEL_34:
    if ( AccessGranted )
    {
      v30 = *AuxData;
      if ( *AuxData )
      {
        if ( *v30 )
        {
          v31 = v42;
          LOBYTE(v31) = AccessGranted;
          if ( sub_14072427C((unsigned int *)v30, (__int64)v31, 0LL, (__int64)&AccessState->SubjectSecurityContext, v42) )
          {
            v13 = 1;
            AccessState->AuditPrivileges = 1;
          }
        }
      }
    }
    if ( !v13 && !v14 )
      goto LABEL_70;
    v26 = AccessGranted;
    goto LABEL_42;
  }
}
