/*
 * XREFs of PspAllocateAndQueryNotificationChannel @ 0x14069F068
 * Callers:
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ObFastDereferenceObject @ 0x140297F10 (ObFastDereferenceObject.c)
 *     ExConvertExclusiveToSharedLite @ 0x140347950 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14041CB30 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x14041CCD0 (ZwDeleteWnfStateName.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x14069E340 (RtlGetOwnerSecurityDescriptor.c)
 *     PspLockRootJobExclusive @ 0x14069F000 (PspLockRootJobExclusive.c)
 *     PspUnlockJobConditionally @ 0x1406A30A0 (PspUnlockJobConditionally.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406A3448 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1406A3BFC (PspUnlockJob.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD530 (RtlSetDaclSecurityDescriptor.c)
 *     ObReleaseObjectSecurityEx @ 0x1406C30E0 (ObReleaseObjectSecurityEx.c)
 *     SeQueryInformationToken @ 0x1407198A0 (SeQueryInformationToken.c)
 *     PsReferenceEffectiveToken @ 0x14071D8EC (PsReferenceEffectiveToken.c)
 *     RtlpAddKnownAce @ 0x140735460 (RtlpAddKnownAce.c)
 *     ObpGetObjectSecurity @ 0x140736410 (ObpGetObjectSecurity.c)
 *     RtlCreateSecurityDescriptor @ 0x140736770 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736810 (RtlCreateAcl.c)
 *     PspDispatchWakeNotification @ 0x1407DA604 (PspDispatchWakeNotification.c)
 *     PspComputeReportWakeFilter @ 0x1407DA724 (PspComputeReportWakeFilter.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspAllocateAndQueryNotificationChannel(__int64 a1, __int64 a2, _OWORD *a3)
{
  bool v3; // zf
  ACL *v7; // r14
  PSECURITY_DESCRIPTOR v8; // rsi
  int ObjectSecurity; // eax
  __int64 v10; // rdx
  NTSTATUS OwnerSecurityDescriptor; // edi
  void *v12; // r14
  PSID v13; // r13
  ACL *Pool2; // rax
  char v15; // r13
  __int64 v16; // r9
  PVOID v17; // rcx
  __int64 v18; // rdi
  PCWNF_TYPE_ID TypeId; // [rsp+20h] [rbp-79h]
  char v21; // [rsp+40h] [rbp-59h]
  char v22; // [rsp+41h] [rbp-58h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+42h] [rbp-57h] BYREF
  char v24; // [rsp+43h] [rbp-56h] BYREF
  __int64 v25; // [rsp+48h] [rbp-51h] BYREF
  int v26; // [rsp+50h] [rbp-49h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-41h] BYREF
  PVOID TokenInformation; // [rsp+60h] [rbp-39h] BYREF
  ULONG AclLength; // [rsp+68h] [rbp-31h]
  _BYTE v30[4]; // [rsp+6Ch] [rbp-2Dh] BYREF
  PSID Owner; // [rsp+70h] [rbp-29h] BYREF
  __int64 v32; // [rsp+78h] [rbp-21h] BYREF
  __int64 *v33; // [rsp+80h] [rbp-19h]
  _OWORD v34[2]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+Fh]
  _WNF_STATE_NAME StateName; // [rsp+B0h] [rbp+17h] BYREF

  v3 = (*(_DWORD *)(a2 + 1536) & 0x800) == 0;
  v32 = 0LL;
  Owner = 0LL;
  v25 = 0LL;
  memset(v34, 0, sizeof(v34));
  v35 = 0LL;
  v7 = 0LL;
  v26 = 0;
  v8 = 0LL;
  v22 = 0;
  v21 = 0;
  SecurityDescriptor = 0LL;
  TokenInformation = 0LL;
  v33 = 0LL;
  StateName = 0LL;
  if ( !v3 )
  {
    v15 = 1;
    PspLockRootJobExclusive(a2, a1, &v25);
    v18 = v25;
    if ( a2 != v25 )
    {
      ExConvertExclusiveToSharedLite((PERESOURCE)(v25 + 56));
      ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
    }
LABEL_13:
    *a3 = *(_OWORD *)(a2 + 1096);
    a3[1] = *(_OWORD *)(a2 + 1112);
    a3[2] = *(_OWORD *)(a2 + 1128);
    a3[3] = *(_OWORD *)(a2 + 1144);
    if ( v15 )
      PspUnlockJobConditionally(a2, &v25);
    PspUnlockJob(v18, a1);
    if ( v21 )
    {
      ZwDeleteWnfStateName(&StateName);
    }
    else if ( !v15 )
    {
      PspDispatchWakeNotification((PVOID)a2);
    }
    OwnerSecurityDescriptor = 0;
    if ( v7 )
      goto LABEL_19;
    goto LABEL_20;
  }
  ObjectSecurity = ObpGetObjectSecurity(a2, &SecurityDescriptor, &v22, 0LL);
  v8 = SecurityDescriptor;
  OwnerSecurityDescriptor = ObjectSecurity;
  if ( ObjectSecurity < 0 )
    goto LABEL_20;
  if ( !SecurityDescriptor )
  {
    OwnerSecurityDescriptor = -1073741790;
    goto LABEL_20;
  }
  OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &OwnerDefaulted);
  if ( OwnerSecurityDescriptor >= 0 )
  {
    v12 = (void *)PsReferenceEffectiveToken(a1, 1953654867, (unsigned int)&v26, (unsigned int)&v24, (__int64)v30, 0LL);
    OwnerSecurityDescriptor = SeQueryInformationToken(v12, TokenUser, &TokenInformation);
    if ( v26 == 1 )
    {
      ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a1 + 184) + 1208LL), (unsigned __int64)v12, 0x74726853u);
    }
    else if ( v12 )
    {
      ObfDereferenceObjectWithTag(v12, 0x74726853u);
    }
    if ( OwnerSecurityDescriptor >= 0 )
    {
      v13 = Owner;
      AclLength = 4 * (*((unsigned __int8 *)Owner + 1) + *(unsigned __int8 *)(*(_QWORD *)TokenInformation + 1LL)) + 48;
      Pool2 = (ACL *)ExAllocatePool2(64LL, AclLength, 1717007184LL);
      v7 = Pool2;
      if ( Pool2 )
      {
        RtlCreateAcl(Pool2, AclLength, 2u);
        RtlpAddKnownAce((int)v7, 2, 0, 0x80000000, v13, 0);
        v15 = 0;
        RtlpAddKnownAce((int)v7, 2, 0, 0x80000000, *(void **)TokenInformation, 0);
        RtlCreateSecurityDescriptor(v34, 1u);
        RtlSetDaclSecurityDescriptor(v34, 1u, v7, 0);
        OwnerSecurityDescriptor = ZwCreateWnfStateName(
                                    &StateName,
                                    WnfTemporaryStateName,
                                    WnfDataScopeMachine,
                                    0,
                                    0LL,
                                    0,
                                    v34);
        if ( OwnerSecurityDescriptor < 0 )
        {
LABEL_19:
          ExFreePoolWithTag(v7, 0x66577350u);
          goto LABEL_20;
        }
        PspLockRootJobExclusive(a2, a1, &v25);
        if ( (*(_DWORD *)(a2 + 1536) & 0x800) != 0 )
        {
          v21 = 1;
        }
        else
        {
          *(_WNF_STATE_NAME *)(a2 + 1096) = StateName;
          v33 = &v32;
          PspComputeReportWakeFilter(a2, &v32, a2 + 1168, 0LL);
          PspEnumJobsAndProcessesInJobHierarchy(v17, v16 & (unsigned __int64)TypeId, 2);
          _interlockedbittestandset((volatile signed __int32 *)(a2 + 1536), 0xBu);
          _InterlockedIncrement64(&PspJobTimeLimitsRequest);
          v8 = SecurityDescriptor;
        }
        v18 = v25;
        goto LABEL_13;
      }
    }
  }
LABEL_20:
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  if ( v8 )
  {
    LOBYTE(v10) = v22;
    ObReleaseObjectSecurityEx(v8, v10, a2);
  }
  return (unsigned int)OwnerSecurityDescriptor;
}
