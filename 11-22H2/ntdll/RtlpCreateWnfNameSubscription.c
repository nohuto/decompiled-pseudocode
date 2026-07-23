/*
 * XREFs of RtlpCreateWnfNameSubscription @ 0x18005BFEC
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18005BC2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x180039370 (RtlRbInsertNodeEx.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpWnfNameSubscriptionCompareByStateName @ 0x18007BB6C (RtlpWnfNameSubscriptionCompareByStateName.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpCreateWnfNameSubscription(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  BOOLEAN v4; // bl
  _RTL_SRWLOCK *v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  int v9; // ebp
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  char *Heap; // rax
  char *v14; // r14
  unsigned __int64 v15; // rdi
  int v16; // ebp
  int v17; // eax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  int v21; // ebp
  unsigned __int64 v22; // rax
  __int64 v24; // [rsp+20h] [rbp-48h] BYREF

  v3 = qword_180184D10;
  v4 = 0;
  v24 = a2;
  if ( a3 )
    return 3221225485LL;
  v6 = (_RTL_SRWLOCK *)(qword_180184D10 + 8);
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180184D10 + 8));
  v7 = v3 + 16;
  v8 = *(_QWORD *)v7;
  if ( (*(_BYTE *)(v7 + 8) & 1) != 0 && v8 )
    v8 ^= v7;
  v9 = *(_BYTE *)(v7 + 8) & 1;
  while ( v8 )
  {
    v10 = RtlpWnfNameSubscriptionCompareByStateName(&v24, v8);
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
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 116));
    *a1 = v12;
    RtlReleaseSRWLockShared(v6);
    return 0LL;
  }
  RtlReleaseSRWLockShared(v6);
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
  v14 = Heap;
  if ( Heap )
  {
    memset_thunk_772440563353939046(Heap + 4, 0, 0x9CuLL);
    *(_DWORD *)v14 = 10488082;
    *((_QWORD *)v14 + 2) = v24;
    *((_QWORD *)v14 + 7) = 0LL;
    *((_QWORD *)v14 + 8) = 0LL;
    *((_QWORD *)v14 + 10) = v14 + 72;
    *((_QWORD *)v14 + 9) = v14 + 72;
    *((_DWORD *)v14 + 29) = 1;
    *((_DWORD *)v14 + 34) = 0;
    *((_QWORD *)v14 + 16) = 0LL;
    *((_QWORD *)v14 + 1) = 0LL;
    RtlAcquireSRWLockExclusive(v6);
    v15 = *(_QWORD *)v7;
    if ( (*(_BYTE *)(v7 + 8) & 1) != 0 && v15 )
      v15 ^= v7;
    v16 = *(_BYTE *)(v7 + 8) & 1;
    while ( v15 )
    {
      v17 = RtlpWnfNameSubscriptionCompareByStateName(&v24, v15);
      if ( v17 >= 0 )
      {
        if ( v17 <= 0 )
          break;
        v18 = *(_QWORD *)(v15 + 8);
      }
      else
      {
        v18 = *(_QWORD *)v15;
      }
      if ( v16 && v18 )
        v15 ^= v18;
      else
        v15 = v18;
    }
    v19 = (v15 - 32) & -(__int64)(v15 != 0);
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 116));
      *a1 = v19;
      RtlReleaseSRWLockExclusive(v6);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
    }
    else
    {
      v20 = *(_QWORD *)v7;
      if ( (*(_BYTE *)(v7 + 8) & 1) != 0 && v20 )
        v20 ^= v7;
      v21 = *(_BYTE *)(v7 + 8) & 1;
      if ( v20 )
      {
        while ( 1 )
        {
          if ( (int)RtlpWnfNameSubscriptionCompareByStateName(v14 + 16, v20) < 0 )
          {
            v22 = *(_QWORD *)v20;
            if ( v21 )
            {
              if ( !v22 )
                break;
              v22 ^= v20;
            }
            if ( !v22 )
              break;
          }
          else
          {
            v22 = *(_QWORD *)(v20 + 8);
            if ( v21 )
            {
              if ( !v22 )
                goto LABEL_40;
              v22 ^= v20;
            }
            if ( !v22 )
            {
LABEL_40:
              v4 = 1;
              break;
            }
          }
          v20 = v22;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)v7, (PRTL_BALANCED_NODE)v20, v4, (PRTL_BALANCED_NODE)(v14 + 32));
      *a1 = (__int64)v14;
      RtlReleaseSRWLockExclusive(v6);
    }
    return 0LL;
  }
  return 3221225495LL;
}
