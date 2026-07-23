/*
 * XREFs of KiAddThreadToReadyQueue @ 0x1402349B0
 * Callers:
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 * Callees:
 *     KiScheduleSoftParkElectionIfNecessary @ 0x140234DC0 (KiScheduleSoftParkElectionIfNecessary.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402B34D0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToScbQueue @ 0x140305CB0 (KiAddThreadToScbQueue.c)
 *     KeQueryGroupAffinityEx @ 0x1403B6BA0 (KeQueryGroupAffinityEx.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD4A0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD4D0 (HvlNotifyLongSpinWait.c)
 *     KiAcquireSoftParkElectionLock @ 0x140410424 (KiAcquireSoftParkElectionLock.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x140410464 (KiReadGuestSchedulerAssistPriority.c)
 *     KiUpdateLocalReadyQueueStatisticsOnInsertion @ 0x14041101C (KiUpdateLocalReadyQueueStatisticsOnInsertion.c)
 */

__int64 __fastcall KiAddThreadToReadyQueue(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned int a5)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r15
  bool v11; // bl
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  _WORD *v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  _QWORD *v20; // r14
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  __int16 v27; // dx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rdx
  char v34; // [rsp+68h] [rbp+20h] BYREF

  v5 = a3;
  v6 = a2;
  if ( !a4 )
    *(_DWORD *)(a3 + 436) = MEMORY[0xFFFFF78000000320];
  if ( !a2 )
  {
    v6 = *(_QWORD *)(a3 + 104);
    if ( v6 )
      v6 += *(unsigned int *)(a1 + 216);
  }
  v8 = *(_QWORD *)(a1 + 35000);
  if ( v8 )
    *(_BYTE *)(v8 + 16) = 0;
  *(_BYTE *)(a3 + 388) = 1;
  v34 = 0;
  if ( v6 )
  {
    if ( (*(_DWORD *)(a3 + 120) & 0xC00) == 0 )
    {
      LOBYTE(a3) = 1;
      if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v5, v6, a3, &v34) )
        return KiAddThreadToScbQueue(a1, v6, v5, a5);
    }
  }
  v10 = *(char *)(v5 + 195);
  if ( (*(_DWORD *)(v5 + 120) & 0x400000) != 0 )
    _InterlockedOr(*(volatile signed __int32 **)(v5 + 968), 0x40000u);
  if ( (*(_DWORD *)(v5 + 120) & 0x400000) != 0 )
  {
    v11 = 0;
    if ( (unsigned int)KiReadGuestSchedulerAssistPriority(v5, 0LL) != *(_DWORD *)(v5 + 1024) )
    {
      KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
      v12 = (_QWORD *)(v5 + 1008);
      if ( *(_QWORD *)(v5 + 1008) == 1LL )
      {
        v13 = (_QWORD *)qword_140C423C8;
        v11 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
        if ( *(__int64 **)qword_140C423C8 != &KiUpdateVpThreadPriorityListHead )
          goto LABEL_51;
        *v12 = &KiUpdateVpThreadPriorityListHead;
        *(_QWORD *)(v5 + 1016) = v13;
        *v13 = v12;
        qword_140C423C8 = v5 + 1008;
      }
      KxReleaseSpinLock(&KiUpdateVpThreadPriorityLock);
      if ( v11 )
        KiInsertQueueDpc((ULONG_PTR)&KiUpdateVpThreadPriorityDpc, 0);
    }
  }
  v14 = *(_QWORD *)(a1 + 34880);
  if ( (*(_DWORD *)(v5 + 120) & 0x2000) == 0
    || !v14
    || ((v15 = *(_WORD **)(v5 + 576), v16 = 0, v17 = *(unsigned __int8 *)(a1 + 208), (unsigned __int16)v17 >= *v15)
      ? (v18 = 0LL)
      : (v18 = *(_QWORD *)&v15[4 * v17 + 4]),
        (v14 & v18) != v14 || v34) )
  {
    v30 = (_QWORD *)(v5 + 216);
    v31 = (_QWORD *)(a1 + 16 * (v10 + 2036));
    if ( a5 )
    {
      v32 = *v31;
      if ( *(_QWORD **)(*v31 + 8LL) != v31 )
        goto LABEL_51;
      *v30 = v32;
      *(_QWORD *)(v5 + 224) = v31;
      *(_QWORD *)(v32 + 8) = v30;
      *v31 = v30;
      _bittestandset((signed __int32 *)(a1 + 32476), v10);
    }
    else
    {
      v33 = (_QWORD *)v31[1];
      if ( (_QWORD *)*v33 != v31 )
        goto LABEL_51;
      *v30 = v31;
      *(_QWORD *)(v5 + 224) = v33;
      *v33 = v30;
      v31[1] = v30;
    }
    *(_DWORD *)(a1 + 32472) |= 1 << v10;
    return KiUpdateLocalReadyQueueStatisticsOnInsertion(a1, v5);
  }
  v19 = *(_QWORD *)(a1 + 34888);
  v20 = (_QWORD *)(v19 + 16 * (v10 + 1));
  while ( _interlockedbittestandset64((volatile signed __int32 *)v19, 0LL) )
  {
    do
    {
      if ( (++v16 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v16);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)v19 );
  }
  v21 = (_QWORD *)(v5 + 216);
  if ( !a5 )
  {
    v23 = (_QWORD *)v20[1];
    if ( (_QWORD *)*v23 == v20 )
    {
      *v21 = v20;
      *(_QWORD *)(v5 + 224) = v23;
      *v23 = v21;
      v20[1] = v21;
      goto LABEL_42;
    }
LABEL_51:
    __fastfail(3u);
  }
  v22 = *v20;
  if ( *(_QWORD **)(*v20 + 8LL) != v20 )
    goto LABEL_51;
  *v21 = v22;
  *(_QWORD *)(v5 + 224) = v20;
  *(_QWORD *)(v22 + 8) = v21;
  *v20 = v21;
  _bittestandreset((signed __int32 *)(a1 + 32476), v10);
LABEL_42:
  *(_DWORD *)(v19 + 8) |= 1 << v10;
  *(_DWORD *)(v5 + 536) |= 0x80000000;
  ++*(_DWORD *)(v19 + 672);
  v24 = *(unsigned int *)(v5 + 84);
  *(_DWORD *)(v5 + 2288) = v24;
  *(_QWORD *)(v19 + 680) += v24;
  v25 = *(_DWORD *)(v5 + 84);
  *(_BYTE *)(v5 + 1648) = *(_BYTE *)(v5 + 512);
  *(_DWORD *)(v5 + 2292) = v25;
  v26 = *(_DWORD *)(v5 + 80);
  if ( v26 <= v25 )
    v26 = v25;
  *(_BYTE *)(v5 + 1650) = v26 >= KiDynamicHeteroCpuPolicyExpectedCycles;
  *(_BYTE *)(v5 + 1649) = *(_BYTE *)(v5 + 516);
  v27 = *(_WORD *)(v19 + 662);
  *(_OWORD *)(v5 + 2304) = 0LL;
  v28 = *(_QWORD *)(v5 + 576);
  *(_WORD *)(v5 + 2312) = v27;
  *(_QWORD *)(v5 + 2304) = KeQueryGroupAffinityEx(v28);
  if ( *(_DWORD *)(v5 + 2292) > (unsigned int)KeSoftParkedQueueThreshold )
    *(_DWORD *)(v5 + 2292) = KeSoftParkedQueueThreshold;
  KiAcquireSoftParkElectionLock(v19);
  *(_QWORD *)(v5 + 2296) = *(_QWORD *)(v19 + 696);
  ++*(_DWORD *)(v19 + 704);
  *(_QWORD *)(v19 + 712) += *(unsigned int *)(v5 + 2292);
  *(_QWORD *)(v19 + 1680) |= *(_QWORD *)(v5 + 2304);
  v29 = *(unsigned __int8 *)(v5 + 1649) + 8 * (*(unsigned __int8 *)(v5 + 1650) + 2LL * *(unsigned __int8 *)(v5 + 1648));
  *(_QWORD *)(v19 + 8 * v29 + 784) += *(unsigned int *)(v5 + 2292);
  result = KiScheduleSoftParkElectionIfNecessary(v19);
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 688), 0LL);
  _InterlockedAnd64((volatile signed __int64 *)v19, 0LL);
  return result;
}
