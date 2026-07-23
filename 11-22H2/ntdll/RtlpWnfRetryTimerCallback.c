/*
 * XREFs of RtlpWnfRetryTimerCallback @ 0x1800E9310
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004DD84 (RtlpWnfProcessCurrentDescriptor.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A0CE0 (NtGetCompleteWnfStateSubscription.c)
 *     RtlpGetFirstWnfNameSubscription @ 0x1800E8CF8 (RtlpGetFirstWnfNameSubscription.c)
 *     RtlpGetNextWnfNameSubscription @ 0x1800E8D34 (RtlpGetNextWnfNameSubscription.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800E8D88 (RtlpWnfCalculateAndSetNextTimer.c)
 */

void __fastcall RtlpWnfRetryTimerCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  int v3; // ebp
  _RTL_SRWLOCK *v4; // rcx
  _WNF_STATE_NAME *v5; // rdi
  unsigned __int64 v6; // rsi
  _RTL_SRWLOCK *i; // rax
  __int64 v8; // rbx
  int v9; // eax

  if ( qword_180184D10 )
  {
    v3 = 0;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180184D10 + 8));
    v4 = (_RTL_SRWLOCK *)qword_180184D10;
    *(_QWORD *)(qword_180184D10 + 88) = 0LL;
    RtlReleaseSRWLockShared(v4 + 1);
    while ( 1 )
    {
      v5 = 0LL;
      v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180184D10 + 8));
      for ( i = (_RTL_SRWLOCK *)RtlpGetFirstWnfNameSubscription(); ; i = (_RTL_SRWLOCK *)RtlpGetNextWnfNameSubscription(v8) )
      {
        v8 = (__int64)i;
        if ( !i )
          break;
        RtlAcquireSRWLockExclusive(i + 8);
        if ( *(_DWORD *)(v8 + 136) == 2 && v6 >= *(_QWORD *)(v8 + 144) )
        {
          v5 = *(_WNF_STATE_NAME **)(v8 + 128);
          *(_QWORD *)(v8 + 128) = 0LL;
          *(_DWORD *)(v8 + 136) = 0;
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v8 + 64));
          break;
        }
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v8 + 64));
      }
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_180184D10 + 8));
      if ( !v5 )
        break;
      RtlpWnfCalculateAndSetNextTimer();
      v3 = 0;
      v9 = RtlpWnfProcessCurrentDescriptor(v5, 1);
      if ( v9 == -1073741267 )
      {
        v3 = 1;
      }
      else
      {
        if ( !v9 )
          NtGetCompleteWnfStateSubscription(v5 + 1, (ULONG64 *)v5, v5[3].Data[0], 0, 0LL, 0);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      }
    }
    if ( v3 )
      RtlpWnfCalculateAndSetNextTimer();
  }
}
