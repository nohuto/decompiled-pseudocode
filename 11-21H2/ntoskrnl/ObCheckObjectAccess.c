/*
 * XREFs of ObCheckObjectAccess @ 0x1406698A0
 * Callers:
 *     sub_140669830 @ 0x140669830 (sub_140669830.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     SeOpenObjectAuditAlarm @ 0x140669A30 (SeOpenObjectAuditAlarm.c)
 *     SeAppendPrivileges @ 0x1406A8AD0 (SeAppendPrivileges.c)
 *     sub_140722890 @ 0x140722890 (sub_140722890.c)
 *     SeLockSubjectContext @ 0x140722AE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140723F40 (SeUnlockSubjectContext.c)
 *     sub_1407248C0 @ 0x1407248C0 (sub_1407248C0.c)
 */

BOOLEAN __fastcall ObCheckObjectAccess(
        char *Object,
        PACCESS_STATE AccessState,
        __int64 a3,
        __int64 a4,
        PNTSTATUS AccessStatus)
{
  char v5; // di
  unsigned __int64 v7; // r10
  KPROCESSOR_MODE AccessMode; // r12
  __int64 v10; // r14
  int v11; // edx
  BOOLEAN v12; // r14
  ACCESS_MASK v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  BOOLEAN result; // al
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-18h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-10h] BYREF
  UNICODE_STRING *v20; // [rsp+68h] [rbp-8h]
  char v21; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0;
  v7 = (unsigned __int8)*(Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  GrantedAccess = 0;
  v21 = 0;
  AccessMode = a4;
  Privileges = 0LL;
  SecurityDescriptor = 0LL;
  v10 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ v7];
  v20 = (UNICODE_STRING *)v10;
  v11 = sub_1407248C0(Object, &SecurityDescriptor, &v21, a4);
  if ( v11 < 0 )
    goto LABEL_9;
  if ( !SecurityDescriptor )
  {
    AccessState->PreviouslyGrantedAccess |= AccessState->RemainingDesiredAccess;
    AccessState->RemainingDesiredAccess = 0;
    v5 = 1;
LABEL_9:
    result = v5;
    *AccessStatus = v11;
    return result;
  }
  SeLockSubjectContext(&AccessState->SubjectSecurityContext);
  v12 = SeAccessCheck(
          SecurityDescriptor,
          &AccessState->SubjectSecurityContext,
          1u,
          AccessState->RemainingDesiredAccess,
          AccessState->PreviouslyGrantedAccess,
          &Privileges,
          (PGENERIC_MAPPING)(v10 + 76),
          AccessMode,
          &GrantedAccess,
          AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(AccessState, Privileges);
    SeFreePrivileges(Privileges);
  }
  if ( v12 )
  {
    v13 = GrantedAccess;
    AccessState->PreviouslyGrantedAccess |= GrantedAccess;
    AccessState->RemainingDesiredAccess &= ~(v13 | 0x2000000);
  }
  SeOpenObjectAuditAlarm(
    v20 + 1,
    Object,
    0LL,
    SecurityDescriptor,
    AccessState,
    0,
    v12,
    AccessMode,
    &AccessState->GenerateOnClose);
  SeUnlockSubjectContext(&AccessState->SubjectSecurityContext);
  LOBYTE(v14) = v21;
  sub_140722890(SecurityDescriptor, v14, Object, v15);
  return v12;
}
