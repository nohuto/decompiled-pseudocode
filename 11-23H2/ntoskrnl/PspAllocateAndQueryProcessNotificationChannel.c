/*
 * XREFs of PspAllocateAndQueryProcessNotificationChannel @ 0x1407D1394
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14041CB30 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x14041CCD0 (ZwDeleteWnfStateName.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD530 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x140735460 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140736770 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736810 (RtlCreateAcl.c)
 */

NTSTATUS __fastcall PspAllocateAndQueryProcessNotificationChannel(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v4; // rdi
  char v5; // bl
  char v9; // r15
  NTSTATUS result; // eax
  unsigned int v11; // ecx
  int *v12; // rdx
  int v13; // r8d
  int v14; // eax
  unsigned __int8 v15; // cf
  char v16; // [rsp+40h] [rbp-89h]
  char v17; // [rsp+41h] [rbp-88h]
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-81h] BYREF
  __int64 v19; // [rsp+68h] [rbp-61h]
  _WNF_STATE_NAME StateName; // [rsp+70h] [rbp-59h] BYREF
  ACL Acl; // [rsp+80h] [rbp-49h] BYREF

  v3 = 0;
  v4 = a2 + 2464;
  v19 = 0LL;
  v5 = 0;
  v9 = 0;
  v17 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v16 = 0;
  StateName = 0LL;
  if ( !*(_QWORD *)(a2 + 2464) )
  {
    RtlCreateAcl(&Acl, 0x58u, 2u);
    RtlpAddKnownAce(&Acl, 2u, 0, 1, (unsigned __int8 *)SeWorldSid, 0);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    result = ZwCreateWnfStateName(&StateName, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 0, SecurityDescriptor);
    if ( result < 0 )
      return result;
    --*(_WORD *)(a1 + 484);
    ExAcquirePushLockExclusiveEx(a2 + 1080, 0LL);
    if ( *(_QWORD *)v4 )
    {
      v17 = 1;
    }
    else
    {
      *(_WNF_STATE_NAME *)v4 = StateName;
      *(_QWORD *)(a2 + 2500) = *(_QWORD *)(a3 + 36);
      v16 = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1080));
    KeAbPostRelease(a2 + 1080);
    KeLeaveCriticalRegionThread(a1);
    v5 = v17;
    v3 = v16;
  }
  v11 = 0;
  v12 = (int *)(a3 + 8);
  *(_OWORD *)a3 = *(_OWORD *)v4;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(v4 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(v4 + 32);
  do
  {
    v13 = *v12 & 0x7FFFFFFF;
    *v12 = v13;
    if ( v3 )
    {
      v14 = *(_DWORD *)(a3 + 36);
      v15 = _bittest(&v14, v11);
      v3 = v16;
      if ( v15 )
      {
        if ( v13 )
          v9 = 1;
      }
    }
    ++v11;
    ++v12;
  }
  while ( v11 < 7 );
  if ( v9 )
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)v4, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( v5 )
    ZwDeleteWnfStateName(&StateName);
  return 0;
}
