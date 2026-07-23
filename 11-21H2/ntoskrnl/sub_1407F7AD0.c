/*
 * XREFs of sub_1407F7AD0 @ 0x1407F7AD0
 * Callers:
 *     sub_1406B6444 @ 0x1406B6444 (sub_1406B6444.c)
 *     sub_140916788 @ 0x140916788 (sub_140916788.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     SeOpenObjectAuditAlarm @ 0x140669A30 (SeOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAppendPrivileges @ 0x1406A8AD0 (SeAppendPrivileges.c)
 *     sub_140721BF0 @ 0x140721BF0 (sub_140721BF0.c)
 *     SeLockSubjectContext @ 0x140722AE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140723F40 (SeUnlockSubjectContext.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 */

BOOLEAN __fastcall sub_1407F7AD0(
        _QWORD *Object,
        __int64 ObjectCreated,
        PACCESS_STATE AccessState,
        KPROCESSOR_MODE AccessMode,
        NTSTATUS *a5)
{
  NTSTATUS v9; // ecx
  void *v10; // r12
  BOOLEAN v11; // si
  ACCESS_MASK v12; // eax
  UNICODE_STRING *v13; // rcx
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-2Ch] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-28h] BYREF
  __int128 v18; // [rsp+60h] [rbp-20h] BYREF
  PPRIVILEGE_SET v19[2]; // [rsp+70h] [rbp-10h]

  GrantedAccess = 0;
  Privileges = 0LL;
  v18 = 0LL;
  WORD1(v18) = -1;
  *(_OWORD *)v19 = 0LL;
  if ( (unsigned __int8)sub_140AB45A0(Object, ObjectCreated) )
  {
    v9 = -1073741444;
    AccessStatus = -1073741444;
    goto LABEL_13;
  }
  AccessStatus = sub_1407C05F4((__int64)&v18, Object[1]);
  v9 = AccessStatus;
  if ( AccessStatus < 0 )
  {
LABEL_13:
    v11 = 0;
    goto LABEL_10;
  }
  v10 = (void *)(sub_140721BF0((__int64)&v18, ObjectCreated, 0LL) + 32);
  SeLockSubjectContext(&AccessState->SubjectSecurityContext);
  v11 = SeAccessCheck(
          v10,
          &AccessState->SubjectSecurityContext,
          1u,
          AccessState->RemainingDesiredAccess,
          AccessState->PreviouslyGrantedAccess,
          &Privileges,
          (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
          AccessMode,
          &GrantedAccess,
          &AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(AccessState, Privileges);
    SeFreePrivileges(Privileges);
  }
  if ( v11 )
  {
    v12 = GrantedAccess;
    AccessState->PreviouslyGrantedAccess |= GrantedAccess;
    AccessState->RemainingDesiredAccess &= ~(v12 | 0x2000000);
  }
  *((_WORD *)Object + 24) |= 2u;
  v13 = (UNICODE_STRING *)(CmKeyObjectType + 2);
  if ( ObjectCreated )
    SeOpenObjectAuditAlarmWithTransaction(
      v13,
      Object,
      0LL,
      v10,
      AccessState,
      0,
      v11,
      AccessMode,
      (GUID *)(ObjectCreated + 88),
      &AccessState->GenerateOnClose);
  else
    SeOpenObjectAuditAlarm(v13, Object, 0LL, v10, AccessState, 0, v11, AccessMode, &AccessState->GenerateOnClose);
  *((_WORD *)Object + 24) &= ~2u;
  SeUnlockSubjectContext(&AccessState->SubjectSecurityContext);
  v9 = AccessStatus;
LABEL_10:
  if ( v19[1] )
  {
    SeFreePrivileges(v19[1]);
    v9 = AccessStatus;
  }
  *a5 = v9;
  return v11;
}
