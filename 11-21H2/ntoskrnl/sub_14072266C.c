/*
 * XREFs of sub_14072266C @ 0x14072266C
 * Callers:
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 * Callees:
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     sub_1407225F4 @ 0x1407225F4 (sub_1407225F4.c)
 *     sub_140722890 @ 0x140722890 (sub_140722890.c)
 *     SeLockSubjectContext @ 0x140722AE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140723F40 (SeUnlockSubjectContext.c)
 *     sub_1407248C0 @ 0x1407248C0 (sub_1407248C0.c)
 */

BOOLEAN __fastcall sub_14072266C(__int64 a1, __int64 a2, char a3, __int64 a4, PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // r15
  unsigned __int64 v7; // r10
  __int64 v9; // rdi
  int v10; // eax
  GENERIC_MAPPING *GenericMapping; // rcx
  PSECURITY_DESCRIPTOR v12; // rdi
  __int64 v13; // rcx
  BOOLEAN v14; // bp
  ACCESS_MASK v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r9
  BOOLEAN Privileges; // [rsp+28h] [rbp-60h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-38h] BYREF
  PPRIVILEGE_SET v21; // [rsp+58h] [rbp-30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+8h] BYREF
  char v23; // [rsp+A0h] [rbp+18h] BYREF

  v23 = a3;
  GrantedAccess = 0;
  v21 = 0LL;
  SecurityDescriptor = 0LL;
  AccessMode = a4;
  v7 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  v23 = 0;
  v9 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ v7];
  v10 = sub_1407248C0(a1, &SecurityDescriptor, &v23, a4);
  if ( v10 < 0 )
  {
    *AccessStatus = v10;
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
            &v21,
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
      sub_1407225F4(
        v13,
        a1,
        (__int64)v12,
        a2 + 32,
        *(_DWORD *)(a2 + 16) | *(_DWORD *)(a2 + 20),
        Privileges,
        v14,
        AccessMode);
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
    LOBYTE(v16) = v23;
    sub_140722890(v12, v16, a1, v17);
    return v14;
  }
}
