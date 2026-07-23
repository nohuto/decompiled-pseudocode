/*
 * XREFs of ObCheckObjectAccess @ 0x1407B6540
 * Callers:
 *     ObpGrantAccess @ 0x1407B64C4 (ObpGrantAccess.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1409B1834 (PspReferenceCpuPartitionByHandle.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x140231720 (SeAccessCheck.c)
 *     SeOpenObjectAuditAlarm @ 0x1406C0500 (SeOpenObjectAuditAlarm.c)
 *     ObReleaseObjectSecurityEx @ 0x1406C30E0 (ObReleaseObjectSecurityEx.c)
 *     SeUnlockSubjectContext @ 0x1406C3160 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406C31A0 (SeLockSubjectContext.c)
 *     ObpGetObjectSecurity @ 0x140736410 (ObpGetObjectSecurity.c)
 *     SeAppendPrivileges @ 0x1407B66C0 (SeAppendPrivileges.c)
 */

BOOLEAN __fastcall ObCheckObjectAccess(
        char *Object,
        PACCESS_STATE AccessState,
        __int64 a3,
        char a4,
        PNTSTATUS AccessStatus)
{
  char v5; // di
  unsigned __int64 v7; // r10
  __int64 v10; // r14
  int ObjectSecurity; // edx
  BOOLEAN v12; // r14
  ACCESS_MASK v13; // eax
  BOOLEAN result; // al
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-18h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-10h] BYREF
  UNICODE_STRING *v18; // [rsp+68h] [rbp-8h]
  char v19; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0;
  v7 = (unsigned __int8)*(Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  GrantedAccess = 0;
  v19 = 0;
  Privileges = 0LL;
  SecurityDescriptor = 0LL;
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v7];
  v18 = (UNICODE_STRING *)v10;
  ObjectSecurity = ObpGetObjectSecurity((__int64)Object, &SecurityDescriptor, &v19, a4);
  if ( ObjectSecurity < 0 )
    goto LABEL_9;
  if ( !SecurityDescriptor )
  {
    AccessState->PreviouslyGrantedAccess |= AccessState->RemainingDesiredAccess;
    AccessState->RemainingDesiredAccess = 0;
    v5 = 1;
LABEL_9:
    result = v5;
    *AccessStatus = ObjectSecurity;
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
          a4,
          &GrantedAccess,
          AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(AccessState, Privileges);
    CmSiFreeMemory(Privileges);
  }
  if ( v12 )
  {
    v13 = GrantedAccess;
    AccessState->PreviouslyGrantedAccess |= GrantedAccess;
    AccessState->RemainingDesiredAccess &= ~(v13 | 0x2000000);
  }
  SeOpenObjectAuditAlarm(
    v18 + 1,
    Object,
    0LL,
    SecurityDescriptor,
    AccessState,
    0,
    v12,
    a4,
    &AccessState->GenerateOnClose);
  SeUnlockSubjectContext(&AccessState->SubjectSecurityContext);
  ObReleaseObjectSecurityEx(SecurityDescriptor, v19, (__int64)Object);
  return v12;
}
