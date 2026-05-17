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

void RtlpWnfRetryTimerCallback()
{
  int v0; // ebp
  __int64 v1; // rcx
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 i; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rbx
  int v9; // eax

  if ( qword_18017AAE0 )
  {
    v0 = 0;
    RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18017AAE0 + 8));
    v1 = qword_18017AAE0;
    *(_QWORD *)(qword_18017AAE0 + 88) = 0LL;
    RtlReleaseSRWLockShared((volatile signed __int64 *)(v1 + 8));
    while ( 1 )
    {
      v2 = 0LL;
      v3 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
      RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18017AAE0 + 8));
      for ( i = RtlpGetFirstWnfNameSubscription(); ; i = RtlpGetNextWnfNameSubscription(v8) )
      {
        v8 = i;
        if ( !i )
          break;
        RtlAcquireSRWLockExclusive(i + 64, v5, v6, v7);
        if ( *(_DWORD *)(v8 + 136) == 2 && v3 >= *(_QWORD *)(v8 + 144) )
        {
          v2 = *(_QWORD *)(v8 + 128);
          *(_QWORD *)(v8 + 128) = 0LL;
          *(_DWORD *)(v8 + 136) = 0;
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v8 + 64));
          break;
        }
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v8 + 64));
      }
      RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_18017AAE0 + 8));
      if ( !v2 )
        break;
      RtlpWnfCalculateAndSetNextTimer();
      v0 = 0;
      v9 = RtlpWnfProcessCurrentDescriptor(v2, 1);
      if ( v9 == -1073741267 )
      {
        v0 = 1;
      }
      else
      {
        if ( !v9 )
          NtGetCompleteWnfStateSubscription(v2 + 8, v2, *(unsigned int *)(v2 + 24), 0LL, 0LL, 0);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
      }
    }
    if ( v0 )
      RtlpWnfCalculateAndSetNextTimer();
  }
}
