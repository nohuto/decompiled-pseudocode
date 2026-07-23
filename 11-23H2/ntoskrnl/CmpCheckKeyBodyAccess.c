/*
 * XREFs of CmpCheckKeyBodyAccess @ 0x140A1B398
 * Callers:
 *     CmpVEPerformOpenAccessCheck @ 0x1407BA678 (CmpVEPerformOpenAccessCheck.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A191DC (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x140231720 (SeAccessCheck.c)
 *     SeOpenObjectAuditAlarm @ 0x1406C0500 (SeOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0560 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeUnlockSubjectContext @ 0x1406C3160 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406C31A0 (SeLockSubjectContext.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406D56B0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 *     SeAppendPrivileges @ 0x1407B66C0 (SeAppendPrivileges.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF52F0 (CmpIsKeyDeletedForKeyBody.c)
 */

BOOLEAN __fastcall CmpCheckKeyBodyAccess(
        _QWORD *Object,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        KPROCESSOR_MODE a4,
        NTSTATUS *a5)
{
  NTSTATUS v9; // ecx
  BOOLEAN v10; // si
  void *v11; // r12
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
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(Object, a2) )
  {
    v9 = -1073741444;
    AccessStatus = -1073741444;
LABEL_3:
    v10 = 0;
    goto LABEL_13;
  }
  AccessStatus = CmpStartKcbStackForTopLayerKcb((__int64)&v18, Object[1]);
  v9 = AccessStatus;
  if ( AccessStatus < 0 )
    goto LABEL_3;
  v11 = (void *)(CmpGetSecurityCacheEntryForKcbStack((__int64)&v18, a2, 0LL) + 32);
  SeLockSubjectContext(&a3->SubjectSecurityContext);
  v10 = SeAccessCheck(
          v11,
          &a3->SubjectSecurityContext,
          1u,
          a3->RemainingDesiredAccess,
          a3->PreviouslyGrantedAccess,
          &Privileges,
          (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
          a4,
          &GrantedAccess,
          &AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(a3, Privileges);
    CmSiFreeMemory(Privileges);
  }
  if ( v10 )
  {
    v12 = GrantedAccess;
    a3->PreviouslyGrantedAccess |= GrantedAccess;
    a3->RemainingDesiredAccess &= ~(v12 | 0x2000000);
  }
  *((_WORD *)Object + 24) |= 2u;
  v13 = (UNICODE_STRING *)(CmKeyObjectType + 2);
  if ( a2 )
    SeOpenObjectAuditAlarmWithTransaction(
      v13,
      Object,
      0LL,
      v11,
      a3,
      0,
      v10,
      a4,
      (GUID *)(a2 + 88),
      &a3->GenerateOnClose);
  else
    SeOpenObjectAuditAlarm(v13, Object, 0LL, v11, a3, 0, v10, a4, &a3->GenerateOnClose);
  *((_WORD *)Object + 24) &= ~2u;
  SeUnlockSubjectContext(&a3->SubjectSecurityContext);
  v9 = AccessStatus;
LABEL_13:
  if ( v19[1] )
  {
    CmSiFreeMemory(v19[1]);
    v9 = AccessStatus;
  }
  *a5 = v9;
  return v10;
}
