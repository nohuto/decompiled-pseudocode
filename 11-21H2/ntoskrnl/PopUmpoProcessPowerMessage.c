/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x1407EFD2C
 * Callers:
 *     PopUmpoProcessMessage @ 0x1407EFC00 (PopUmpoProcessMessage.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140369100 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14036A5FC (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1405DC298 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopSetNewPolicyValue @ 0x1407FD344 (PopSetNewPolicyValue.c)
 *     PopPowerRequestOverrideInitialize @ 0x140863534 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestNotificationsBegin @ 0x140989DD4 (PopPowerRequestNotificationsBegin.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 *     PfPowerActionNotify @ 0x140A49250 (PfPowerActionNotify.c)
 */

__int64 __fastcall PopUmpoProcessPowerMessage(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

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
      if ( qword_140C5AE00 )
        qword_140C5AE00();
      break;
    case 0xE:
      v2 = *(_DWORD *)(a1 + 8);
      PopAcquirePolicyLock(a1);
      dword_140C22710 = v2;
      if ( byte_140C22731 )
      {
        PopIdleCancelAoAcDozeS4Timer(4u);
        PopIdleArmAoAcDozeS4Timer();
      }
      PopReleasePolicyLock(v4, v3);
      break;
  }
  return 0LL;
}
