/*
 * XREFs of RtlpWnfProcessCurrentDescriptor @ 0x18004DD84
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18004C860 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800E9310 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DF68 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18004FBF8 (RtlpDecRefWnfNameSubscription.c)
 *     RtlpWnfNameSubscriptionCompareByStateName @ 0x18007BB6C (RtlpWnfNameSubscriptionCompareByStateName.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A0CE0 (NtGetCompleteWnfStateSubscription.c)
 *     RtlpWnfCalculateRetryTime @ 0x1800E8E64 (RtlpWnfCalculateRetryTime.c)
 */

__int64 __fastcall RtlpWnfProcessCurrentDescriptor(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v5; // r14d
  unsigned int v6; // edi
  int v7; // r12d
  unsigned __int64 v8; // rbx
  int v9; // ebp
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  __int64 **v14; // r14
  __int64 *v15; // rax
  __int64 v16; // rax
  volatile signed __int64 *v18; // rcx

  v5 = a2;
  v6 = 0;
  v7 = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_180184D10 + 8), a2, a3, a4);
  v8 = *(_QWORD *)(qword_180184D10 + 16);
  if ( (*(_BYTE *)(qword_180184D10 + 24) & 1) != 0 && v8 )
    v8 ^= qword_180184D10 + 16;
  v9 = *(_BYTE *)(qword_180184D10 + 24) & 1;
  while ( v8 )
  {
    v10 = RtlpWnfNameSubscriptionCompareByStateName(a1 + 8, v8);
    if ( v10 >= 0 )
    {
      if ( v10 <= 0 )
        break;
      v11 = *(_QWORD *)(v8 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v8;
    }
    if ( v9 && v11 )
      v8 ^= v11;
    else
      v8 = v11;
  }
  v12 = (v8 - 32) & -(__int64)(v8 != 0);
  if ( !v12 || *(_QWORD *)(v12 + 8) != *(_QWORD *)a1 )
    goto LABEL_33;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v12 + 64));
  v13 = *(_DWORD *)(v12 + 136);
  if ( v13 != 2 )
  {
    if ( v13 != 1 )
      goto LABEL_16;
    v18 = (volatile signed __int64 *)(v12 + 64);
    if ( !v5 )
    {
      *(_QWORD *)(v12 + 128) = a1;
      RtlReleaseSRWLockExclusive(v18);
      v6 = 259;
      goto LABEL_33;
    }
LABEL_36:
    RtlReleaseSRWLockExclusive(v18);
    v6 = 128;
LABEL_33:
    RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_180184D10 + 8));
    return v6;
  }
  if ( v5 )
  {
    v18 = (volatile signed __int64 *)(v12 + 64);
    goto LABEL_36;
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(v12 + 128));
  *(_QWORD *)(v12 + 128) = 0LL;
  *(_DWORD *)(v12 + 136) = 0;
LABEL_16:
  _InterlockedAdd((volatile signed __int32 *)(v12 + 116), 1u);
  *(_DWORD *)(v12 + 136) = 1;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v12 + 64));
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_180184D10 + 8));
  v14 = (__int64 **)(v12 + 72);
  while ( 1 )
  {
    v6 = 0;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v12, 0LL) == -1073741267 )
      v6 = -1073741267;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v12, 1LL) == -1073741267 )
      v6 = -1073741267;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v12 + 64));
    v15 = *v14;
    ++v7;
    while ( v15 != (__int64 *)v14 )
    {
      *((_DWORD *)v15 + 38) = 0;
      v15 = (__int64 *)*v15;
    }
    v16 = *(_QWORD *)(v12 + 128);
    if ( !v16 )
      break;
    *(_QWORD *)(v12 + 128) = 0LL;
    a1 = v16;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v12 + 64));
  }
  if ( v6 )
  {
    *(_QWORD *)(v12 + 128) = a1;
    *(_DWORD *)(v12 + 136) = 2;
    RtlpWnfCalculateRetryTime(v12);
  }
  else
  {
    *(_DWORD *)(v12 + 136) = 0;
    if ( !*(_DWORD *)(v12 + 24) || *(_DWORD *)(a1 + 16) - *(_DWORD *)(v12 + 24) > 0 )
      *(_DWORD *)(v12 + 24) = *(_DWORD *)(a1 + 16);
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v12 + 64));
  RtlpDecRefWnfNameSubscription(v12);
  if ( v7 > 1 )
  {
    NtGetCompleteWnfStateSubscription(a1 + 8, a1, *(unsigned int *)(a1 + 24), v6, 0LL, 0);
    if ( !v6 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
    return 128;
  }
  return v6;
}
