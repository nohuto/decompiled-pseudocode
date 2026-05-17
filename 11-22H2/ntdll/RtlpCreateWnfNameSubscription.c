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

__int64 __fastcall RtlpCreateWnfNameSubscription(__int64 *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  bool v5; // bl
  volatile signed __int64 *v7; // r15
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  int v10; // ebp
  int v11; // eax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 Heap; // rax
  __int64 v15; // r14
  unsigned __int64 v16; // rdi
  int v17; // ebp
  int v18; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  int v22; // ebp
  unsigned __int64 v23; // rax
  unsigned __int64 v25; // [rsp+20h] [rbp-48h] BYREF

  v4 = qword_180184D10;
  v5 = 0;
  v25 = a2;
  if ( a3 )
    return 3221225485LL;
  v7 = (volatile signed __int64 *)(qword_180184D10 + 8);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_180184D10 + 8), a2, 0LL, a4);
  v8 = v4 + 16;
  v9 = *(_QWORD *)v8;
  if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v9 )
    v9 ^= v8;
  v10 = *(_BYTE *)(v8 + 8) & 1;
  while ( v9 )
  {
    v11 = RtlpWnfNameSubscriptionCompareByStateName(&v25, v9);
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
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 116));
    *a1 = v13;
    RtlReleaseSRWLockShared(v7);
    return 0LL;
  }
  RtlReleaseSRWLockShared(v7);
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 160LL);
  v15 = Heap;
  if ( Heap )
  {
    memset_thunk_772440563353939046((void *)(Heap + 4), 0, 0x9CuLL);
    *(_DWORD *)v15 = 10488082;
    *(_QWORD *)(v15 + 16) = v25;
    *(_QWORD *)(v15 + 56) = 0LL;
    *(_QWORD *)(v15 + 64) = 0LL;
    *(_QWORD *)(v15 + 80) = v15 + 72;
    *(_QWORD *)(v15 + 72) = v15 + 72;
    *(_DWORD *)(v15 + 116) = 1;
    *(_DWORD *)(v15 + 136) = 0;
    *(_QWORD *)(v15 + 128) = 0LL;
    *(_QWORD *)(v15 + 8) = 0LL;
    RtlAcquireSRWLockExclusive(v7);
    v16 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v16 )
      v16 ^= v8;
    v17 = *(_BYTE *)(v8 + 8) & 1;
    while ( v16 )
    {
      v18 = RtlpWnfNameSubscriptionCompareByStateName(&v25, v16);
      if ( v18 >= 0 )
      {
        if ( v18 <= 0 )
          break;
        v19 = *(_QWORD *)(v16 + 8);
      }
      else
      {
        v19 = *(_QWORD *)v16;
      }
      if ( v17 && v19 )
        v16 ^= v19;
      else
        v16 = v19;
    }
    v20 = (v16 - 32) & -(__int64)(v16 != 0);
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 116));
      *a1 = v20;
      RtlReleaseSRWLockExclusive(v7);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
    }
    else
    {
      v21 = *(_QWORD *)v8;
      if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v21 )
        v21 ^= v8;
      v22 = *(_BYTE *)(v8 + 8) & 1;
      if ( v21 )
      {
        while ( 1 )
        {
          if ( (int)RtlpWnfNameSubscriptionCompareByStateName(v15 + 16, v21) < 0 )
          {
            v23 = *(_QWORD *)v21;
            if ( v22 )
            {
              if ( !v23 )
                break;
              v23 ^= v21;
            }
            if ( !v23 )
              break;
          }
          else
          {
            v23 = *(_QWORD *)(v21 + 8);
            if ( v22 )
            {
              if ( !v23 )
                goto LABEL_40;
              v23 ^= v21;
            }
            if ( !v23 )
            {
LABEL_40:
              v5 = 1;
              break;
            }
          }
          v21 = v23;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64 *)v8, v21, v5, v15 + 32);
      *a1 = v15;
      RtlReleaseSRWLockExclusive(v7);
    }
    return 0LL;
  }
  return 3221225495LL;
}
