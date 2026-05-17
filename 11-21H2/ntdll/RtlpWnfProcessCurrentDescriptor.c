/*
 * XREFs of RtlpWnfProcessCurrentDescriptor @ 0x18005A7BC
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18005A6A0 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800922E0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18005A9B4 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18005AF70 (RtlpDecRefWnfNameSubscription.c)
 *     RtlpWnfNameSubscriptionCompareByStateName @ 0x180080B8C (RtlpWnfNameSubscriptionCompareByStateName.c)
 *     RtlpWnfCalculateRetryTime @ 0x18009333C (RtlpWnfCalculateRetryTime.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A5F40 (NtGetCompleteWnfStateSubscription.c)
 */

__int64 __fastcall RtlpWnfProcessCurrentDescriptor(__int64 a1, int a2)
{
  unsigned int v4; // edi
  int v5; // r12d
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rbx
  int v10; // ebp
  int v11; // eax
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  __int64 **v15; // r14
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 *v19; // rax
  __int64 v20; // rax
  volatile signed __int64 *v22; // rcx

  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18017AAE0 + 8));
  v9 = *(_QWORD *)(qword_18017AAE0 + 16);
  if ( (*(_BYTE *)(qword_18017AAE0 + 24) & 1) != 0 && v9 )
    v9 ^= qword_18017AAE0 + 16;
  v10 = *(_BYTE *)(qword_18017AAE0 + 24) & 1;
  while ( v9 )
  {
    v11 = RtlpWnfNameSubscriptionCompareByStateName(a1 + 8, v9);
    if ( v11 >= 0 )
    {
      if ( v11 <= 0 )
        break;
      v12 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v12 = *(_QWORD *)v9;
    }
    if ( v10 && v12 )
      v9 ^= v12;
    else
      v9 = v12;
  }
  v13 = (v9 - 32) & -(__int64)(v9 != 0);
  if ( !v13 || *(_QWORD *)(v13 + 8) != *(_QWORD *)a1 )
    goto LABEL_34;
  RtlAcquireSRWLockExclusive(v13 + 64, v6, v7, v8);
  v14 = *(_DWORD *)(v13 + 136);
  if ( v14 != 2 )
  {
    if ( v14 != 1 )
      goto LABEL_18;
    v22 = (volatile signed __int64 *)(v13 + 64);
    if ( !a2 )
    {
      *(_QWORD *)(v13 + 128) = a1;
      RtlReleaseSRWLockExclusive(v22);
      v4 = 259;
      goto LABEL_34;
    }
LABEL_37:
    RtlReleaseSRWLockExclusive(v22);
    v4 = 128;
LABEL_34:
    RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_18017AAE0 + 8));
    return v4;
  }
  if ( a2 )
  {
    v22 = (volatile signed __int64 *)(v13 + 64);
    goto LABEL_37;
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(v13 + 128));
  *(_QWORD *)(v13 + 128) = 0LL;
  *(_DWORD *)(v13 + 136) = 0;
LABEL_18:
  _InterlockedAdd((volatile signed __int32 *)(v13 + 116), 1u);
  *(_DWORD *)(v13 + 136) = 1;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v13 + 64));
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_18017AAE0 + 8));
  v15 = (__int64 **)(v13 + 72);
  while ( 1 )
  {
    v4 = 0;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v13, 0LL) == -1073741267 )
      v4 = -1073741267;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v13, 1LL) == -1073741267 )
      v4 = -1073741267;
    RtlAcquireSRWLockExclusive(v13 + 64, v16, v17, v18);
    v19 = *v15;
    ++v5;
    while ( v19 != (__int64 *)v15 )
    {
      *((_DWORD *)v19 + 38) = 0;
      v19 = (__int64 *)*v19;
    }
    v20 = *(_QWORD *)(v13 + 128);
    if ( !v20 )
      break;
    *(_QWORD *)(v13 + 128) = 0LL;
    a1 = v20;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v13 + 64));
  }
  if ( v4 )
  {
    *(_QWORD *)(v13 + 128) = a1;
    *(_DWORD *)(v13 + 136) = 2;
    RtlpWnfCalculateRetryTime(v13);
  }
  else
  {
    *(_DWORD *)(v13 + 136) = 0;
    if ( !*(_DWORD *)(v13 + 24) || *(_DWORD *)(a1 + 16) - *(_DWORD *)(v13 + 24) > 0 )
      *(_DWORD *)(v13 + 24) = *(_DWORD *)(a1 + 16);
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v13 + 64));
  RtlpDecRefWnfNameSubscription(v13);
  if ( v5 > 1 )
  {
    NtGetCompleteWnfStateSubscription(a1 + 8, a1, *(unsigned int *)(a1 + 24), v4, 0LL, 0);
    if ( !v4 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
    return 128;
  }
  return v4;
}
