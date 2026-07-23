/*
 * XREFs of sub_14024B8BC @ 0x14024B8BC
 * Callers:
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     SeOpenObjectAuditAlarm @ 0x140669A30 (SeOpenObjectAuditAlarm.c)
 *     SeAppendPrivileges @ 0x1406A8AD0 (SeAppendPrivileges.c)
 *     SeLockSubjectContext @ 0x140722AE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140723F40 (SeUnlockSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

BOOLEAN __fastcall sub_14024B8BC(
        __int64 a1,
        void *a2,
        struct _ACCESS_STATE *a3,
        int a4,
        int a5,
        PPRIVILEGE_SET Privileges,
        PACCESS_MASK GrantedAccess,
        PUNICODE_STRING AbsoluteObjectName,
        PUNICODE_STRING ObjectTypeName,
        __int64 a10,
        char a11)
{
  int v11; // ebx
  __int64 v16; // r13
  PACCESS_MASK v17; // rsi
  BOOLEAN v18; // bp
  int v20; // eax
  NTSTATUS AccessStatus; // [rsp+98h] [rbp+20h] BYREF

  AccessStatus = 0;
  v11 = 0;
  if ( a5 != 1 )
  {
    v20 = *(_DWORD *)(a1 + 52);
    if ( (v20 & 0x40001) != 0 || dword_140C0C62C && (v20 & 0x100000) != 0 )
      v11 = 2;
  }
  v16 = a10;
  --*(_WORD *)(a10 + 484);
  ExAcquireResourceSharedLite(&Resource, 1u);
  SeLockSubjectContext(&a3->SubjectSecurityContext);
  v17 = GrantedAccess;
  v18 = SeAccessCheck(
          *(PSECURITY_DESCRIPTOR *)(a1 + 272),
          &a3->SubjectSecurityContext,
          1u,
          a4 | v11,
          0,
          &Privileges,
          (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
          1,
          GrantedAccess,
          &AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(a3, Privileges);
    ExFreePoolWithTag(Privileges, 0);
  }
  if ( v11 && (v11 & a4) == 0 )
    *v17 &= ~v11;
  if ( a11 && v18 )
  {
    a3->PreviouslyGrantedAccess |= *v17;
    a3->RemainingDesiredAccess &= ~(*v17 | 0x2000000);
  }
  if ( a2 )
    SeOpenObjectAuditAlarm(
      ObjectTypeName,
      a2,
      AbsoluteObjectName,
      *(PSECURITY_DESCRIPTOR *)(a1 + 272),
      a3,
      0,
      v18,
      1,
      &a3->GenerateOnClose);
  SeUnlockSubjectContext(&a3->SubjectSecurityContext);
  ExReleaseResourceLite(&Resource);
  sub_1402AC800(v16);
  return v18;
}
