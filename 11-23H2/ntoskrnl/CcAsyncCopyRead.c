/*
 * XREFs of CcAsyncCopyRead @ 0x1402C1300
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAllocateWorkQueueEntry @ 0x14029B900 (CcAllocateWorkQueueEntry.c)
 *     PsGetIoPriorityThread @ 0x1402A8E40 (PsGetIoPriorityThread.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402AD4E0 (ExpAllocatePoolWithTagFromNode.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402C0E94 (CcPostWorkQueueAsyncRead.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402C11C0 (IoReferenceIoAttributionFromThread.c)
 *     CcGetNodeForReadAhead @ 0x1402C1674 (CcGetNodeForReadAhead.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     PsGetPagePriorityThread @ 0x1402E17B0 (PsGetPagePriorityThread.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     CcScheduleReadAheadNuma @ 0x14032924C (CcScheduleReadAheadNuma.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     CcSetTelemetryPeriodicTimer @ 0x1408759B4 (CcSetTelemetryPeriodicTimer.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

char __fastcall CcAsyncCopyRead(
        _SLIST_ENTRY *Object,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _KTHREAD *a7,
        __int64 a8)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 Ahead; // rax
  _DWORD *v17; // r9
  __int64 v18; // r15
  struct _KTHREAD *CurrentThread; // rsi
  _SLIST_ENTRY *PoolWithTagFromNode; // rax
  _SLIST_ENTRY *v21; // r14
  NTSTATUS v22; // ebp
  volatile signed __int64 *DeepFreezeStartTime; // rcx
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  PSLIST_ENTRY v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // rdi
  int PagePriorityThread; // eax
  __int64 v34; // r8
  PSLIST_ENTRY v35; // rbp
  unsigned int v36; // ecx
  __int64 v38; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v41; // [rsp+98h] [rbp+10h]

  v41 = a2;
  PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  ListEntry = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = *(_QWORD *)(*((_QWORD *)&Object[2].Next + 1) + 8LL);
  v13 = *(_QWORD *)(v12 + 536);
  v38 = v13;
  Ahead = CcGetNodeForReadAhead(v12, v14, v15, Object[3].Next);
  v18 = Ahead;
  if ( (signed __int64)(*a2 + a3) > *(_QWORD *)(v12 + 8) )
    KeBugCheckEx(0x34u, 0x3FDuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  CurrentThread = a7;
  if ( CcEnableReadAheadInAsyncRead && (*v17 & 0x20000) != 0 )
    CcScheduleReadAheadNuma(Object, Ahead);
  ++qword_140C5F8C8;
  if ( !byte_140C5F8A1 && CcTelemetryGlobalData && !dword_140C5F9B0 && !dword_140C5F9B4 )
    CcSetTelemetryPeriodicTimer(DueTime);
  PoolWithTagFromNode = (_SLIST_ENTRY *)ExpAllocatePoolWithTagFromNode(
                                          NonPagedPoolNx,
                                          8uLL,
                                          1933665091LL,
                                          *(_DWORD *)(v18 + 24) | 0x80000000,
                                          0);
  v21 = PoolWithTagFromNode;
  if ( !PoolWithTagFromNode )
    RtlRaiseStatus(-1073741670);
  PoolWithTagFromNode->Next = 0LL;
  v22 = CcAllocateWorkQueueEntry(v13, *(_QWORD *)(v12 + 600), v18, &ListEntry);
  if ( v22 < 0 )
  {
    ExFreePoolWithTag(v21, 0x73416343u);
    RtlRaiseStatus(v22);
  }
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  DeepFreezeStartTime = (volatile signed __int64 *)CurrentThread->Process[2].DeepFreezeStartTime;
  if ( DeepFreezeStartTime )
  {
    if ( ((a3 + 4095) & 0xFFFFF000) != 0 )
      _InterlockedExchangeAdd64(DeepFreezeStartTime, (a3 + 4095) & 0xFFFFF000);
    _InterlockedExchangeAdd64(DeepFreezeStartTime + 2, 1uLL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v38 + 768), &LockHandle);
  ++*(_DWORD *)(v12 + 4);
  ++*(_DWORD *)(v12 + 544);
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 528));
  v30 = ListEntry;
  v31 = v41;
  LODWORD(ListEntry[8].Next) = 5;
  v30[1].Next = (_SLIST_ENTRY *)v12;
  v32 = a8;
  v30[2].Next = Object;
  *((_QWORD *)&v30[1].Next + 1) = *v31;
  *((_DWORD *)&v30[2].Next + 2) = a3;
  v30[3].Next = v21;
  v30[4].Next = *(_SLIST_ENTRY **)(v32 + 16);
  *((_QWORD *)&v30[4].Next + 1) = a6;
  v30[5].Next = (_SLIST_ENTRY *)v32;
  PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  *(_DWORD *)(v34 + 56) = PagePriorityThread;
  v35 = ListEntry;
  *((_QWORD *)&ListEntry[5].Next + 1) = KeGetCurrentThread()->ApcState.Process;
  v35[6].Next = (_SLIST_ENTRY *)CurrentThread;
  LOBYTE(v35[7].Next) = *(_BYTE *)(v32 + 24);
  HIDWORD(v35[7].Next) = *(_DWORD *)(v32 + 28);
  *((LARGE_INTEGER *)&v35[7].Next + 1) = PerformanceCounter;
  *((_QWORD *)&v35[6].Next + 1) = 0LL;
  IoReferenceIoAttributionFromThread(CurrentThread, (__int64)(&v35[6].Next + 1));
  v36 = *(_DWORD *)(v32 + 28);
  if ( v36 > CcMaxNestingLevel )
    KeBugCheckEx(0x34u, 0x4A3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcPostWorkQueueAsyncRead(v35, *(_QWORD *)(v18 + 256) + 16LL * v36);
  return 1;
}
