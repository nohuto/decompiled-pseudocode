/*
 * XREFs of CcFlushCachePreProcess @ 0x14029DD60
 * Callers:
 *     CcFlushCachePriv @ 0x14029CC14 (CcFlushCachePriv.c)
 *     CcWriteBehindAsync @ 0x14053A530 (CcWriteBehindAsync.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x14053ACC4 (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     MmFlushSection @ 0x140287370 (MmFlushSection.c)
 *     CcFreeWorkQueueEntry @ 0x14029C270 (CcFreeWorkQueueEntry.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CAB0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     CcUnmapVacbArray @ 0x14029ECA0 (CcUnmapVacbArray.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14031A470 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14036D094 (CcBoostLowPriorityWorkerThread.c)
 *     CcPerfLogFlushSection @ 0x140392784 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x14039286C (CcPerfLogFlushCache.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140875C44 (CcSetTelemetryPeriodicTimer.c)
 */

char __fastcall CcFlushCachePreProcess(__int64 a1)
{
  struct _IO_STATUS_BLOCK *v1; // r15
  __int64 v2; // r12
  char v3; // di
  char v5; // r13
  __int64 v6; // r14
  void *v7; // rax
  void *v8; // rcx
  int v9; // eax
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v12; // rdx
  signed __int64 *v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  __int64 *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // r14
  unsigned __int64 v28; // rbx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  _SLIST_ENTRY *v33; // r14
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v35; // rax
  unsigned __int64 v36; // r14
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  _DWORD *v39; // r8
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  _QWORD *v43; // rcx
  char v44; // dl
  __int64 v45; // rax
  __int64 v46; // rax
  char v47; // dl
  int v48; // eax
  __int128 v49; // [rsp+50h] [rbp-29h] BYREF
  __int64 v50; // [rsp+60h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE v52; // [rsp+80h] [rbp+7h] BYREF
  __int64 v53; // [rsp+E0h] [rbp+67h]
  __int64 v54; // [rsp+E8h] [rbp+6Fh]
  __int64 v55; // [rsp+F0h] [rbp+77h]

  v1 = *(struct _IO_STATUS_BLOCK **)(a1 + 112);
  v2 = *(unsigned int *)(a1 + 104);
  v3 = *(_BYTE *)(a1 + 108);
  v50 = 0LL;
  v5 = 0;
  v55 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v49 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_QWORD *)(a1 + 88) )
  {
    v7 = *(void **)(a1 + 96);
    if ( v7 )
    {
      if ( v7 != &CcNoDelay )
        KeBugCheckEx(0x34u, 0x16A8uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
  }
  ++qword_140C5F9A0;
  if ( !byte_140C5F961 && CcTelemetryGlobalData && !dword_140C5FA70 && !dword_140C5FA74 )
    CcSetTelemetryPeriodicTimer(DueTime);
  v1->Status = 0;
  v8 = *(void **)(a1 + 96);
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v8 == &CcNoDelay )
  {
    *(_QWORD *)(a1 + 168) = v1->Information;
    v1->Status = -2147483626;
    *(_BYTE *)(a1 + 132) = 1;
LABEL_15:
    *(_QWORD *)(a1 + 96) = 0LL;
    goto LABEL_16;
  }
  v9 = *(_DWORD *)(a1 + 56) | 1;
  *(_DWORD *)(a1 + 56) = v9;
  if ( v3 )
    *(_DWORD *)(a1 + 56) = v9 | 0x10;
  if ( v8 == &CcFlushForImageSection )
  {
    *(_BYTE *)(a1 + 138) = 1;
    goto LABEL_15;
  }
LABEL_16:
  v1->Information = 0LL;
  *((_QWORD *)&v49 + 1) = &CcMasterLock;
  *(_QWORD *)&v49 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v12) = 4;
    else
      v12 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v12;
  }
  LOBYTE(v50) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v49, &CcMasterLock);
  }
  else
  {
    v13 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v49);
    if ( v13 )
      KxWaitForLockOwnerShip((signed __int64)&v49, v13);
  }
  v14 = *(_QWORD *)(v55 + 8);
  *(_QWORD *)(a1 + 16) = v14;
  if ( v14 )
  {
    v6 = *(_QWORD *)(v14 + 536);
    v53 = v6;
    v54 = *(_QWORD *)(v14 + 600);
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = v54;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    v5 = 1;
    if ( (*(_DWORD *)(v14 + 152) & 0x2000) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 96);
      if ( (v15 & 1) == 0 )
      {
LABEL_30:
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&v49);
        v16 = (unsigned __int8)v50;
        if ( !(_DWORD)KiIrqlFlags )
        {
LABEL_38:
          __writecr8(v16);
          return 0;
        }
        v17 = ((unsigned __int8)KiIrqlFlags & 1) == 0;
LABEL_32:
        v18 = KeGetCurrentIrql();
        if ( !v17 && v18 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v18 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
          v17 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        goto LABEL_38;
      }
      *(_QWORD *)(a1 + 96) = v15 ^ 1;
    }
    if ( *(_BYTE *)(a1 + 132) )
    {
      if ( (*(_DWORD *)(v14 + 152) & 0x10000) != 0 )
      {
        *(_BYTE *)(a1 + 133) = 1;
        if ( *(_DWORD *)(v14 + 524) )
          *(_BYTE *)(a1 + 134) = 1;
      }
    }
    else
    {
      v23 = *(__int64 **)(a1 + 96);
      if ( v23 )
      {
        v24 = *v23;
        v25 = *(_QWORD *)(v14 + 32);
        if ( v24 >= v25 )
          goto LABEL_30;
        if ( v24 + v2 > v25 )
        {
          LODWORD(v2) = v25 - v24;
          *(_DWORD *)(a1 + 104) = v25 - v24;
        }
      }
      ++*(_DWORD *)(v14 + 524);
    }
  }
  if ( *(_QWORD *)(a1 + 96) && !(_DWORD)v2 )
  {
    if ( v14 && !*(_BYTE *)(a1 + 132) )
      --*(_DWORD *)(v14 + 524);
    if ( v5 )
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v49);
    v16 = (unsigned __int8)v50;
    if ( !(_DWORD)KiIrqlFlags )
      goto LABEL_38;
    v17 = ((unsigned __int8)KiIrqlFlags & 1) == 0;
    goto LABEL_32;
  }
  if ( !v14 )
  {
LABEL_76:
    if ( v5 )
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v49);
    v36 = (unsigned __int8)v50;
    if ( (_DWORD)KiIrqlFlags )
    {
      v37 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v37 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v37 >= 2u )
      {
        v38 = KeGetCurrentPrcb();
        v39 = v38->SchedulerAssist;
        v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
        v17 = (v40 & v39[5]) == 0;
        v39[5] &= v40;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v38);
      }
    }
    __writecr8(v36);
    if ( v14 && (*(_DWORD *)(v14 + 152) & 0x40000000) != 0 )
      *(_BYTE *)(a1 + 134) = 1;
    if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
      CcPerfLogFlushCache(
        *(_QWORD *)(a1 + 168),
        v14,
        *(_QWORD *)(a1 + 96),
        v2,
        *(_BYTE *)(a1 + 132) == 1,
        *(_BYTE *)(a1 + 133) == 1,
        *(_BYTE *)(a1 + 134) == 1);
    if ( *(_BYTE *)(a1 + 132) )
    {
      if ( !v14 )
        goto LABEL_99;
    }
    else
    {
      if ( !v14 )
        goto LABEL_99;
      if ( (*(_DWORD *)(v14 + 152) & 0x20) != 0 )
        CcBoostLowPriorityWorkerThread(v53, v14);
    }
    v41 = *(_QWORD *)(a1 + 160);
    if ( ((*(_BYTE *)(v41 + 6) & 0x10) == 0 || (*(_BYTE *)(v41 + 4) & 0x20) == 0)
      && (*(_DWORD *)(v14 + 152) & 0x20000) == 0 )
    {
LABEL_100:
      if ( !*(_BYTE *)(a1 + 134) )
      {
        if ( !v14 )
          return 1;
        if ( (*(_DWORD *)(v14 + 152) & 0x4000000) == 0 )
        {
LABEL_117:
          v43 = *(_QWORD **)(a1 + 96);
          if ( v43 )
            *(_QWORD *)(a1 + 32) = *v43;
          v44 = CcEnablePerVolumeLazyWriter;
          v45 = v54 + 1104;
          if ( !CcEnablePerVolumeLazyWriter )
            v45 = v53 + 1168;
          *(_QWORD *)(a1 + 176) = v45;
          v46 = v54 + 1172;
          if ( !v44 )
            v46 = v53 + 1292;
          v47 = *(_BYTE *)(a1 + 132);
          *(_QWORD *)(a1 + 184) = v46;
          if ( v47 || *(_BYTE *)(a1 + 134) || v43 || (_DWORD)v2 || *(_QWORD *)(a1 + 88) )
          {
            *(_DWORD *)(a1 + 48) = 1;
            v48 = *(_DWORD *)(a1 + 48);
            if ( (_DWORD)v2 )
              v48 = v2;
            *(_DWORD *)(a1 + 48) = v48;
            if ( v47 )
              *(_QWORD *)(a1 + 144) = MEMORY[0xFFFFF78000000320];
          }
          else
          {
            *(_BYTE *)(a1 + 192) = 1;
            *(_DWORD *)(a1 + 48) = 1;
          }
          if ( CcEnablePerVolumeLazyWriter
            && *(_BYTE *)(a1 + 132)
            && !*(_BYTE *)(a1 + 135)
            && (*(_DWORD *)(v14 + 152) & 0x40000200) == 0 )
          {
            *(LARGE_INTEGER *)(a1 + 224) = KeQueryPerformanceCounter(0LL);
          }
          return 1;
        }
      }
LABEL_103:
      *(_BYTE *)(a1 + 135) = 1;
      if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
        CcPerfLogFlushSection(*(_QWORD *)(a1 + 168), v14, *(_QWORD *)(a1 + 96), v2, *(_DWORD *)(a1 + 56));
      if ( v14 )
        CcUnmapVacbArray(v14, *(_QWORD *)(a1 + 96), v2, 0, 0, 0);
      v42 = MmFlushSection(v55, *(__int64 **)(a1 + 96), (unsigned int)v2, 0LL, v1, *(_DWORD *)(a1 + 56));
      if ( v42 < 0 )
      {
        if ( *(_BYTE *)(a1 + 132) )
        {
          if ( v1->Status != -2147483626 )
            goto LABEL_113;
        }
        else if ( v1->Status )
        {
          goto LABEL_113;
        }
        v1->Status = v42;
      }
LABEL_113:
      if ( v1->Status < 0 )
        *(_DWORD *)(a1 + 128) = v1->Status;
      if ( !v14 || (*(_DWORD *)(v14 + 152) & 0x4000000) != 0 )
        return 1;
      goto LABEL_117;
    }
LABEL_99:
    if ( !*(_BYTE *)(a1 + 132) )
      goto LABEL_103;
    goto LABEL_100;
  }
  if ( !*(_BYTE *)(a1 + 138) )
    goto LABEL_75;
  if ( *(_DWORD *)(v14 + 524) >= 2u )
    goto LABEL_64;
  v26 = *(_DWORD *)(v14 + 152);
  memset(&v52, 0, sizeof(v52));
  if ( (v26 & 0x20) == 0 )
  {
LABEL_75:
    ++*(_DWORD *)(v14 + 4);
    ++*(_DWORD *)(v14 + 544);
    *(_QWORD *)(a1 + 160) = *(_QWORD *)((*(_QWORD *)(v14 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
    *(_QWORD *)(a1 + 208) = *(unsigned int *)(v14 + 112);
    goto LABEL_76;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 832), &v52);
  v27 = *(_QWORD *)(v14 + 504);
  if ( v27 )
  {
    v33 = (_SLIST_ENTRY *)(v27 & 0xFFFFFFFFFFFFFFFEuLL);
    Next = v33->Next;
    v35 = (_SLIST_ENTRY **)*((_QWORD *)&v33->Next + 1);
    if ( *(&v33->Next->Next + 1) != v33 || *v35 != v33 )
      __fastfail(3u);
    *v35 = Next;
    *((_QWORD *)&Next->Next + 1) = v35;
    *((_QWORD *)&v33->Next + 1) = 0LL;
    v33->Next = 0LL;
    *(_DWORD *)(v14 + 152) &= ~0x20u;
    *(_QWORD *)(v14 + 504) = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v52);
    CcFreeWorkQueueEntry(v33);
    goto LABEL_75;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v52);
LABEL_64:
  --*(_DWORD *)(v14 + 524);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v49);
  v28 = (unsigned __int8)v50;
  if ( (_DWORD)KiIrqlFlags )
  {
    v29 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v29 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v29 >= 2u )
    {
      v30 = KeGetCurrentPrcb();
      v31 = v30->SchedulerAssist;
      v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
      v17 = (v32 & v31[5]) == 0;
      v31[5] &= v32;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(v30);
    }
  }
  __writecr8(v28);
  v1->Status = -1073741740;
  return 0;
}
