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

__int64 __fastcall RtlpWnfProcessCurrentDescriptor(_WNF_STATE_NAME *BaseAddress, int a2)
{
  ULONG v4; // edi
  int v5; // r12d
  unsigned __int64 v6; // rbx
  int v7; // ebp
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 **v12; // r14
  __int64 *v13; // rax
  _WNF_STATE_NAME *v14; // rax
  _RTL_SRWLOCK *v16; // rcx

  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180184D10 + 8));
  v6 = *(_QWORD *)(qword_180184D10 + 16);
  if ( (*(_BYTE *)(qword_180184D10 + 24) & 1) != 0 && v6 )
    v6 ^= qword_180184D10 + 16;
  v7 = *(_BYTE *)(qword_180184D10 + 24) & 1;
  while ( v6 )
  {
    v8 = RtlpWnfNameSubscriptionCompareByStateName(&BaseAddress[1], v6);
    if ( v8 >= 0 )
    {
      if ( v8 <= 0 )
        break;
      v9 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v9 = *(_QWORD *)v6;
    }
    if ( v7 && v9 )
      v6 ^= v9;
    else
      v6 = v9;
  }
  v10 = (v6 - 32) & -(__int64)(v6 != 0);
  if ( !v10 || *(_QWORD *)(v10 + 8) != *BaseAddress )
    goto LABEL_33;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v10 + 64));
  v11 = *(_DWORD *)(v10 + 136);
  if ( v11 != 2 )
  {
    if ( v11 != 1 )
      goto LABEL_16;
    v16 = (_RTL_SRWLOCK *)(v10 + 64);
    if ( !a2 )
    {
      *(_QWORD *)(v10 + 128) = BaseAddress;
      RtlReleaseSRWLockExclusive(v16);
      v4 = 259;
      goto LABEL_33;
    }
LABEL_36:
    RtlReleaseSRWLockExclusive(v16);
    v4 = 128;
LABEL_33:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_180184D10 + 8));
    return v4;
  }
  if ( a2 )
  {
    v16 = (_RTL_SRWLOCK *)(v10 + 64);
    goto LABEL_36;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(v10 + 128));
  *(_QWORD *)(v10 + 128) = 0LL;
  *(_DWORD *)(v10 + 136) = 0;
LABEL_16:
  _InterlockedAdd((volatile signed __int32 *)(v10 + 116), 1u);
  *(_DWORD *)(v10 + 136) = 1;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v10 + 64));
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_180184D10 + 8));
  v12 = (__int64 **)(v10 + 72);
  while ( 1 )
  {
    v4 = 0;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(BaseAddress, v10, 0LL) == -1073741267 )
      v4 = -1073741267;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(BaseAddress, v10, 1LL) == -1073741267 )
      v4 = -1073741267;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v10 + 64));
    v13 = *v12;
    ++v5;
    while ( v13 != (__int64 *)v12 )
    {
      *((_DWORD *)v13 + 38) = 0;
      v13 = (__int64 *)*v13;
    }
    v14 = *(_WNF_STATE_NAME **)(v10 + 128);
    if ( !v14 )
      break;
    *(_QWORD *)(v10 + 128) = 0LL;
    BaseAddress = v14;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v10 + 64));
  }
  if ( v4 )
  {
    *(_QWORD *)(v10 + 128) = BaseAddress;
    *(_DWORD *)(v10 + 136) = 2;
    RtlpWnfCalculateRetryTime(v10);
  }
  else
  {
    *(_DWORD *)(v10 + 136) = 0;
    if ( !*(_DWORD *)(v10 + 24) || (signed int)(BaseAddress[2].Data[0] - *(_DWORD *)(v10 + 24)) > 0 )
      *(_DWORD *)(v10 + 24) = BaseAddress[2].Data[0];
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v10 + 64));
  RtlpDecRefWnfNameSubscription((PVOID)v10);
  if ( v5 > 1 )
  {
    NtGetCompleteWnfStateSubscription(BaseAddress + 1, (ULONG64 *)BaseAddress, BaseAddress[3].Data[0], v4, 0LL, 0);
    if ( !v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return 128;
  }
  return v4;
}
