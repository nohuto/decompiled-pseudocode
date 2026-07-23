/*
 * XREFs of ExpAcquireResourceSharedLite @ 0x14023DDA0
 * Callers:
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheckByType @ 0x1402B3A90 (SeAccessCheckByType.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5E70 (SepMandatoryIntegrityCheck.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140337F50 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140338340 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     ExpApplyPrewaitBoost @ 0x1402A7A00 (ExpApplyPrewaitBoost.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     ExpBoostIoAfterAcquire @ 0x14031ACD0 (ExpBoostIoAfterAcquire.c)
 *     ExpGetThreadResourceHint @ 0x140337910 (ExpGetThreadResourceHint.c)
 *     ExpWaitForResource @ 0x1403410D0 (ExpWaitForResource.c)
 *     ExpFindEmptyEntry @ 0x1403411A4 (ExpFindEmptyEntry.c)
 *     ExpExpandResourceOwnerTable @ 0x140341200 (ExpExpandResourceOwnerTable.c)
 *     RtlInsertHeadCircularList @ 0x14034F040 (RtlInsertHeadCircularList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14060071C (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140600BF4 (PerfLogExecutiveResourceWait.c)
 */

char __fastcall ExpAcquireResourceSharedLite(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v7; // si
  volatile __int64 *v8; // r8
  unsigned int ResourceIndex; // ebx
  unsigned __int8 CurrentIrql; // dl
  __int64 v11; // r12
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  _DWORD *SchedulerAssist; // r10
  __int64 v18; // r11
  unsigned int ThreadResourceHint; // eax
  __int64 v20; // rdx
  int v21; // r11d
  unsigned __int64 EmptyEntry; // r8
  __int64 v23; // r10
  struct _KTHREAD *v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rax
  int v31; // ecx
  int v32; // eax
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  unsigned __int8 v35; // cl
  unsigned int v36; // r14d
  unsigned int v37; // r14d
  __int64 v38; // rax
  unsigned __int64 v39; // rbx
  unsigned int v40; // r14d
  unsigned int v41; // r14d
  __int64 v42; // rax
  unsigned __int64 v43; // rbx
  unsigned __int8 v44; // cl
  int v45; // eax
  unsigned __int64 v46; // r15
  unsigned __int64 v47; // rbx
  unsigned __int8 v48; // cl
  unsigned __int8 v49; // cl
  unsigned __int8 v50; // cl
  struct _KPRCB *v51; // r9
  _DWORD *v52; // r8
  int v53; // eax
  bool v54; // zf
  __int64 v55; // r8
  __int64 v56; // rcx
  unsigned __int8 v57; // cl
  struct _KPRCB *v58; // r9
  _DWORD *v59; // r8
  int v60; // eax
  unsigned __int8 v61; // al
  struct _KPRCB *v62; // r9
  _DWORD *v63; // r8
  int v64; // eax
  unsigned __int8 v65; // cl
  struct _KPRCB *v66; // r9
  _DWORD *v67; // r8
  int v68; // eax
  unsigned __int8 v69; // cl
  struct _KPRCB *v70; // r9
  _DWORD *v71; // r8
  int v72; // eax
  unsigned __int8 v73; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v75; // r8
  int v76; // eax
  signed __int32 v77[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v78; // [rsp+20h] [rbp-50h] BYREF
  volatile signed __int64 *v79; // [rsp+28h] [rbp-48h]
  __int64 v80; // [rsp+30h] [rbp-40h]
  __int128 v81; // [rsp+38h] [rbp-38h] BYREF
  __int128 v82; // [rsp+48h] [rbp-28h]
  __int128 v83; // [rsp+58h] [rbp-18h] BYREF
  __int64 v84; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  v80 = 0LL;
  v84 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x8A8Cu);
  v8 = (volatile __int64 *)(a1 + 96);
  ResourceIndex = 0;
  v79 = (volatile signed __int64 *)(a1 + 96);
  v78 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = (unsigned __int8)v78 - 1LL;
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v18) = 4;
    else
      v18 = (v11 << (CurrentIrql + 1)) & 4;
    a4 = (unsigned int)v18 | SchedulerAssist[5];
    SchedulerAssist[5] = a4;
  }
  LOBYTE(v80) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v78, v8);
  }
  else
  {
    v12 = _InterlockedExchange64(v8, (__int64)&v78);
    if ( v12 )
      KxWaitForLockOwnerShip(&v78, v12, v8, a4);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !*(_DWORD *)(a1 + 64) )
        {
          *(_WORD *)(a1 + 24) = 1;
          *(_DWORD *)(a1 + 64) = 1;
          v13 = *(_DWORD *)(a1 + 56) & 7;
          *(_QWORD *)(a1 + 48) = CurrentThread;
          *(_DWORD *)(a1 + 56) = v13 | 8;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v78, retaddr);
            goto LABEL_9;
          }
          _m_prefetchw(&v78);
          v14 = v78;
          if ( !v78 )
          {
            if ( (__int64 *)_InterlockedCompareExchange64(v79, 0LL, (signed __int64)&v78) == &v78 )
              goto LABEL_9;
            v14 = KxWaitForLockChainValid(&v78);
          }
          v78 = 0LL;
          v44 = (unsigned __int8)v79;
          if ( ((v44 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v14 + 8), (__int64)v79)) & 4) != 0 )
          {
            _InterlockedOr(v77, 0);
            KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v14 + 8) >> 5) & 0x7F], 0LL));
          }
LABEL_9:
          v15 = (unsigned __int8)v80;
          if ( (_DWORD)KiIrqlFlags )
          {
            v73 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v73 <= 0xFu && (unsigned __int8)v80 <= 0xFu && v73 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v75 = CurrentPrcb->SchedulerAssist;
              v76 = ~(unsigned __int16)(v11 << ((unsigned __int8)v80 + 1));
              v54 = (v76 & v75[5]) == 0;
              v75[5] &= v76;
              if ( v54 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v15);
          __incgsdword(0x8A94u);
          __incgsdword(0x8A64u);
          if ( v7 )
            goto LABEL_135;
          return 1;
        }
        if ( *(char *)(a1 + 26) >= 0 )
          break;
        if ( *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
        {
          v36 = *(_DWORD *)(a1 + 56) + 8;
          *(_DWORD *)(a1 + 56) = v36;
          v37 = v36 >> 3;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v78, retaddr);
            goto LABEL_63;
          }
          _m_prefetchw(&v78);
          v38 = v78;
          if ( !v78 )
          {
            if ( (__int64 *)_InterlockedCompareExchange64(v79, 0LL, (signed __int64)&v78) == &v78 )
              goto LABEL_63;
            v38 = KxWaitForLockChainValid(&v78);
          }
          v78 = 0LL;
          v49 = (unsigned __int8)v79;
          if ( ((v49 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v38 + 8), (__int64)v79)) & 4) != 0 )
          {
            _InterlockedOr(v77, 0);
            KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v38 + 8) >> 5) & 0x7F], 0LL));
          }
LABEL_63:
          v39 = (unsigned __int8)v80;
          if ( (_DWORD)KiIrqlFlags )
          {
            v50 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v50 <= 0xFu && (unsigned __int8)v80 <= 0xFu && v50 >= 2u )
            {
              v51 = KeGetCurrentPrcb();
              v52 = v51->SchedulerAssist;
              v53 = ~(unsigned __int16)(v11 << ((unsigned __int8)v80 + 1));
              v54 = (v53 & v52[5]) == 0;
              v52[5] &= v53;
              if ( v54 )
                KiRemoveSystemWorkPriorityKick(v51);
            }
          }
          __writecr8(v39);
          __incgsdword(0x8A90u);
          __incgsdword(0x8A64u);
          if ( v7 )
          {
            v55 = v37;
            v56 = 65585LL;
            goto LABEL_136;
          }
          return 1;
        }
        EmptyEntry = ExpFindEmptyEntry(a1, &v78);
        if ( EmptyEntry )
          goto LABEL_32;
      }
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      EmptyEntry = a1 + 48;
      v23 = ThreadResourceHint;
      v24 = *(struct _KTHREAD **)(a1 + 48);
      if ( v24 != CurrentThread )
      {
        v25 = 0LL;
        v26 = 0LL;
        if ( v24 )
        {
          v25 = 1LL;
        }
        else
        {
          v26 = a1 + 48;
          if ( v21 )
            v26 = 0LL;
        }
        if ( !(_DWORD)v23 )
          break;
        v27 = *(_QWORD *)(a1 + 16);
        if ( !v27 )
          break;
        if ( (unsigned int)v23 >= *(_DWORD *)(v27 + 8) )
          break;
        EmptyEntry = v27 + 16 * v23;
        if ( *(struct _KTHREAD **)EmptyEntry != CurrentThread )
          break;
      }
LABEL_31:
      if ( EmptyEntry )
        goto LABEL_32;
    }
    EmptyEntry = *(_QWORD *)(a1 + 16);
    v28 = EmptyEntry;
    v29 = v20 + *(unsigned int *)(a1 + 72);
    if ( !EmptyEntry )
    {
      v30 = 0LL;
      goto LABEL_26;
    }
    v30 = EmptyEntry + 16LL * *(unsigned int *)(EmptyEntry + 8);
    EmptyEntry += 16LL;
    if ( v25 < v29 )
    {
      do
      {
        if ( *(struct _KTHREAD **)EmptyEntry == CurrentThread )
        {
          KeGetCurrentThread()->ResourceIndex = (__int64)(EmptyEntry - v28) >> 4;
          goto LABEL_31;
        }
        if ( *(_QWORD *)EmptyEntry )
        {
          if ( ++v25 == v29 )
          {
            EmptyEntry += 16LL;
            break;
          }
        }
        else if ( !v26 )
        {
          v26 = EmptyEntry;
        }
        EmptyEntry += 16LL;
      }
      while ( EmptyEntry != v30 );
    }
LABEL_26:
    if ( v26 )
      break;
    if ( EmptyEntry < v30 )
    {
      v26 = EmptyEntry;
      if ( EmptyEntry )
        break;
    }
    ExpExpandResourceOwnerTable(a1, &v78, EmptyEntry, v26);
  }
  EmptyEntry = v26;
  KeGetCurrentThread()->ResourceIndex = (__int64)(v26 - v28) >> 4;
LABEL_32:
  if ( *(struct _KTHREAD **)EmptyEntry == CurrentThread )
  {
    v40 = *(_DWORD *)(EmptyEntry + 8) + 8;
    *(_DWORD *)(EmptyEntry + 8) = v40;
    v41 = v40 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v78, retaddr);
      goto LABEL_69;
    }
    _m_prefetchw(&v78);
    v42 = v78;
    if ( !v78 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v79, 0LL, (signed __int64)&v78) == &v78 )
        goto LABEL_69;
      v42 = KxWaitForLockChainValid(&v78);
    }
    v78 = 0LL;
    v48 = (unsigned __int8)v79;
    if ( ((v48 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v42 + 8), (__int64)v79)) & 4) != 0 )
    {
      _InterlockedOr(v77, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v42 + 8) >> 5) & 0x7F], 0LL));
    }
LABEL_69:
    v43 = (unsigned __int8)v80;
    if ( (_DWORD)KiIrqlFlags )
    {
      v57 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v57 <= 0xFu && (unsigned __int8)v80 <= 0xFu && v57 >= 2u )
      {
        v58 = KeGetCurrentPrcb();
        v59 = v58->SchedulerAssist;
        v60 = ~(unsigned __int16)(v11 << ((unsigned __int8)v80 + 1));
        v54 = (v60 & v59[5]) == 0;
        v59[5] &= v60;
        if ( v54 )
          KiRemoveSystemWorkPriorityKick(v58);
      }
    }
    __writecr8(v43);
    __incgsdword(0x8A98u);
    __incgsdword(0x8A64u);
    if ( v7 )
    {
      v55 = v41;
      v56 = 65617LL;
      goto LABEL_136;
    }
    return 1;
  }
  v31 = *(_DWORD *)(a1 + 64);
  if ( !v31 || *(char *)(a1 + 26) >= 0 && !*(_DWORD *)(a1 + 76) )
  {
    *(_WORD *)(a1 + 24) = 1;
    *(_DWORD *)(a1 + 64) = v31 + 1;
    v32 = *(_DWORD *)(EmptyEntry + 8) & 7;
    *(_QWORD *)EmptyEntry = CurrentThread;
    *(_DWORD *)(EmptyEntry + 8) = v32 | 8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v78, retaddr);
      goto LABEL_39;
    }
    _m_prefetchw(&v78);
    v33 = v78;
    if ( !v78 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v79, 0LL, (signed __int64)&v78) == &v78 )
        goto LABEL_39;
      v33 = KxWaitForLockChainValid(&v78);
    }
    v78 = 0LL;
    v35 = (unsigned __int8)v79;
    if ( ((v35 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v33 + 8), (__int64)v79)) & 4) != 0 )
    {
      _InterlockedOr(v77, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v33 + 8) >> 5) & 0x7F], 0LL));
    }
LABEL_39:
    v34 = (unsigned __int8)v80;
    if ( (_DWORD)KiIrqlFlags )
    {
      v69 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v69 <= 0xFu && (unsigned __int8)v80 <= 0xFu && v69 >= 2u )
      {
        v70 = KeGetCurrentPrcb();
        v71 = v70->SchedulerAssist;
        v72 = ~(unsigned __int16)(v11 << ((unsigned __int8)v80 + 1));
        v54 = (v72 & v71[5]) == 0;
        v71[5] &= v72;
        if ( v54 )
          KiRemoveSystemWorkPriorityKick(v70);
      }
    }
    __writecr8(v34);
LABEL_41:
    __incgsdword(0x8A94u);
    __incgsdword(0x8A64u);
    if ( v7 )
    {
LABEL_135:
      v55 = 1LL;
      v56 = 65601LL;
LABEL_136:
      PerfLogExecutiveResourceAcquire(v56, a1, v55, *(unsigned int *)(a1 + 68));
    }
    return 1;
  }
  if ( a2 )
  {
    v45 = *(_DWORD *)(EmptyEntry + 8);
    *(_QWORD *)EmptyEntry = CurrentThread;
    *(_DWORD *)(EmptyEntry + 8) = v45 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    *((_QWORD *)&v83 + 1) = &v83;
    *(_QWORD *)&v83 = &v83;
    *((_QWORD *)&v81 + 1) = 0LL;
    *((_QWORD *)&v82 + 1) = 393217LL;
    *(_QWORD *)&v82 = CurrentThread;
    v84 = 0LL;
    RtlInsertHeadCircularList(a1 + 32, &v81);
    KxReleaseQueuedSpinLock(&v78);
    v46 = (unsigned __int8)v80;
    if ( (_DWORD)KiIrqlFlags )
    {
      v65 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v65 <= 0xFu && (unsigned __int8)v80 <= 0xFu && v65 >= 2u )
      {
        v66 = KeGetCurrentPrcb();
        v67 = v66->SchedulerAssist;
        v68 = ~(unsigned __int16)(v11 << ((unsigned __int8)v80 + 1));
        v54 = (v68 & v67[5]) == 0;
        v67[5] &= v68;
        if ( v54 )
          KiRemoveSystemWorkPriorityKick(v66);
      }
    }
    __writecr8(v46);
    __incgsdword(0x8A9Cu);
    if ( v7 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource(a1, &v81, 66116LL, ExpApplyRewaitBoost);
    if ( ((unsigned __int8)CurrentThread & 3) == 0 )
      ResourceIndex = CurrentThread->ResourceIndex;
    ExpBoostIoAfterAcquire(a1, CurrentThread, ResourceIndex);
    goto LABEL_41;
  }
  KxReleaseQueuedSpinLock(&v78);
  v47 = (unsigned __int8)v80;
  if ( (_DWORD)KiIrqlFlags )
  {
    v61 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v61 <= 0xFu && (unsigned __int8)v80 <= 0xFu && v61 >= 2u )
    {
      v62 = KeGetCurrentPrcb();
      v63 = v62->SchedulerAssist;
      v64 = ~(unsigned __int16)(v11 << ((unsigned __int8)v80 + 1));
      v54 = (v64 & v63[5]) == 0;
      v63[5] &= v64;
      if ( v54 )
        KiRemoveSystemWorkPriorityKick(v62);
    }
  }
  __writecr8(v47);
  __incgsdword(0x8AA0u);
  return 0;
}
