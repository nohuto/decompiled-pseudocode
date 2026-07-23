/*
 * XREFs of MiInsertPteTracker @ 0x1406613F4
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14027CE40 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x140335858 (MiMapContiguousMemory.c)
 *     MmAllocateMappingAddressEx @ 0x14086C950 (MmAllocateMappingAddressEx.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140227700 (RtlCaptureStackBackTrace.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404287F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x140428870 (RtlpInterlockedFlushSList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiInsertPteTracker(__int64 a1, int a2, char a3, char a4)
{
  void *Pool; // rdi
  PSLIST_ENTRY v9; // rax
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v11; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rdx
  __int64 v20; // rbx
  char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  ULONG BackTraceHash; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-30h] BYREF

  BackTraceHash = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( LOWORD(stru_140C68480.Alignment) >= 0xAu )
  {
    v9 = RtlpInterlockedFlushSList(&stru_140C68480);
    Pool = v9;
    if ( v9 )
    {
      Next = v9->Next;
      if ( v9->Next )
      {
        do
        {
          v11 = Next->Next;
          ExFreePoolWithTag(Next, 0);
          Next = v11;
        }
        while ( v11 );
      }
      goto LABEL_8;
    }
  }
  else
  {
    Pool = RtlpInterlockedPopEntrySList(&stru_140C68480);
    if ( Pool )
      goto LABEL_8;
  }
  Pool = MiAllocatePool(64, 0x80uLL, 0x79536D4Du);
  if ( !Pool )
  {
    byte_140C685BD = 1;
    return;
  }
LABEL_8:
  if ( !a2 )
  {
    v16 = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF;
    v17 = *(unsigned int *)(a1 + 40) + 4095LL;
    *((_QWORD *)Pool + 2) = a1;
    v15 = v17 + v16;
    *((_QWORD *)Pool + 5) = *(_QWORD *)(a1 + 32);
    *((_DWORD *)Pool + 12) = *(_DWORD *)(a1 + 44);
    *((_DWORD *)Pool + 13) = *(_DWORD *)(a1 + 40);
    goto LABEL_13;
  }
  if ( a2 == 1 )
  {
    v13 = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF;
    v14 = *(_QWORD *)(a1 + 16) + 4095LL;
    *((_QWORD *)Pool + 2) = 1LL;
    v15 = v14 + v13;
LABEL_13:
    v12 = v15 >> 12;
    goto LABEL_14;
  }
  v12 = *(_QWORD *)(a1 + 16) >> 12;
  *((_QWORD *)Pool + 2) = 0LL;
LABEL_14:
  v18 = v12 + 1;
  if ( (a3 & 2) == 0 )
    v18 = v12;
  *((_QWORD *)Pool + 3) = v18;
  RtlCaptureStackBackTrace(1u, 7u, (PVOID *)Pool + 9, &BackTraceHash);
  v19 = *(_QWORD *)(a1 + 24);
  *((_QWORD *)Pool + 4) = v19;
  *((_QWORD *)Pool + 7) = *(_QWORD *)(a1 + 48);
  *((_DWORD *)Pool + 16) = (4 * (a4 & 3)) | a3 & 1 | *((_DWORD *)Pool + 16) & 0xFFFFFFE0 | ((a3 & 2) != 0 ? 0x10 : 0);
  v20 = 40543LL * (unsigned int)(v19 >> 12);
  KeAcquireInStackQueuedSpinLock(&qword_140C68490, &LockHandle);
  v21 = (char *)&unk_140C6A330 + 16 * (((unsigned __int8)v20 ^ BYTE4(v20)) & 0xF);
  v22 = *(_QWORD *)v21;
  if ( *(char **)(*(_QWORD *)v21 + 8LL) != v21 )
    __fastfail(3u);
  *((_QWORD *)Pool + 1) = v21;
  *(_QWORD *)Pool = v22;
  *(_QWORD *)(v22 + 8) = Pool;
  *(_QWORD *)v21 = Pool;
  qword_140C6A430 += v18;
  v23 = ++qword_140C6A438;
  if ( qword_140C6A438 > (unsigned __int64)qword_140C6A440 )
    qword_140C6A440 = v23;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v29 = (v28 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v28;
      if ( v29 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
}
