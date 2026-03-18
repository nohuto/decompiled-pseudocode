/*
 * XREFs of PspAllocateAndQueryNotificationChannel @ 0x14069F068
 * Callers:
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ObFastDereferenceObject @ 0x140297C80 (ObFastDereferenceObject.c)
 *     ExConvertExclusiveToSharedLite @ 0x1403476C0 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14041C7A0 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x14041C940 (ZwDeleteWnfStateName.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x14069E340 (RtlGetOwnerSecurityDescriptor.c)
 *     PspLockRootJobExclusive @ 0x14069F000 (PspLockRootJobExclusive.c)
 *     PspUnlockJobConditionally @ 0x1406A30A0 (PspUnlockJobConditionally.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406A3448 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1406A3BFC (PspUnlockJob.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD500 (RtlSetDaclSecurityDescriptor.c)
 *     ObReleaseObjectSecurityEx @ 0x1406C30B0 (ObReleaseObjectSecurityEx.c)
 *     SeQueryInformationToken @ 0x1407196A0 (SeQueryInformationToken.c)
 *     PsReferenceEffectiveToken @ 0x14071D6EC (PsReferenceEffectiveToken.c)
 *     RtlpAddKnownAce @ 0x140735270 (RtlpAddKnownAce.c)
 *     ObpGetObjectSecurity @ 0x140736220 (ObpGetObjectSecurity.c)
 *     RtlCreateSecurityDescriptor @ 0x140736580 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736620 (RtlCreateAcl.c)
 *     PspDispatchWakeNotification @ 0x1407DA334 (PspDispatchWakeNotification.c)
 *     PspComputeReportWakeFilter @ 0x1407DA454 (PspComputeReportWakeFilter.c)
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
  int OwnerSecurityDescriptor; // edi
  void *v12; // r14
  PSID Src; // r13
  ACL *Pool2; // rax
  char v15; // r13
  PVOID v16; // rcx
  __int64 v17; // rdi
  char v19; // [rsp+40h] [rbp-59h]
  char v20; // [rsp+41h] [rbp-58h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+42h] [rbp-57h] BYREF
  char v22; // [rsp+43h] [rbp-56h] BYREF
  __int64 v23; // [rsp+48h] [rbp-51h] BYREF
  int v24; // [rsp+50h] [rbp-49h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-41h] BYREF
  PVOID TokenInformation; // [rsp+60h] [rbp-39h] BYREF
  ULONG AclLength; // [rsp+68h] [rbp-31h]
  _BYTE v28[4]; // [rsp+6Ch] [rbp-2Dh] BYREF
  PSID Owner; // [rsp+70h] [rbp-29h] BYREF
  __int64 v30; // [rsp+78h] [rbp-21h] BYREF
  __int64 *v31; // [rsp+80h] [rbp-19h]
  _OWORD v32[2]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+Fh]
  __int64 v34; // [rsp+B0h] [rbp+17h] BYREF

  v3 = (*(_DWORD *)(a2 + 1536) & 0x800) == 0;
  v30 = 0LL;
  Owner = 0LL;
  v23 = 0LL;
  memset(v32, 0, sizeof(v32));
  v33 = 0LL;
  v7 = 0LL;
  v24 = 0;
  v8 = 0LL;
  v20 = 0;
  v19 = 0;
  SecurityDescriptor = 0LL;
  TokenInformation = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  if ( !v3 )
  {
    v15 = 1;
    PspLockRootJobExclusive(a2, a1, &v23);
    v17 = v23;
    if ( a2 != v23 )
    {
      ExConvertExclusiveToSharedLite((PERESOURCE)(v23 + 56));
      ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
    }
LABEL_13:
    *a3 = *(_OWORD *)(a2 + 1096);
    a3[1] = *(_OWORD *)(a2 + 1112);
    a3[2] = *(_OWORD *)(a2 + 1128);
    a3[3] = *(_OWORD *)(a2 + 1144);
    if ( v15 )
      PspUnlockJobConditionally(a2, &v23);
    PspUnlockJob(v17, a1);
    if ( v19 )
    {
      ZwDeleteWnfStateName((__int64)&v34, v10);
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
  ObjectSecurity = ObpGetObjectSecurity(a2, &SecurityDescriptor, &v20, 0LL);
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
    v12 = (void *)PsReferenceEffectiveToken(a1, 1953654867, (unsigned int)&v24, (unsigned int)&v22, (__int64)v28, 0LL);
    OwnerSecurityDescriptor = SeQueryInformationToken(v12, TokenUser, &TokenInformation);
    if ( v24 == 1 )
    {
      ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a1 + 184) + 1208LL), (unsigned __int64)v12, 0x74726853u);
    }
    else if ( v12 )
    {
      ObfDereferenceObjectWithTag(v12, 0x74726853u);
    }
    if ( OwnerSecurityDescriptor >= 0 )
    {
      Src = Owner;
      AclLength = 4 * (*((unsigned __int8 *)Owner + 1) + *(unsigned __int8 *)(*(_QWORD *)TokenInformation + 1LL)) + 48;
      Pool2 = (ACL *)ExAllocatePool2(64LL, AclLength, 1717007184LL);
      v7 = Pool2;
      if ( Pool2 )
      {
        RtlCreateAcl(Pool2, AclLength, 2u);
        RtlpAddKnownAce((int)v7, 2, 0, 0x80000000, Src, 0);
        v15 = 0;
        RtlpAddKnownAce((int)v7, 2, 0, 0x80000000, *(void **)TokenInformation, 0);
        RtlCreateSecurityDescriptor(v32, 1u);
        RtlSetDaclSecurityDescriptor(v32, 1u, v7, 0);
        OwnerSecurityDescriptor = ZwCreateWnfStateName((__int64)&v34, 3LL);
        if ( OwnerSecurityDescriptor < 0 )
        {
LABEL_19:
          ExFreePoolWithTag(v7, 0x66577350u);
          goto LABEL_20;
        }
        PspLockRootJobExclusive(a2, a1, &v23);
        if ( (*(_DWORD *)(a2 + 1536) & 0x800) != 0 )
        {
          v19 = 1;
        }
        else
        {
          *(_QWORD *)(a2 + 1096) = v34;
          v31 = &v30;
          PspComputeReportWakeFilter(a2, &v30, a2 + 1168, 0LL);
          PspEnumJobsAndProcessesInJobHierarchy(v16, 0LL, 2);
          _interlockedbittestandset((volatile signed __int32 *)(a2 + 1536), 0xBu);
          _InterlockedIncrement64(&PspJobTimeLimitsRequest);
          v8 = SecurityDescriptor;
        }
        v17 = v23;
        goto LABEL_13;
      }
    }
  }
LABEL_20:
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  if ( v8 )
  {
    LOBYTE(v10) = v20;
    ObReleaseObjectSecurityEx(v8, v10, a2);
  }
  return (unsigned int)OwnerSecurityDescriptor;
}
