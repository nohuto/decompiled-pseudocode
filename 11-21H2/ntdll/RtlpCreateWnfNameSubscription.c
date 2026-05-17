/*
 * XREFs of RtlpCreateWnfNameSubscription @ 0x180059EFC
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x180059C2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18001AD20 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpWnfNameSubscriptionCompareByStateName @ 0x180080B8C (RtlpWnfNameSubscriptionCompareByStateName.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall RtlpCreateWnfNameSubscription(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  bool v4; // bl
  volatile signed __int64 *v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  int v9; // ebp
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 Heap; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdi
  int v19; // ebp
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  int v24; // ebp
  unsigned __int64 v25; // rax
  __int64 v27; // [rsp+20h] [rbp-48h] BYREF

  v3 = qword_18017AAE0;
  v4 = 0;
  v27 = a2;
  if ( a3 )
    return 3221225485LL;
  v6 = (volatile signed __int64 *)(qword_18017AAE0 + 8);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18017AAE0 + 8));
  v7 = v3 + 16;
  v8 = *(_QWORD *)v7;
  if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
  {
    if ( v8 )
      v8 ^= v7;
    else
      v8 = 0LL;
  }
  v9 = *(_BYTE *)(v7 + 8) & 1;
  while ( v8 )
  {
    v10 = RtlpWnfNameSubscriptionCompareByStateName(&v27, v8);
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
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 160LL);
  v14 = Heap;
  if ( Heap )
  {
    memset((void *)(Heap + 4), 0, 0x9CuLL);
    *(_DWORD *)v14 = 10488082;
    *(_QWORD *)(v14 + 16) = v27;
    *(_QWORD *)(v14 + 56) = 0LL;
    *(_QWORD *)(v14 + 64) = 0LL;
    *(_QWORD *)(v14 + 80) = v14 + 72;
    *(_QWORD *)(v14 + 72) = v14 + 72;
    *(_DWORD *)(v14 + 116) = 1;
    *(_DWORD *)(v14 + 136) = 0;
    *(_QWORD *)(v14 + 128) = 0LL;
    *(_QWORD *)(v14 + 8) = 0LL;
    RtlAcquireSRWLockExclusive((unsigned __int64)v6, v15, v16, v17);
    v18 = *(_QWORD *)v7;
    if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
    {
      if ( v18 )
        v18 ^= v7;
      else
        v18 = 0LL;
    }
    v19 = *(_BYTE *)(v7 + 8) & 1;
    while ( v18 )
    {
      v20 = RtlpWnfNameSubscriptionCompareByStateName(&v27, v18);
      if ( v20 >= 0 )
      {
        if ( v20 <= 0 )
          break;
        v21 = *(_QWORD *)(v18 + 8);
      }
      else
      {
        v21 = *(_QWORD *)v18;
      }
      if ( v19 && v21 )
        v18 ^= v21;
      else
        v18 = v21;
    }
    v22 = (v18 - 32) & -(__int64)(v18 != 0);
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 116));
      *a1 = v22;
      RtlReleaseSRWLockExclusive(v6);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
    }
    else
    {
      v23 = *(_QWORD *)v7;
      if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
      {
        if ( v23 )
          v23 ^= v7;
        else
          v23 = 0LL;
      }
      v24 = *(_BYTE *)(v7 + 8) & 1;
      if ( v23 )
      {
        while ( 1 )
        {
          if ( (int)RtlpWnfNameSubscriptionCompareByStateName(v14 + 16, v23) < 0 )
          {
            v25 = *(_QWORD *)v23;
            if ( v24 )
            {
              if ( !v25 )
                break;
              v25 ^= v23;
            }
            if ( !v25 )
              break;
          }
          else
          {
            v25 = *(_QWORD *)(v23 + 8);
            if ( v24 )
            {
              if ( !v25 )
                goto LABEL_45;
              v25 ^= v23;
            }
            if ( !v25 )
            {
LABEL_45:
              v4 = 1;
              break;
            }
          }
          v23 = v25;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64 *)v7, v23, v4, v14 + 32);
      *a1 = v14;
      RtlReleaseSRWLockExclusive(v6);
    }
    return 0LL;
  }
  return 3221225495LL;
}
