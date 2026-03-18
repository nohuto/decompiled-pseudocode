/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x1407A6C54
 * Callers:
 *     PopUmpoProcessMessage @ 0x1407A6A78 (PopUmpoProcessMessage.c)
 * Callees:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14032BB08 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14032EFC0 (PopIdleCancelAoAcDozeS4Timer.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14059E178 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopSetNewPolicyValue @ 0x14082C4FC (PopSetNewPolicyValue.c)
 *     PopPowerRequestOverrideInitialize @ 0x140862EA4 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140875AF0 (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerRequestNotificationsBegin @ 0x140981644 (PopPowerRequestNotificationsBegin.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     PfPowerActionNotify @ 0x140A9FE74 (PfPowerActionNotify.c)
 */

__int64 __fastcall PopUmpoProcessPowerMessage(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  switch ( *(_DWORD *)a1 )
  {
    case 4:
      result = PopSetNewPolicyValue(a1 + 8, (unsigned int)(*(_DWORD *)a1 - 4));
      if ( (int)result < 0 )
        return result;
      break;
    case 7:
      if ( *(_BYTE *)(a1 + 20) && *(_DWORD *)(a1 + 12) == 18 )
        PfPowerActionNotify(5LL);
      break;
    case 8:
      PopPowerRequestHandleRequestOverrideQueryResponse((unsigned int *)(a1 + 8));
      break;
    case 0xA:
      if ( *(_BYTE *)(a1 + 8) )
        PopPowerRequestNotificationsBegin();
      PopPowerRequestOverrideInitialize();
      PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
      PopPowerAggregatorUmpoInitialized = 1;
      PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
      PopReleaseRwLock(&PopPowerAggregatorLock);
      if ( qword_140C6AFD0 )
        qword_140C6AFD0();
      break;
    case 0xE:
      v2 = *(_DWORD *)(a1 + 8);
      PopAcquirePolicyLock(a1);
      dword_140C3CD30 = v2;
      if ( byte_140C3CD51 )
      {
        PopIdleCancelAoAcDozeS4Timer(4u);
        PopIdleArmAoAcDozeS4Timer();
      }
      PopReleasePolicyLock(v4, v3, v5);
      break;
  }
  return 0LL;
}
