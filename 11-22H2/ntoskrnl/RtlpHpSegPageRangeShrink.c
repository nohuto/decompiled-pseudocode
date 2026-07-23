/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x14024E6A0
 * Callers:
 *     RtlpHpFreeHeap @ 0x1402AC490 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x140314F7C (RtlpHpSegFree.c)
 *     ExFreeHeapPool @ 0x140322ED0 (ExFreeHeapPool.c)
 *     RtlpHpSegPageRangeFree @ 0x1405B6B10 (RtlpHpSegPageRangeFree.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140207740 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     RtlRbInsertNodeEx @ 0x14024CCA0 (RtlRbInsertNodeEx.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14024EAB0 (RtlpHpSegPageRangeCoalesce.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpSegSegmentFree @ 0x140315014 (RtlpHpSegSegmentFree.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046ADD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B12C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

int __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // r13d
  int v5; // r10d
  char v8; // bp
  unsigned __int8 CurrentIrql; // r15
  int v10; // eax
  int v11; // edx
  __int64 v12; // rax
  char v13; // dl
  __int64 v14; // r14
  char v15; // cl
  int v16; // r10d
  int v17; // r11d
  unsigned int v18; // r8d
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  __int16 *v21; // rcx
  int v22; // eax
  unsigned int i; // edx
  __int64 v24; // rdx
  BOOLEAN v25; // cl
  _QWORD *v26; // rdi
  __int64 v27; // rcx
  char *v28; // rax
  __int64 v29; // r8
  char v30; // cl
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v32; // bp
  struct _KTHREAD *v33; // rcx
  bool v34; // zf
  __int64 v35; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v37; // rdx
  unsigned __int8 v38; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v40; // r8
  int v41; // eax
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v44; // [rsp+80h] [rbp+8h] BYREF
  int v45; // [rsp+88h] [rbp+10h]
  int v46; // [rsp+90h] [rbp+18h] BYREF
  int v47; // [rsp+98h] [rbp+20h]

  v47 = a4;
  v46 = a3;
  v4 = *(unsigned __int8 *)(a2 + 31);
  v5 = a4;
  LOBYTE(v46) = 0;
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    v28 = (char *)(a2 + 56);
    v29 = (unsigned int)(v4 - 2);
    do
    {
      v30 = *v28;
      v28 += 32;
      *(v28 - 32) = v30 & 0xFE;
      --v29;
    }
    while ( v29 );
  }
  v8 = 2;
  CurrentIrql = -1;
  v45 = a4 & 1;
  if ( (a4 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v37) = 4;
        else
          v37 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v37;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64, CurrentIrql);
      }
      else
      {
        v44 = 0;
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 64), 0x1Fu) )
          v44 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(a1 + 64), CurrentIrql);
        while ( (*(_DWORD *)(a1 + 64) & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (*(_DWORD *)(a1 + 64) & 0x40000000) == 0 )
            _InterlockedOr((volatile signed __int32 *)(a1 + 64), 0x40000000u);
          KeYieldProcessorEx(&v44);
        }
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
    }
    v5 = v47;
  }
  v10 = *(unsigned __int8 *)(a2 + 31);
  v11 = *(_DWORD *)(a2 + 28);
  LOBYTE(v46) = CurrentIrql;
  if ( v10 != v4 )
  {
    *(_BYTE *)(a2 + 31) = 0;
    *(_WORD *)(a2 + 28) = -1;
  }
  *(_BYTE *)(a2 + 24) |= 2u;
  *(_BYTE *)(32LL * (unsigned int)(v4 - 1) + a2 + 31) = v4 - 1;
  *(_WORD *)(a2 + 28) = v11;
  *(_BYTE *)(a2 + 31) = v4;
  *(_DWORD *)a2 = -857879331;
  *(_BYTE *)(a2 + 24) &= 0xF3u;
  v12 = RtlpHpSegPageRangeCoalesce(a1, a2, v5, 0, (__int64)&v46);
  v13 = *(_BYTE *)(a1 + 13);
  v14 = v12;
  if ( (v13 & 0x10) != 0
    && (LODWORD(v12) = *(unsigned __int8 *)(v12 + 31), (_DWORD)v12 == 256 - *(unsigned __int8 *)(a1 + 10)) )
  {
    v26 = (_QWORD *)(v14 & *(_QWORD *)a1);
    *(_DWORD *)v14 = -857879297;
    if ( v26 )
    {
      v35 = *v26;
      v12 = v26[1];
      if ( *(_QWORD **)(*v26 + 8LL) != v26 || *(_QWORD **)v12 != v26 )
        __fastfail(3u);
      *(_QWORD *)v12 = v35;
      *(_QWORD *)(v35 + 8) = v12;
      --*(_QWORD *)(a1 + 88);
    }
  }
  else
  {
    if ( (v13 & 7) != 0 )
    {
      v15 = *(_BYTE *)(a1 + 8);
      v16 = *(unsigned __int8 *)(v14 + 31) << v15;
      v17 = 0;
      v18 = (*(_DWORD *)a1 & v14)
          + ((v14 - (*(_QWORD *)a1 & v14)) >> 5 << v15)
          - (*(_DWORD *)a1 & ((*(_DWORD *)a1 & v14) + ((v14 - (*(_QWORD *)a1 & v14)) >> 5 << v15)));
      v19 = *(_QWORD *)((*(_QWORD *)a1 & ((*(_QWORD *)a1 & v14) + ((v14 - (*(_QWORD *)a1 & v14)) >> 5 << v15))) + 0x18);
      v20 = v19 + 2 * ((unsigned __int64)(v16 + v18 - 1) >> 21);
      v21 = (__int16 *)(v19 + 2 * ((unsigned __int64)v18 >> 21));
      v22 = 0;
      for ( i = ((__int64)(2 * ((unsigned __int64)(v16 + v18 - 1) >> 21) - 2 * ((unsigned __int64)v18 >> 21)) >> 1) + 1;
            (unsigned __int64)v21 <= v20;
            ++v21 )
      {
        if ( (*v21 & 0x7FF) != 0 )
        {
          if ( *v21 < 0 )
            ++v22;
        }
        else
        {
          ++v17;
        }
      }
      if ( v22 == i )
      {
        v8 = i > (unsigned int)(v16 + 0x1FFFFF) >> 21;
      }
      else if ( !v22 )
      {
        v8 = (v17 == 0) + 3;
      }
    }
    else
    {
      v8 = 4;
    }
    *(_BYTE *)(v14 + 30) = v8;
    v24 = *(_QWORD *)(a1 + 96);
    if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
    {
      if ( !v24 )
      {
LABEL_24:
        v25 = 0;
        goto LABEL_25;
      }
      v24 ^= a1 + 96;
    }
    v25 = 0;
    if ( v24 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v14 + 28) >= *(_DWORD *)(v24 + 28) )
        {
          v27 = *(_QWORD *)(v24 + 8);
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v27 )
              goto LABEL_38;
            v27 ^= v24;
          }
          if ( !v27 )
          {
LABEL_38:
            v25 = 1;
            break;
          }
        }
        else
        {
          v27 = *(_QWORD *)v24;
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v27 )
              goto LABEL_24;
            v27 ^= v24;
          }
          if ( !v27 )
            goto LABEL_24;
        }
        v24 = v27;
      }
    }
LABEL_25:
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v24, v25, (PRTL_BALANCED_NODE)v14);
    v12 = *(__int16 *)(a1 + 22);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + a1 + 16), (unsigned __int16)~*(_WORD *)(v14 + 28));
    v26 = 0LL;
  }
  if ( !v45 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
      else
        *(_DWORD *)(a1 + 64) = 0;
      if ( (_DWORD)KiIrqlFlags && (v38 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0) && v38 <= 0xFu )
      {
        v32 = v46;
        if ( (unsigned __int8)v46 <= 0xFu && v38 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v40 = CurrentPrcb->SchedulerAssist;
          v32 = v46;
          v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
          v34 = (v41 & v40[5]) == 0;
          v40[5] &= v41;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v32 = v46;
      }
      LODWORD(v12) = v32;
      __writecr8(v32);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 64);
      LODWORD(v12) = KeAbPostRelease(a1 + 64);
      v33 = KeGetCurrentThread();
      v34 = v33->SpecialApcDisable++ == -1;
      if ( v34 )
      {
        v12 = (__int64)&v33->152;
        if ( *(_QWORD *)v12 != v12 )
          LODWORD(v12) = KiCheckForKernelApcDelivery();
      }
    }
  }
  if ( v26 )
    LODWORD(v12) = RtlpHpSegSegmentFree(a1, v26, 0x7FFFFFFFLL, 1LL);
  return v12;
}
