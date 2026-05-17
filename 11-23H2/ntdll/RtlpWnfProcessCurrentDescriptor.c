/*
 * XREFs of RtlpWnfProcessCurrentDescriptor @ 0x18004DC24
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18004C700 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800EA640 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DE08 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18004FA98 (RtlpDecRefWnfNameSubscription.c)
 *     RtlpWnfNameSubscriptionCompareByStateName @ 0x18007C1DC (RtlpWnfNameSubscriptionCompareByStateName.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A2DA0 (NtGetCompleteWnfStateSubscription.c)
 *     RtlpWnfCalculateRetryTime @ 0x1800EA194 (RtlpWnfCalculateRetryTime.c)
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
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_180187E00 + 8), a2, a3, a4);
  v8 = *(_QWORD *)(qword_180187E00 + 16);
  if ( (*(_BYTE *)(qword_180187E00 + 24) & 1) != 0 && v8 )
    v8 ^= qword_180187E00 + 16;
  v9 = *(_BYTE *)(qword_180187E00 + 24) & 1;
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
    RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_180187E00 + 8));
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
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_180187E00 + 8));
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
