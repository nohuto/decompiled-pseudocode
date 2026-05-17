/*
 * XREFs of RtlpWnfRetryTimerCallback @ 0x1800EA640
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004DC24 (RtlpWnfProcessCurrentDescriptor.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A2DA0 (NtGetCompleteWnfStateSubscription.c)
 *     RtlpGetFirstWnfNameSubscription @ 0x1800EA028 (RtlpGetFirstWnfNameSubscription.c)
 *     RtlpGetNextWnfNameSubscription @ 0x1800EA064 (RtlpGetNextWnfNameSubscription.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800EA0B8 (RtlpWnfCalculateAndSetNextTimer.c)
 */

void __fastcall RtlpWnfRetryTimerCallback(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v4; // ebp
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 i; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  int v17; // eax

  if ( qword_180187E00 )
  {
    v4 = 0;
    RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_180187E00 + 8), a2, a3, a4);
    v5 = qword_180187E00;
    *(_QWORD *)(qword_180187E00 + 88) = 0LL;
    RtlReleaseSRWLockShared((volatile signed __int64 *)(v5 + 8));
    while ( 1 )
    {
      v7 = 0LL;
      v8 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
      RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_180187E00 + 8), MEMORY[0x7FFE03B0], 0x7FFE0008uLL, v6);
      for ( i = RtlpGetFirstWnfNameSubscription(); ; i = RtlpGetNextWnfNameSubscription(v10) )
      {
        v10 = i;
        if ( !i )
          break;
        RtlAcquireSRWLockExclusive((volatile signed __int64 *)(i + 64));
        if ( *(_DWORD *)(v10 + 136) == 2 && v8 >= *(_QWORD *)(v10 + 144) )
        {
          v7 = *(_QWORD *)(v10 + 128);
          *(_QWORD *)(v10 + 128) = 0LL;
          *(_DWORD *)(v10 + 136) = 0;
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v10 + 64));
          break;
        }
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v10 + 64));
      }
      RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_180187E00 + 8));
      if ( !v7 )
        break;
      RtlpWnfCalculateAndSetNextTimer(v12, v11, v13, v14);
      v4 = 0;
      v17 = RtlpWnfProcessCurrentDescriptor(v7, 1uLL, v15, v16);
      if ( v17 == -1073741267 )
      {
        v4 = 1;
      }
      else
      {
        if ( !v17 )
          NtGetCompleteWnfStateSubscription();
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
      }
    }
    if ( v4 )
      RtlpWnfCalculateAndSetNextTimer(v12, v11, v13, v14);
  }
}
