/*
 * XREFs of KiAddThreadToPrcbQueue @ 0x140238A10
 * Callers:
 *     KiRemoveThreadFromSchedulingGroup @ 0x140204C14 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307814 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308538 (KiGroupSchedulingGenerationEnd.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x140308C0C (KiMoveScbThreadsToNewReadylist.c)
 * Callees:
 *     KiScheduleSoftParkElectionIfNecessary @ 0x140234DC0 (KiScheduleSoftParkElectionIfNecessary.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     KeQueryGroupAffinityEx @ 0x1403B6BA0 (KeQueryGroupAffinityEx.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD4A0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD4D0 (HvlNotifyLongSpinWait.c)
 *     KiAcquireSoftParkElectionLock @ 0x140410424 (KiAcquireSoftParkElectionLock.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x140410464 (KiReadGuestSchedulerAssistPriority.c)
 *     KiUpdateLocalReadyQueueStatisticsOnInsertion @ 0x14041101C (KiUpdateLocalReadyQueueStatisticsOnInsertion.c)
 */

__int64 __fastcall KiAddThreadToPrcbQueue(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v6; // r15
  bool v9; // bl
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  _WORD *v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  _QWORD *v19; // r14
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  __int16 v26; // dx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 result; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rax

  v6 = a3;
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedOr(*(volatile signed __int32 **)(a2 + 968), 0x40000u);
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
  {
    v9 = 0;
    if ( (unsigned int)KiReadGuestSchedulerAssistPriority(a2, 0LL) != *(_DWORD *)(a2 + 1024) )
    {
      KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
      v10 = (_QWORD *)(a2 + 1008);
      if ( *(_QWORD *)(a2 + 1008) == 1LL )
      {
        v11 = (_QWORD *)qword_140C423C8;
        v9 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
        if ( *(__int64 **)qword_140C423C8 != &KiUpdateVpThreadPriorityListHead )
          goto LABEL_40;
        *v10 = &KiUpdateVpThreadPriorityListHead;
        *(_QWORD *)(a2 + 1016) = v11;
        *v11 = v10;
        qword_140C423C8 = a2 + 1008;
      }
      KxReleaseSpinLock(&KiUpdateVpThreadPriorityLock);
      if ( v9 )
        KiInsertQueueDpc((ULONG_PTR)&KiUpdateVpThreadPriorityDpc, 0);
    }
  }
  v12 = *(_QWORD *)(a1 + 34880);
  if ( (*(_DWORD *)(a2 + 120) & 0x2000) == 0
    || !v12
    || ((v13 = *(_WORD **)(a2 + 576), v14 = 0, v15 = *(unsigned __int8 *)(a1 + 208), (unsigned __int16)v15 >= *v13)
      ? (v16 = 0LL)
      : (v16 = *(_QWORD *)&v13[4 * v15 + 4]),
        (v17 = v12 & v16, v17 != v12) || a5) )
  {
    v30 = (_QWORD *)(a2 + 216);
    v31 = (_QWORD *)(a1 + 16 * (v6 + 2036));
    if ( a4 )
    {
      v32 = *v31;
      if ( *(_QWORD **)(*v31 + 8LL) != v31 )
        goto LABEL_40;
      *v30 = v32;
      *(_QWORD *)(a2 + 224) = v31;
      *(_QWORD *)(v32 + 8) = v30;
      *v31 = v30;
      _bittestandset((signed __int32 *)(a1 + 32476), v6);
    }
    else
    {
      v33 = (_QWORD *)v31[1];
      if ( (_QWORD *)*v33 != v31 )
        goto LABEL_40;
      *v30 = v31;
      *(_QWORD *)(a2 + 224) = v33;
      *v33 = v30;
      v31[1] = v30;
    }
    *(_DWORD *)(a1 + 32472) |= 1 << v6;
    return KiUpdateLocalReadyQueueStatisticsOnInsertion(a1, a2);
  }
  v18 = *(_QWORD *)(a1 + 34888);
  v19 = (_QWORD *)(v18 + 16 * (v6 + 1));
  while ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0LL) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v17) )
      {
        HvlNotifyLongSpinWait(v14);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)v18 );
  }
  v20 = (_QWORD *)(a2 + 216);
  if ( !a4 )
  {
    v22 = (_QWORD *)v19[1];
    if ( (_QWORD *)*v22 == v19 )
    {
      *v20 = v19;
      *(_QWORD *)(a2 + 224) = v22;
      *v22 = v20;
      v19[1] = v20;
      goto LABEL_31;
    }
LABEL_40:
    __fastfail(3u);
  }
  v21 = *v19;
  if ( *(_QWORD **)(*v19 + 8LL) != v19 )
    goto LABEL_40;
  *v20 = v21;
  *(_QWORD *)(a2 + 224) = v19;
  *(_QWORD *)(v21 + 8) = v20;
  *v19 = v20;
  _bittestandreset((signed __int32 *)(a1 + 32476), v6);
LABEL_31:
  *(_DWORD *)(v18 + 8) |= 1 << v6;
  *(_DWORD *)(a2 + 536) |= 0x80000000;
  ++*(_DWORD *)(v18 + 672);
  v23 = *(unsigned int *)(a2 + 84);
  *(_DWORD *)(a2 + 2288) = v23;
  *(_QWORD *)(v18 + 680) += v23;
  v24 = *(_DWORD *)(a2 + 84);
  *(_BYTE *)(a2 + 1648) = *(_BYTE *)(a2 + 512);
  *(_DWORD *)(a2 + 2292) = v24;
  v25 = *(_DWORD *)(a2 + 80);
  if ( v25 <= v24 )
    v25 = v24;
  *(_BYTE *)(a2 + 1650) = v25 >= KiDynamicHeteroCpuPolicyExpectedCycles;
  *(_BYTE *)(a2 + 1649) = *(_BYTE *)(a2 + 516);
  v26 = *(_WORD *)(v18 + 662);
  *(_OWORD *)(a2 + 2304) = 0LL;
  v27 = *(_QWORD *)(a2 + 576);
  *(_WORD *)(a2 + 2312) = v26;
  *(_QWORD *)(a2 + 2304) = KeQueryGroupAffinityEx(v27);
  if ( *(_DWORD *)(a2 + 2292) > (unsigned int)KeSoftParkedQueueThreshold )
    *(_DWORD *)(a2 + 2292) = KeSoftParkedQueueThreshold;
  KiAcquireSoftParkElectionLock(v18);
  *(_QWORD *)(a2 + 2296) = *(_QWORD *)(v18 + 696);
  ++*(_DWORD *)(v18 + 704);
  *(_QWORD *)(v18 + 712) += *(unsigned int *)(a2 + 2292);
  *(_QWORD *)(v18 + 1680) |= *(_QWORD *)(a2 + 2304);
  v28 = *(unsigned __int8 *)(a2 + 1649) + 8 * (*(unsigned __int8 *)(a2 + 1650) + 2LL * *(unsigned __int8 *)(a2 + 1648));
  *(_QWORD *)(v18 + 8 * v28 + 784) += *(unsigned int *)(a2 + 2292);
  result = KiScheduleSoftParkElectionIfNecessary(v18);
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 688), 0LL);
  _InterlockedAnd64((volatile signed __int64 *)v18, 0LL);
  return result;
}
