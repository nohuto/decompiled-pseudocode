/*
 * XREFs of PopPowerAggregatorScreenOffEnterStateHandler @ 0x140885D10
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874ED8 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1408781A4 (PopPowerAggregatorEnterScreenOff.c)
 *     PopExecutePowerAction @ 0x1409898A4 (PopExecutePowerAction.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1409937E4 (PopPowerAggregatorEngageModernStandby.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffEnterStateHandler(__int64 a1)
{
  int v2; // ebx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+20h] [rbp-40h]
  __int64 v9; // [rsp+28h] [rbp-38h]
  unsigned __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  int v11; // [rsp+38h] [rbp-28h]
  _DWORD v12[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v13; // [rsp+48h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 64) )
  {
    PopPowerAggregatorEnterScreenOff(a1);
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 88) && *(_BYTE *)(a1 + 72) )
  {
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      PopPowerAggregatorEngageModernStandby();
      return 0LL;
    }
    if ( *(_BYTE *)(a1 + 52) )
      return 0LL;
    v2 = *(_DWORD *)(a1 + 44);
    v10 = 0LL;
    v11 = 0;
    if ( v2 == 2 || v2 == 3 || v2 == 4 )
    {
      LODWORD(v10) = 2;
    }
    else if ( v2 == 5 )
    {
      v10 = 0x8000000400000003uLL;
LABEL_17:
      *(_BYTE *)(a1 + 52) = 1;
      v12[0] = 7;
      v13 = 0LL;
      v12[1] = 128;
      PopReleaseRwLock(&PopPowerAggregatorLock);
      PopAcquirePolicyLock(v3);
      PopExecutePowerAction((unsigned int)v12, 0, (unsigned int)&v10, v2, 1);
      PopReleasePolicyLock(v5, v4, v6, v7, v8, v9);
      PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
      return 0LL;
    }
    HIDWORD(v10) = -2147483644;
    goto LABEL_17;
  }
  return 0LL;
}
