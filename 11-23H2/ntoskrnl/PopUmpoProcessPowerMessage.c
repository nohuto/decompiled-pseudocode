/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x1407A6E44
 * Callers:
 *     PopUmpoProcessMessage @ 0x1407A6C68 (PopUmpoProcessMessage.c)
 * Callees:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14032BD98 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14032F250 (PopIdleCancelAoAcDozeS4Timer.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14059E668 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopSetNewPolicyValue @ 0x14082C7FC (PopSetNewPolicyValue.c)
 *     PopPowerRequestOverrideInitialize @ 0x1408630E4 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140875D30 (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerRequestNotificationsBegin @ 0x140981844 (PopPowerRequestNotificationsBegin.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     PfPowerActionNotify @ 0x140A9FCE4 (PfPowerActionNotify.c)
 */

__int64 __fastcall PopUmpoProcessPowerMessage(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx

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
      dword_140C3CCD0 = v2;
      if ( byte_140C3CCF1 )
      {
        PopIdleCancelAoAcDozeS4Timer(4u);
        PopIdleArmAoAcDozeS4Timer();
      }
      PopReleasePolicyLock();
      break;
  }
  return 0LL;
}
