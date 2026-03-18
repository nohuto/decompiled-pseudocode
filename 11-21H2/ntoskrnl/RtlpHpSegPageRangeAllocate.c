/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x140350070
 * Callers:
 *     RtlpHpSegAlloc @ 0x14034FED0 (RtlpHpSegAlloc.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     RtlpHpSegSegmentInitialize @ 0x140242028 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegHeapAddSegment @ 0x1402472B4 (RtlpHpSegHeapAddSegment.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpSegFreeRangeInsert @ 0x140353A00 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x140353B40 (RtlpHpSegPageRangeCountCommittedPages.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpSegSegmentAllocate @ 0x1403633A0 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegLockAcquire @ 0x140365AC8 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1403A5774 (RtlpHpSegLargeRangeAllocate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned int v4; // esi
  unsigned int v6; // r15d
  unsigned __int8 CurrentIrql; // r12
  unsigned int v8; // r13d
  unsigned int v9; // edi
  int *v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdx
  int v14; // ecx
  unsigned __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int16 v17; // ax
  int v18; // ecx
  unsigned int v19; // edi
  __m128i v20; // xmm0
  ULONG_PTR v21; // rbp
  int v23; // ecx
  char v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  __int16 v27; // ax
  struct _KTHREAD *v28; // r15
  unsigned int v29; // r8d
  __int64 v30; // rbx
  unsigned int j; // edx
  int v32; // r8d
  struct _KTHREAD *v33; // rcx
  bool v34; // zf
  struct _KTHREAD *CurrentThread; // rax
  char *v36; // rcx
  char v37; // dl
  __int64 v38; // r8
  __int64 v39; // rax
  unsigned __int64 v40; // rdi
  struct _KTHREAD *v41; // r12
  unsigned int SessionId; // r8d
  __int64 p_Process; // rdi
  unsigned int i; // ecx
  int v45; // r8d
  struct _KTHREAD *v46; // rcx
  unsigned __int8 v47; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v49; // eax
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r9
  _DWORD *v52; // r8
  int v53; // eax
  int v54; // [rsp+78h] [rbp+10h]

  v4 = 1;
  v6 = a3;
  CurrentIrql = -1;
  v8 = (unsigned int)((1 << *(_BYTE *)(a1 + 9)) + a2 - 1) >> *(_BYTE *)(a1 + 9);
  v9 = v8 << 24;
  v54 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
      }
      v10 = (int *)(a1 + 64);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10, CurrentIrql);
      else
        ExpAcquireSpinLockExclusive(v10, CurrentIrql, a3, (__int64)SchedulerAssist);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
    }
  }
  v11 = *(_QWORD *)(a1 + 104);
  v12 = *(_QWORD *)(a1 + 96);
  if ( (v11 & 1) == 0 )
  {
LABEL_10:
    v13 = 0LL;
    v14 = v11 & 1;
    if ( !v12 )
      goto LABEL_16;
    while ( 1 )
    {
      if ( v9 < *(_DWORD *)(v12 + 28) )
      {
        v15 = *(_QWORD *)v12;
        v13 = v12;
        if ( v14 && v15 )
        {
          v12 ^= v15;
          goto LABEL_15;
        }
      }
      else
      {
        if ( v9 <= *(_DWORD *)(v12 + 28) )
          goto LABEL_17;
        v15 = *(_QWORD *)(v12 + 8);
        if ( v14 && v15 )
        {
          v12 ^= v15;
          goto LABEL_15;
        }
      }
      v12 = v15;
LABEL_15:
      if ( !v12 )
        goto LABEL_16;
    }
  }
  if ( v12 )
  {
    v12 ^= a1 + 96;
    goto LABEL_10;
  }
  v13 = 0LL;
LABEL_16:
  v12 = v13;
LABEL_17:
  v16 = 0x7FFFFFFFFFFFFFFCLL;
  if ( v12 )
  {
    if ( (v6 & 0x800000) != 0 )
    {
      v12 = RtlpHpSegLargeRangeAllocate(a1, v12, v8, 1LL);
    }
    else
    {
      RtlRbRemoveNode((unsigned __int64 *)(a1 + 96), v12);
      *(_OWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      v17 = ~(unsigned __int16)*(_DWORD *)(v12 + 28);
      *(_DWORD *)v12 = -857879331;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v17);
    }
    if ( v12 )
      goto LABEL_21;
    v16 = 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !v54 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v47 = KeGetCurrentIrql();
          if ( v47 <= 0xFu && CurrentIrql <= 0xFu && v47 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v16 = (__int64)CurrentPrcb->SchedulerAssist;
            v49 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v34 = (v49 & *(_DWORD *)(v16 + 20)) == 0;
            *(_DWORD *)(v16 + 20) &= v49;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(a1 + 64);
        v16 = 0x7FFFFFFFFFFFFFFCLL;
      }
      v41 = KeGetCurrentThread();
      if ( (unsigned __int64)(a1 + 64 - qword_140C50630) < 0x8000000000LL )
      {
        SessionId = MmGetSessionIdEx((__int64)v41->ApcState.Process);
        v16 = 0x7FFFFFFFFFFFFFFCLL;
      }
      else
      {
        SessionId = -1;
      }
      _disable();
      p_Process = (__int64)&v41[1].Process;
      for ( i = 0; i < 6; ++i )
      {
        if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 64) & 0x7FFFFFFFFFFFFFFCLL)
          && *(_BYTE *)(p_Process + 18)
          && (*(_DWORD *)p_Process & 1) == 0
          && *(_DWORD *)(p_Process + 8) == SessionId )
        {
          *(_BYTE *)(p_Process + 18) = 0;
          if ( *(__int64 *)p_Process < 0 )
          {
            *(_BYTE *)p_Process |= 2u;
            _enable();
            KiAbEntryRemoveFromTree(p_Process);
            _disable();
          }
          v45 = *(_DWORD *)(p_Process + 88);
          *(_DWORD *)(p_Process + 88) = 0;
          *(_BYTE *)(p_Process + 17) = 0;
          *(_QWORD *)p_Process = 0LL;
          v16 = *(unsigned __int8 *)(p_Process + 16);
          v41->AbEntrySummary |= 1 << v16;
          _enable();
          if ( v45 )
            KiAbThreadRemoveBoostsSlow((ULONG_PTR)v41, a1 + 64, v45);
          goto LABEL_80;
        }
        p_Process += 96LL;
      }
      if ( (*((_DWORD *)&v41->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v41, a1 + 64, SessionId, 0LL);
      _enable();
LABEL_80:
      v46 = KeGetCurrentThread();
      v34 = v46->SpecialApcDisable++ == -1;
      if ( v34 && ($CEA84C04E3712D858E5667A507841A2A *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
        KiCheckForKernelApcDelivery();
    }
  }
  v38 = 0LL;
  if ( (v6 & 0x800000) != 0
    || (*(_BYTE *)(a1 + 13) & 7) == 3 && (BYTE1(*(_QWORD *)(a1 + 40)) == 3 || BYTE1(*(_QWORD *)(a1 + 40)) == 2) )
  {
    v38 = 2LL;
  }
  v39 = RtlpHpSegSegmentAllocate(a1, 0LL, v38, v16);
  v40 = v39;
  if ( !v39 )
    return 0LL;
  RtlpHpSegSegmentInitialize(a1, v39, 0);
  v12 = v40 + 32LL * *(unsigned __int8 *)(a1 + 10);
  CurrentIrql = RtlpHpSegLockAcquire(a1, v6);
  RtlpHpSegHeapAddSegment(a1, v40);
  if ( (v6 & 0x800000) != 0 )
    v12 = RtlpHpSegLargeRangeAllocate(a1, v12, v8, 0LL);
LABEL_21:
  v18 = *(unsigned __int8 *)(v12 + 31);
  if ( v18 != v8 )
  {
    v23 = v18 - v8;
    v24 = v23;
    v25 = 32LL * (unsigned int)(v23 - 1);
    v26 = v12 + 32LL * v8;
    *(_BYTE *)(v26 + 24) |= 2u;
    *(_BYTE *)(v25 + v26 + 31) = v24 - 1;
    *(_BYTE *)(v26 + 31) = v24;
    v27 = RtlpHpSegPageRangeCountCommittedPages(v25, v26);
    *(_DWORD *)v26 = -857879331;
    *(_WORD *)(v26 + 28) = ~v27;
    *(_BYTE *)(32LL * (v8 - 1) + v12 + 31) = v8 - 1;
    *(_BYTE *)(v12 + 31) = v8;
    *(_WORD *)(v12 + 28) = ~(~(unsigned __int16)*(_DWORD *)(v12 + 28) + *(_WORD *)(v26 + 28) + 1);
    RtlpHpSegFreeRangeInsert(a1, v26, 0LL);
  }
  v19 = v8 - 1;
  *(_BYTE *)(v12 + 24) |= (unsigned __int8)(4 * ((v6 >> 26) & 3)) | 1;
  *(_BYTE *)(32LL * (v8 - 1) + v12 + 24) |= 1u;
  if ( !v54 )
  {
    v20 = *(__m128i *)(a1 + 40);
    v21 = a1 + 64;
    if ( (_mm_cvtsi128_si32(v20) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v21);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v50 = KeGetCurrentIrql();
          if ( v50 <= 0xFu && CurrentIrql <= 0xFu && v50 >= 2u )
          {
            v51 = KeGetCurrentPrcb();
            v52 = v51->SchedulerAssist;
            v53 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v34 = (v53 & v52[5]) == 0;
            v52[5] &= v53;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(v51);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v21);
      v28 = KeGetCurrentThread();
      if ( v21 - qword_140C50630 < 0x8000000000LL )
        v29 = MmGetSessionIdEx((__int64)v28->ApcState.Process);
      else
        v29 = -1;
      _disable();
      v30 = (__int64)&v28[1].Process;
      for ( j = 0; j < 6; ++j )
      {
        if ( (*(_QWORD *)v30 & 0x7FFFFFFFFFFFFFFCLL) == (v21 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_BYTE *)(v30 + 18)
          && (*(_DWORD *)v30 & 1) == 0
          && *(_DWORD *)(v30 + 8) == v29 )
        {
          *(_BYTE *)(v30 + 18) = 0;
          if ( *(__int64 *)v30 < 0 )
          {
            *(_BYTE *)v30 |= 2u;
            _enable();
            KiAbEntryRemoveFromTree(v30);
            _disable();
          }
          v32 = *(_DWORD *)(v30 + 88);
          *(_DWORD *)(v30 + 88) = 0;
          *(_BYTE *)(v30 + 17) = 0;
          *(_QWORD *)v30 = 0LL;
          v28->AbEntrySummary |= 1 << *(_BYTE *)(v30 + 16);
          _enable();
          if ( v32 )
            KiAbThreadRemoveBoostsSlow((ULONG_PTR)v28, v21, v32);
          goto LABEL_47;
        }
        v30 += 96LL;
      }
      if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v28, v21, v29, 0LL);
      _enable();
LABEL_47:
      v33 = KeGetCurrentThread();
      v34 = v33->SpecialApcDisable++ == -1;
      if ( v34 && ($CEA84C04E3712D858E5667A507841A2A *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
        KiCheckForKernelApcDelivery();
    }
  }
  if ( v19 > 1 )
  {
    v36 = (char *)(v12 + 56);
    do
    {
      v36[7] = v4++;
      v37 = *v36;
      v36 += 32;
      *(v36 - 32) = v37 | 1;
    }
    while ( v4 < v19 );
  }
  return v12;
}
