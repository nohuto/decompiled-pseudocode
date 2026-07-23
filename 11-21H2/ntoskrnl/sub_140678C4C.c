/*
 * XREFs of sub_140678C4C @ 0x140678C4C
 * Callers:
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x140239790 (ExConvertExclusiveToSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14041D180 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x14041D320 (ZwDeleteWnfStateName.c)
 *     sub_140678FCC @ 0x140678FCC (sub_140678FCC.c)
 *     sub_140679280 @ 0x140679280 (sub_140679280.c)
 *     sub_1406793A4 @ 0x1406793A4 (sub_1406793A4.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140679440 (RtlGetOwnerSecurityDescriptor.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_140722890 @ 0x140722890 (sub_140722890.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     sub_1407248C0 @ 0x1407248C0 (sub_1407248C0.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     sub_1407B3B60 @ 0x1407B3B60 (sub_1407B3B60.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140678C4C(__int64 a1, __int64 a2, _OWORD *a3)
{
  bool v3; // zf
  char v7; // r13
  __int64 v8; // rdx
  NTSTATUS OwnerSecurityDescriptor; // edi
  __int64 v10; // r9
  PSECURITY_DESCRIPTOR v11; // r12
  void *v12; // r15
  ACL *PoolWithTag; // rax
  ACL *v14; // r15
  char v15; // r15
  __int64 v16; // r9
  PVOID v17; // rcx
  __int64 v18; // rdi
  PCWNF_TYPE_ID TypeId; // [rsp+20h] [rbp-79h]
  char v21; // [rsp+40h] [rbp-59h] BYREF
  char v22; // [rsp+41h] [rbp-58h] BYREF
  BOOLEAN OwnerDefaulted[2]; // [rsp+42h] [rbp-57h] BYREF
  int v24; // [rsp+44h] [rbp-55h] BYREF
  __int64 v25; // [rsp+48h] [rbp-51h] BYREF
  PVOID TokenInformation; // [rsp+50h] [rbp-49h] BYREF
  ULONG AclLength; // [rsp+58h] [rbp-41h]
  PSID Owner; // [rsp+60h] [rbp-39h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp-31h] BYREF
  __int64 v30; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v31[8]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v32; // [rsp+80h] [rbp-19h]
  _OWORD v33[2]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+Fh]
  _WNF_STATE_NAME StateName; // [rsp+B0h] [rbp+17h] BYREF

  v3 = (*(_DWORD *)(a2 + 1512) & 0x800) == 0;
  v21 = 0;
  v22 = 0;
  v30 = 0LL;
  Owner = 0LL;
  v7 = 0;
  SecurityDescriptor = 0LL;
  v25 = 0LL;
  memset(v33, 0, sizeof(v33));
  v34 = 0LL;
  v24 = 0;
  TokenInformation = 0LL;
  v32 = 0LL;
  StateName = 0LL;
  if ( !v3 )
  {
    v15 = 1;
    sub_140678FCC(a2, a1, &v25);
    v18 = v25;
    if ( a2 != v25 )
    {
      ExConvertExclusiveToSharedLite((PERESOURCE)(v25 + 56));
      ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
    }
    goto LABEL_12;
  }
  OwnerSecurityDescriptor = sub_1407248C0(a2, &SecurityDescriptor, &v21, 0LL);
  if ( OwnerSecurityDescriptor < 0 )
    return (unsigned int)OwnerSecurityDescriptor;
  v11 = SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    OwnerSecurityDescriptor = -1073741790;
LABEL_27:
    LOBYTE(v8) = v21;
    sub_140722890(v11, v8, a2, v10);
    return (unsigned int)OwnerSecurityDescriptor;
  }
  OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, OwnerDefaulted);
  if ( OwnerSecurityDescriptor < 0 )
    goto LABEL_27;
  v12 = (void *)sub_1407B3B60(a1, 1953654867LL, &v24, &v22, v31, 0LL);
  OwnerSecurityDescriptor = SeQueryInformationToken(v12, TokenUser, &TokenInformation);
  if ( v24 == 1 )
  {
    sub_1402F89B0((signed __int64 *)(*(_QWORD *)(a1 + 184) + 1208LL), (unsigned __int64)v12, 0x74726853u);
  }
  else if ( v12 )
  {
    ObfDereferenceObjectWithTag(v12, 0x74726853u);
  }
  if ( OwnerSecurityDescriptor < 0 )
    goto LABEL_27;
  AclLength = 4 * (*((unsigned __int8 *)Owner + 1) + *(unsigned __int8 *)(*(_QWORD *)TokenInformation + 1LL)) + 48;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, AclLength, 0x66577350u);
  v14 = PoolWithTag;
  if ( !PoolWithTag
    || (RtlCreateAcl(PoolWithTag, AclLength, 2u),
        sub_1407B4900((int)v14, 2, 0, 0x80000000, Owner, 0),
        sub_1407B4900((int)v14, 2, 0, 0x80000000, *(void **)TokenInformation, 0),
        RtlCreateSecurityDescriptor(v33, 1u),
        RtlSetDaclSecurityDescriptor(v33, 1u, v14, 0),
        OwnerSecurityDescriptor = ZwCreateWnfStateName(
                                    &StateName,
                                    WnfTemporaryStateName,
                                    WnfDataScopeMachine,
                                    0,
                                    0LL,
                                    0,
                                    v33),
        ExFreePoolWithTag(v14, 0x66577350u),
        OwnerSecurityDescriptor < 0) )
  {
    ExFreePoolWithTag(TokenInformation, 0);
    goto LABEL_27;
  }
  v15 = 0;
  sub_140678FCC(a2, a1, &v25);
  if ( (*(_DWORD *)(a2 + 1512) & 0x800) != 0 )
  {
    v18 = v25;
    v7 = 1;
  }
  else
  {
    *(_WNF_STATE_NAME *)(a2 + 1072) = StateName;
    sub_1406793A4(a2, &v30, a2 + 1144, 0LL);
    sub_1406FF880(v17, v16 & (unsigned __int64)TypeId, 2);
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 1512), 0xBu);
    _InterlockedIncrement64(&qword_140C1BEF0);
    v18 = v25;
  }
LABEL_12:
  *a3 = *(_OWORD *)(a2 + 1072);
  a3[1] = *(_OWORD *)(a2 + 1088);
  a3[2] = *(_OWORD *)(a2 + 1104);
  a3[3] = *(_OWORD *)(a2 + 1120);
  if ( v15 && a2 != v18 )
    ExReleaseResourceLite((PERESOURCE)(a2 + 56));
  sub_1406FFE90(v18, a1);
  if ( v7 )
  {
    ZwDeleteWnfStateName(&StateName);
  }
  else if ( !v15 )
  {
    sub_140679280((PVOID)a2);
  }
  return 0LL;
}
