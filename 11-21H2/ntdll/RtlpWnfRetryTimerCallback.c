/*
 * XREFs of RtlpWnfRetryTimerCallback @ 0x1800922E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18005A7BC (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x180092468 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpGetNextWnfNameSubscription @ 0x180092534 (RtlpGetNextWnfNameSubscription.c)
 *     RtlpGetFirstWnfNameSubscription @ 0x180092584 (RtlpGetFirstWnfNameSubscription.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A5F40 (NtGetCompleteWnfStateSubscription.c)
 */

void __fastcall RtlpWnfRetryTimerCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  int v3; // ebp
  _RTL_SRWLOCK *v4; // rcx
  _WNF_STATE_NAME *Value; // rdi
  unsigned __int64 v6; // rsi
  _RTL_SRWLOCK *i; // rax
  _RTL_SRWLOCK *v8; // rbx
  int v9; // eax

  if ( qword_18017AAE0 )
  {
    v3 = 0;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_18017AAE0 + 8));
    v4 = (_RTL_SRWLOCK *)qword_18017AAE0;
    *(_QWORD *)(qword_18017AAE0 + 88) = 0LL;
    RtlReleaseSRWLockShared(v4 + 1);
    while ( 1 )
    {
      Value = 0LL;
      v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_18017AAE0 + 8));
      for ( i = (_RTL_SRWLOCK *)RtlpGetFirstWnfNameSubscription(); ; i = (_RTL_SRWLOCK *)RtlpGetNextWnfNameSubscription(v8) )
      {
        v8 = i;
        if ( !i )
          break;
        RtlAcquireSRWLockExclusive(i + 8);
        if ( v8[17].0 == 2 && v6 >= v8[18].Value )
        {
          Value = (_WNF_STATE_NAME *)v8[16].Value;
          v8[16].Value = 0LL;
          *(_DWORD *)&v8[17].0 = 0;
          RtlReleaseSRWLockExclusive(v8 + 8);
          break;
        }
        RtlReleaseSRWLockExclusive(v8 + 8);
      }
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_18017AAE0 + 8));
      if ( !Value )
        break;
      RtlpWnfCalculateAndSetNextTimer();
      v3 = 0;
      v9 = RtlpWnfProcessCurrentDescriptor(Value, 1);
      if ( v9 == -1073741267 )
      {
        v3 = 1;
      }
      else
      {
        if ( !v9 )
          NtGetCompleteWnfStateSubscription(Value + 1, (ULONG64 *)Value, Value[3].Data[0], 0, 0LL, 0);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Value);
      }
    }
    if ( v3 )
      RtlpWnfCalculateAndSetNextTimer();
  }
}
