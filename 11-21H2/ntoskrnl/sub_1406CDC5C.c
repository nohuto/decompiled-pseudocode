/*
 * XREFs of sub_1406CDC5C @ 0x1406CDC5C
 * Callers:
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14024C714 @ 0x14024C714 (sub_14024C714.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     SeAppendPrivileges @ 0x1406A8AD0 (SeAppendPrivileges.c)
 *     sub_140722890 @ 0x140722890 (sub_140722890.c)
 *     SeLockSubjectContext @ 0x140722AE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140723F40 (SeUnlockSubjectContext.c)
 *     sub_1407248C0 @ 0x1407248C0 (sub_1407248C0.c)
 */

BOOLEAN __fastcall sub_1406CDC5C(
        __int64 a1,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        char a4,
        KPROCESSOR_MODE a5,
        PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // bl
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r9
  __int64 v11; // r13
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r9
  BOOLEAN v15; // bl
  PPRIVILEGE_SET Privileges; // [rsp+50h] [rbp-10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+90h] [rbp+30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+38h] BYREF
  char v20; // [rsp+A8h] [rbp+48h] BYREF

  v20 = a4;
  AccessMode = a5;
  GrantedAccess = 0;
  Privileges = 0LL;
  SecurityDescriptor = 0LL;
  v9 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  v20 = 0;
  v10 = (unsigned __int8)dword_140D06C0C ^ v9;
  v11 = qword_140D07490[v10];
  LOBYTE(v10) = a5;
  v12 = sub_1407248C0(a1, &SecurityDescriptor, &v20, v10);
  if ( v12 < 0 )
  {
    *AccessStatus = v12;
    return 0;
  }
  else
  {
    if ( sub_14024C714((__int64)SecurityDescriptor, (__int64)a3, 2) )
    {
      v15 = 1;
    }
    else
    {
      SeLockSubjectContext(&a3->SubjectSecurityContext);
      v15 = SeAccessCheck(
              SecurityDescriptor,
              &a3->SubjectSecurityContext,
              1u,
              2u,
              0,
              &Privileges,
              (PGENERIC_MAPPING)(v11 + 76),
              AccessMode,
              &GrantedAccess,
              AccessStatus);
      if ( Privileges )
      {
        SeAppendPrivileges(a3, Privileges);
        SeFreePrivileges(Privileges);
      }
      SeUnlockSubjectContext(&a3->SubjectSecurityContext);
    }
    LOBYTE(v13) = v20;
    sub_140722890(SecurityDescriptor, v13, a1, v14);
    return v15;
  }
}
