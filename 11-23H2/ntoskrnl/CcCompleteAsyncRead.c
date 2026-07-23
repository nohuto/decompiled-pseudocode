/*
 * XREFs of CcCompleteAsyncRead @ 0x1402C16C0
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x1402C0E94 (CcPostWorkQueueAsyncRead.c)
 *     CcCompleteAsyncReadWorker @ 0x140353740 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1403BECE0 (CcAsyncReadWorker.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020C878 (IoDiskIoAttributionDereference.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     CcDecrementOpenCount @ 0x14029CDB0 (CcDecrementOpenCount.c)
 *     PsSetPagePriorityThread @ 0x1402C19D8 (PsSetPagePriorityThread.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     PsGetPagePriorityThread @ 0x1402E17B0 (PsGetPagePriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     CcCopyReadExceptionFilter @ 0x1405379A0 (CcCopyReadExceptionFilter.c)
 *     CcTelemetryBucketizeLatency @ 0x1406F5CC0 (CcTelemetryBucketizeLatency.c)
 *     CcMapAndCopyFromCache @ 0x1406F5E20 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcCompleteAsyncRead(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r8
  int v8; // r9d
  int v9; // edx
  PVOID MappedSystemVa; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // r10
  __int64 v14; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v20; // eax
  bool v21; // zf
  unsigned int PagePriorityThread; // [rsp+9Ch] [rbp-D4h]
  unsigned int v23; // [rsp+A0h] [rbp-D0h]
  __int64 v24; // [rsp+A8h] [rbp-C8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-A8h]
  __int64 v27; // [rsp+D0h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-98h]
  __int64 v29; // [rsp+E0h] [rbp-90h]
  __int64 v30; // [rsp+E8h] [rbp-88h]
  PMDL MemoryDescriptorList; // [rsp+F0h] [rbp-80h]
  PVOID v32; // [rsp+F8h] [rbp-78h]
  int v33[2]; // [rsp+100h] [rbp-70h]
  __int64 v34; // [rsp+108h] [rbp-68h]
  __int64 v35; // [rsp+110h] [rbp-60h]
  __int64 v36; // [rsp+118h] [rbp-58h]
  struct _KTHREAD *v37; // [rsp+120h] [rbp-50h]
  unsigned int v38; // [rsp+180h] [rbp+10h]
  __int64 v39; // [rsp+190h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  LODWORD(v39) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(a1 + 16);
  v29 = v2;
  *(_QWORD *)v33 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v38 = *(_DWORD *)(a1 + 40);
  v23 = *(_DWORD *)(a1 + 56);
  MemoryDescriptorList = *(PMDL *)(a1 + 64);
  v34 = *(_QWORD *)(a1 + 72);
  v4 = v34;
  v5 = *(_QWORD *)(a1 + 80);
  v27 = v5;
  v24 = *(_QWORD *)(a1 + 104);
  v26 = v24;
  v6 = *(_QWORD *)(a1 + 120);
  v30 = v6;
  PsSetPagePriorityThread(v7, v23);
  v37 = KeGetCurrentThread();
  v37[1].TrapFrame = (_KTRAP_FRAME *)7;
  if ( *(int *)v4 < 0 )
  {
    v11 = v24;
  }
  else
  {
    *(_DWORD *)v4 = 0;
    v9 = v38;
    *(_QWORD *)(v4 + 8) = v38;
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    }
    else
    {
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
      v9 = v38;
    }
    v32 = MappedSystemVa;
    if ( MappedSystemVa )
    {
      LOBYTE(v8) = 1;
      CcMapAndCopyFromCache(v33[0], v3, v9, v8, MappedSystemVa, (__int64)&v39, v23, v24, 0LL);
    }
    else
    {
      *(_DWORD *)v4 = -1073741670;
    }
    v11 = v24;
  }
  if ( v11 )
    IoDiskIoAttributionDereference(v11);
  if ( (_DWORD)v39 )
    ++CcNumberAsyncReadRefaulted;
  if ( v5 && *(_QWORD *)v5 )
    (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v5 + 8));
  KeGetCurrentThread()[1].TrapFrame = 0LL;
  PsSetPagePriorityThread(CurrentThread, PagePriorityThread);
  _InterlockedAdd((volatile signed __int32 *)(v2 + 528), 0xFFFFFFFF);
  if ( !byte_140C5F8A1 )
  {
    v12 = *(_QWORD *)(v2 + 512);
    v35 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v6) / stru_140C5F868.QuadPart;
    CcTelemetryBucketizeLatency(v35, v12 + 1280, v12 + 1376);
    ++*(_QWORD *)(v12 + 1264);
    if ( v13 > *(_QWORD *)(v12 + 1272) )
      *(_QWORD *)(v12 + 1272) = v13;
  }
  v14 = *(_QWORD *)(a1 + 136);
  v36 = v14;
  if ( v14 != *(_QWORD *)(v2 + 536) )
    KeBugCheckEx(0x34u, 0x717uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 768), &LockHandle);
  CcDecrementOpenCount(v2);
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
      v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v21 = (v20 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
