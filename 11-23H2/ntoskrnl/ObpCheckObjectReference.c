/*
 * XREFs of ObpCheckObjectReference @ 0x1406C2F9C
 * Callers:
 *     ObReferenceObjectByName @ 0x1406C2C80 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x140715568 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     SeAccessCheck @ 0x140231720 (SeAccessCheck.c)
 *     ObReleaseObjectSecurityEx @ 0x1406C30E0 (ObReleaseObjectSecurityEx.c)
 *     SeUnlockSubjectContext @ 0x1406C3160 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406C31A0 (SeLockSubjectContext.c)
 *     SeObjectReferenceAuditAlarm @ 0x1406C3200 (SeObjectReferenceAuditAlarm.c)
 *     ObpGetObjectSecurity @ 0x140736410 (ObpGetObjectSecurity.c)
 */

BOOLEAN __fastcall ObpCheckObjectReference(__int64 a1, __int64 a2, char a3, __int64 a4, PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // r15
  unsigned __int64 v7; // r10
  __int64 v9; // rdi
  int ObjectSecurity; // eax
  GENERIC_MAPPING *GenericMapping; // rcx
  PSECURITY_DESCRIPTOR v12; // rdi
  int v13; // ecx
  BOOLEAN v14; // r14
  ACCESS_MASK v15; // ecx
  __int64 v16; // rdx
  BOOLEAN Privileges; // [rsp+28h] [rbp-60h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-38h] BYREF
  PPRIVILEGE_SET v20; // [rsp+58h] [rbp-30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+8h] BYREF
  char v22; // [rsp+A0h] [rbp+18h] BYREF

  v22 = a3;
  GrantedAccess = 0;
  v20 = 0LL;
  SecurityDescriptor = 0LL;
  AccessMode = a4;
  v7 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  v22 = 0;
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v7];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &v22, a4);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  else
  {
    SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
    GenericMapping = (GENERIC_MAPPING *)(v9 + 76);
    v12 = SecurityDescriptor;
    v14 = SeAccessCheck(
            SecurityDescriptor,
            (PSECURITY_SUBJECT_CONTEXT)(a2 + 32),
            1u,
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            &v20,
            GenericMapping,
            AccessMode,
            &GrantedAccess,
            AccessStatus);
    if ( v14 )
    {
      v15 = GrantedAccess;
      *(_DWORD *)(a2 + 20) |= GrantedAccess;
      v13 = ~v15;
      *(_DWORD *)(a2 + 16) &= v13;
    }
    if ( v12 )
      SeObjectReferenceAuditAlarm(
        v13,
        a1,
        (int)v12,
        a2 + 32,
        *(_DWORD *)(a2 + 16) | *(_DWORD *)(a2 + 20),
        Privileges,
        v14,
        AccessMode);
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
    LOBYTE(v16) = v22;
    ObReleaseObjectSecurityEx(v12, v16, a1);
    return v14;
  }
}
