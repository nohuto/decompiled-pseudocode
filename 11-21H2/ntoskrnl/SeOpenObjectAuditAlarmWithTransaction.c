/*
 * XREFs of SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90
 * Callers:
 *     sub_140668AEC @ 0x140668AEC (sub_140668AEC.c)
 *     SeOpenObjectAuditAlarm @ 0x140669A30 (SeOpenObjectAuditAlarm.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407F7AD0 @ 0x1407F7AD0 (sub_1407F7AD0.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     sub_1405F4040 @ 0x1405F4040 (sub_1405F4040.c)
 *     sub_140696CCC @ 0x140696CCC (sub_140696CCC.c)
 *     sub_14072427C @ 0x14072427C (sub_14072427C.c)
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_140882966 @ 0x140882966 (sub_140882966.c)
 *     sub_140882A70 @ 0x140882A70 (sub_140882A70.c)
 *     sub_1409C8EE8 @ 0x1409C8EE8 (sub_1409C8EE8.c)
 *     sub_1409C9C64 @ 0x1409C9C64 (sub_1409C9C64.c)
 *     sub_1409CA168 @ 0x1409CA168 (sub_1409CA168.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 *     sub_1409CE4F8 @ 0x1409CE4F8 (sub_1409CE4F8.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __stdcall SeOpenObjectAuditAlarmWithTransaction(
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
  unsigned __int16 v10; // di
  PUNICODE_STRING v11; // r10
  UNICODE_STRING *v12; // rbx
  const UNICODE_STRING *v13; // r11
  _BYTE *ClientToken; // rdx
  GUID *AuxData; // r12
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // r14
  PACCESS_TOKEN PrimaryToken; // rsi
  int v18; // ebx
  char v19; // di
  BOOLEAN v20; // r14
  SECURITY_SUBJECT_CONTEXT *v21; // rbx
  BOOLEAN v22; // r10
  unsigned __int8 v23; // al
  unsigned __int8 v24; // al
  _DWORD *v25; // rcx
  char v26; // al
  unsigned int v27; // r8d
  __int16 v28; // r10
  __int16 v29; // r11
  int v30; // r9d
  ACCESS_MASK v31; // edi
  __int16 v32; // ax
  ACL *v33; // rdx
  ACL *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int16 v37; // ax
  char *v38; // rdx
  __int64 v39; // rax
  __int16 v40; // ax
  __int64 v41; // rcx
  __int64 v42; // rax
  const UNICODE_STRING *v43; // rsi
  PVOID v44; // rcx
  int v45; // eax
  GUID *v46; // rax
  __int64 v47; // rdx
  wchar_t *Buffer; // rcx
  wchar_t *Pool2; // rax
  wchar_t *v50; // rcx
  wchar_t *v51; // rax
  const UNICODE_STRING *v52; // rdx
  int v53; // [rsp+20h] [rbp-100h]
  int v54; // [rsp+48h] [rbp-D8h]
  BOOLEAN GenerateAudit; // [rsp+A0h] [rbp-80h] BYREF
  BOOLEAN GenerateAlarm[7]; // [rsp+A1h] [rbp-7Fh] BYREF
  PCUNICODE_STRING v57; // [rsp+A8h] [rbp-78h]
  __int16 v58[2]; // [rsp+B0h] [rbp-70h] BYREF
  int v59; // [rsp+B4h] [rbp-6Ch]
  int v60; // [rsp+B8h] [rbp-68h]
  const UNICODE_STRING *v61; // [rsp+C0h] [rbp-60h] BYREF
  const UNICODE_STRING *v62; // [rsp+C8h] [rbp-58h]
  PVOID P; // [rsp+D0h] [rbp-50h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-48h] BYREF
  PUNICODE_STRING SourceString; // [rsp+160h] [rbp+40h]
  unsigned int *v68; // [rsp+168h] [rbp+48h]
  unsigned __int8 AccessModea; // [rsp+188h] [rbp+68h]

  v68 = (unsigned int *)SecurityDescriptor;
  SourceString = AbsoluteObjectName;
  v10 = 999;
  v11 = ObjectTypeName;
  v12 = 0LL;
  GenerateAudit = 0;
  v13 = 0LL;
  GenerateAlarm[0] = 0;
  P = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v57 = 0LL;
  v59 = 0;
  v58[0] = 999;
  if ( !AccessMode )
    return;
  ClientToken = AccessState->SubjectSecurityContext.ClientToken;
  AuxData = (GUID *)AccessState->AuxData;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
  if ( ClientToken )
    PrimaryToken = AccessState->SubjectSecurityContext.ClientToken;
  else
    PrimaryToken = AccessState->SubjectSecurityContext.PrimaryToken;
  if ( !SecurityDescriptor )
    goto LABEL_23;
  v10 = 118;
  v60 = 118;
  v58[0] = 118;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  LOBYTE(AbsoluteObjectName) = AccessGranted == 0;
  v18 = (AccessGranted != 0 ? 3 : 0) | 0x30;
  AccessModea = AccessGranted == 0;
  if ( AccessGranted )
    v18 = AccessGranted != 0 ? 3 : 0;
  if ( !dword_140C1B348 )
  {
    v20 = GenerateAudit;
    v21 = &AccessState->SubjectSecurityContext;
    goto LABEL_13;
  }
  if ( (v18 & dword_140C1B348) == 0 )
  {
    v19 = 0;
    if ( !dword_140C1B508 )
    {
      v20 = GenerateAudit;
LABEL_11:
      v21 = &AccessState->SubjectSecurityContext;
LABEL_12:
      v10 = v60;
      goto LABEL_13;
    }
    if ( AccessState == (PACCESS_STATE)-32LL )
    {
      p_SubjectSecurityContext = &SubjectContext;
      SeCaptureSubjectContext(&SubjectContext);
      ClientToken = SubjectContext.ClientToken;
      SecurityDescriptor = v68;
      AbsoluteObjectName = (PUNICODE_STRING)AccessModea;
      v13 = v57;
      v11 = ObjectTypeName;
    }
    if ( ClientToken || (ClientToken = p_SubjectSecurityContext->PrimaryToken) != 0LL )
    {
      if ( ClientToken[118] != 2 )
      {
LABEL_56:
        v21 = &AccessState->SubjectSecurityContext;
        if ( AccessState == (PACCESS_STATE)-32LL )
        {
          SeReleaseSubjectContext(p_SubjectSecurityContext);
          SecurityDescriptor = v68;
          AbsoluteObjectName = (PUNICODE_STRING)AccessModea;
          v13 = v57;
          v11 = ObjectTypeName;
        }
        if ( !v19 )
        {
          v20 = GenerateAudit;
          goto LABEL_12;
        }
        p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
        goto LABEL_58;
      }
      v27 = 16;
      v28 = 0;
      v29 = 0;
      do
      {
        v30 = (unsigned __int8)ClientToken[((unsigned __int64)v27 >> 1) + 88] >> (4 * (v27 & 1));
        if ( (v30 & 1) != 0 )
        {
          if ( (v18 & 2) != 0 )
            goto LABEL_54;
          ++v28;
        }
        if ( (v30 & 4) != 0 )
        {
          if ( (v18 & 0x20) != 0 )
            goto LABEL_54;
          ++v29;
        }
        ++v27;
      }
      while ( v27 < 0x1E );
      if ( (v18 & 1) != 0 && v28 == 14 || (v18 & 0x10) != 0 && v29 == 14 )
LABEL_54:
        v19 = 1;
    }
    else
    {
      sub_1409CF1A0(3221225596LL);
    }
    v11 = ObjectTypeName;
    v13 = v57;
    AbsoluteObjectName = (PUNICODE_STRING)AccessModea;
    SecurityDescriptor = v68;
    goto LABEL_56;
  }
LABEL_58:
  v10 = sub_140882966(Object, v11, AccessGranted, (unsigned __int8)AbsoluteObjectName);
  v60 = v10;
  v58[0] = v10;
  if ( (unsigned __int8)sub_140724320(v10, AccessGranted, AccessModea, p_SubjectSecurityContext) )
  {
    v31 = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
    v32 = *((_WORD *)v68 + 1);
    if ( (v32 & 0x10) != 0 )
    {
      if ( v32 >= 0 )
      {
        v33 = (ACL *)*((_QWORD *)v68 + 3);
      }
      else
      {
        v35 = v68[3];
        if ( (_DWORD)v35 )
          v33 = (ACL *)((char *)v68 + v35);
        else
          v33 = 0LL;
      }
      if ( v32 >= 0 )
      {
        v34 = (ACL *)*((_QWORD *)v68 + 3);
      }
      else
      {
        v36 = v68[3];
        if ( (_DWORD)v36 )
          v34 = (ACL *)((char *)v68 + v36);
        else
          v34 = 0LL;
      }
    }
    else
    {
      v33 = 0LL;
      v34 = 0LL;
    }
    SeExamineSacl(v34, v33, PrimaryToken, v31, AccessGranted, &GenerateAudit, GenerateAlarm);
    v37 = *((_WORD *)v68 + 1);
    if ( (v37 & 0x10) != 0 )
    {
      if ( v37 >= 0 )
      {
        v38 = (char *)*((_QWORD *)v68 + 3);
      }
      else
      {
        v39 = v68[3];
        if ( (_DWORD)v39 )
          v38 = (char *)v68 + v39;
        else
          v38 = 0LL;
      }
    }
    else
    {
      v38 = 0LL;
    }
    LOBYTE(v53) = AccessGranted;
    sub_140882A70(ObjectTypeName, v38, PrimaryToken, v31, v53, &GenerateAudit, GenerateAlarm);
    v20 = GenerateAudit;
    if ( GenerateAudit )
    {
      *GenerateOnClose = 1;
      if ( AccessGranted )
      {
        v40 = *((_WORD *)v68 + 1);
        if ( (v40 & 0x10) != 0 )
        {
          if ( v40 >= 0 )
          {
            v41 = *((_QWORD *)v68 + 3);
          }
          else
          {
            v42 = v68[3];
            if ( (_DWORD)v42 )
              v41 = (__int64)v68 + v42;
            else
              v41 = 0LL;
          }
        }
        else
        {
          v41 = 0LL;
        }
        sub_1405F4040(v41, v31, (__int64)PrimaryToken, &AuxData[1].Data4[4]);
        sub_1409CE4F8(ObjectTypeName, v31, PrimaryToken, &AuxData[1].Data4[4]);
      }
    }
    SecurityDescriptor = v68;
    AbsoluteObjectName = (PUNICODE_STRING)AccessModea;
    v13 = v57;
    goto LABEL_11;
  }
  v20 = GenerateAudit;
  v21 = &AccessState->SubjectSecurityContext;
  SecurityDescriptor = v68;
  AbsoluteObjectName = (PUNICODE_STRING)AccessModea;
  v13 = v57;
LABEL_13:
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) != 0 )
    LOBYTE(AbsoluteObjectName) = 1;
  v22 = 0;
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) == 0 )
    v22 = AccessGranted;
  v23 = 0;
  while ( *((int *)AccessState->AuxData + v23 + 22) >= 0 )
  {
    if ( ++v23 >= 0x20u )
    {
      v24 = 0;
      goto LABEL_21;
    }
  }
  v24 = sub_140724320(129LL, v22, AbsoluteObjectName, v21);
  SecurityDescriptor = v68;
  v13 = v57;
LABEL_21:
  AuxData[13].Data4[0] = v24;
  if ( v20 )
    goto LABEL_91;
  v12 = (UNICODE_STRING *)v61;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
LABEL_23:
  if ( AccessGranted )
  {
    v25 = *(_DWORD **)&AuxData->Data1;
    if ( *(_QWORD *)&AuxData->Data1 )
    {
      if ( *v25 )
      {
        v26 = sub_14072427C((_DWORD)v25, AccessGranted, 0, (_DWORD)p_SubjectSecurityContext, (__int64)v58);
        v10 = v58[0];
        SecurityDescriptor = v68;
        v13 = v57;
        if ( v26 )
        {
          AccessState->AuditPrivileges = 1;
          goto LABEL_91;
        }
      }
    }
  }
  if ( GenerateAlarm[0] )
  {
LABEL_91:
    v12 = (UNICODE_STRING *)v61;
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    AccessState->GenerateAudit = 1;
    goto LABEL_92;
  }
  AccessState->GenerateAudit = 0;
  if ( !AuxData[13].Data4[0] )
    return;
LABEL_92:
  v43 = SourceString;
  if ( SourceString && SourceString->Length )
  {
    v44 = Object;
  }
  else
  {
    v44 = Object;
    if ( Object )
    {
      v45 = sub_140696CCC(Object, &P, AbsoluteObjectName, SecurityDescriptor);
      v59 = v45;
      if ( v45 < 0 )
        goto LABEL_130;
      SecurityDescriptor = v68;
      v13 = v57;
      if ( P )
      {
        v43 = v62;
        if ( *((_WORD *)P + 1) != (_WORD)v62 )
          v43 = (const UNICODE_STRING *)P;
        v44 = Object;
      }
      else
      {
        v44 = Object;
        v43 = v57;
      }
    }
    else
    {
      v43 = v62;
    }
  }
  if ( ObjectTypeName && ObjectTypeName->Length )
  {
    v13 = ObjectTypeName;
    v57 = ObjectTypeName;
LABEL_111:
    if ( AccessGranted )
    {
      if ( v43 )
      {
        Buffer = AccessState->ObjectName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          *(_DWORD *)&AccessState->ObjectName.Length = 0;
        }
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, v43->MaximumLength, 538994003LL);
        AccessState->ObjectName.Buffer = Pool2;
        if ( Pool2 )
        {
          AccessState->ObjectName.MaximumLength = v43->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectName, v43);
        }
        v13 = v57;
        v12 = (UNICODE_STRING *)v61;
      }
      if ( v13 )
      {
        v50 = AccessState->ObjectTypeName.Buffer;
        if ( v50 )
        {
          ExFreePoolWithTag(v50, 0);
          v13 = v57;
          *(_DWORD *)&AccessState->ObjectTypeName.Length = 0;
        }
        v51 = (wchar_t *)ExAllocatePool2(256LL, v13->MaximumLength, 538994003LL);
        AccessState->ObjectTypeName.Buffer = v51;
        if ( v51 )
        {
          v52 = v57;
          AccessState->ObjectTypeName.MaximumLength = v57->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectTypeName, v52);
        }
        v12 = (UNICODE_STRING *)v61;
      }
      if ( TransactionId )
        AuxData[2] = *TransactionId;
    }
    else
    {
      v46 = TransactionId;
      if ( !TransactionId )
        v46 = AuxData + 2;
      sub_1409C8EE8(
        v10,
        (int)&qword_140001B08,
        0,
        (int)v13,
        (__int64)v43,
        SecurityDescriptor,
        (__int64)p_SubjectSecurityContext->ClientToken,
        (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        *(_QWORD *)&AuxData->Data1,
        0,
        (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
        2,
        0LL,
        0,
        0LL,
        (__int64)v46,
        (__int64)AccessState);
      LOBYTE(v54) = 0;
      sub_1409C9C64(
        v10,
        v47,
        0LL,
        v57,
        v43,
        p_SubjectSecurityContext->ClientToken,
        AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        v54,
        0LL,
        AccessState);
    }
    v45 = v59;
    goto LABEL_130;
  }
  if ( !v44 )
    goto LABEL_111;
  v45 = sub_1409CA168(v44, &v61, AbsoluteObjectName, SecurityDescriptor);
  v12 = (UNICODE_STRING *)v61;
  v59 = v45;
  if ( v45 >= 0 )
  {
    v13 = v57;
    SecurityDescriptor = v68;
    if ( v61 )
      v13 = v61;
    v57 = v13;
    goto LABEL_111;
  }
LABEL_130:
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    v45 = v59;
  }
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    v45 = v59;
  }
  if ( v45 < 0 )
    sub_1409CF1A0((unsigned int)v45);
}
