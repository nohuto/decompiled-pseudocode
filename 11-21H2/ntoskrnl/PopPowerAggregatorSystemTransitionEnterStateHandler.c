/*
 * XREFs of PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140806FC0
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140808E28 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestRevokeRequests @ 0x140397BB4 (PopPowerRequestRevokeRequests.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x14039ADE8 (PopGetMonitorReasonFromPowerEventId.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopAcquirePowerRequestPushLock @ 0x140753094 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140809310 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x140809838 (PopSleepstudyStartNextSession.c)
 */

__int64 __fastcall PopPowerAggregatorSystemTransitionEnterStateHandler(__int64 a1)
{
  __int64 MonitorReasonFromPowerEventId; // rax
  unsigned int v3; // ebx
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 56) != 5 )
  {
    MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(*(_DWORD *)(a1 + 60));
    memset(v5, 0, sizeof(v5));
    v3 = MonitorReasonFromPowerEventId & 0xFFFFFF;
    LODWORD(v5[0]) = 5;
    PopPowerAggregatorSetCurrentState(a1, v5);
    PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
    if ( qword_140C5AD70 )
      qword_140C5AD70(1LL);
    PopAcquirePowerRequestPushLock(1);
    PopPowerRequestRevokeRequests(10, 1);
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    KeSetEvent((PRKEVENT)(a1 + 264), 0, 0);
    PopSleepstudyStartNextSession(3LL, v3);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  }
  return 0LL;
}
