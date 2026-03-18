/*
 * XREFs of CcCompleteAsyncRead @ 0x14028F324
 * Callers:
 *     CcCompleteAsyncReadWorker @ 0x140242F10 (CcCompleteAsyncReadWorker.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402F5AEC (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncReadWorker @ 0x1403C4AE0 (CcAsyncReadWorker.c)
 * Callees:
 *     CcDecrementOpenCount @ 0x140282AF4 (CcDecrementOpenCount.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsSetPagePriorityThread @ 0x14028F63C (PsSetPagePriorityThread.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x14033D720 (PsGetPagePriorityThread.c)
 *     IoDiskIoAttributionDereference @ 0x140366814 (IoDiskIoAttributionDereference.c)
 *     CcCopyReadExceptionFilter @ 0x140376F34 (CcCopyReadExceptionFilter.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CcMapAndCopyFromCache @ 0x1407BDF60 (CcMapAndCopyFromCache.c)
 *     CcTelemetryBucketizeLatency @ 0x1407BE350 (CcTelemetryBucketizeLatency.c)
 */

__int64 __fastcall CcCompleteAsyncRead(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r8
  PVOID MappedSystemVa; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v19; // eax
  bool v20; // zf
  int v21; // [rsp+A0h] [rbp-D0h]
  __int64 v22; // [rsp+A8h] [rbp-C8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-A8h]
  __int64 v25; // [rsp+D0h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-98h]
  __int64 v27; // [rsp+E0h] [rbp-90h]
  __int64 v28; // [rsp+E8h] [rbp-88h]
  PMDL MemoryDescriptorList; // [rsp+F0h] [rbp-80h]
  PVOID v30; // [rsp+F8h] [rbp-78h]
  int v31[2]; // [rsp+100h] [rbp-70h]
  __int64 v32; // [rsp+108h] [rbp-68h]
  __int64 v33; // [rsp+110h] [rbp-60h]
  __int64 v34; // [rsp+118h] [rbp-58h]
  struct _KTHREAD *v35; // [rsp+120h] [rbp-50h]
  __int64 v36; // [rsp+188h] [rbp+18h] BYREF
  unsigned int v37; // [rsp+190h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  PsGetPagePriorityThread(CurrentThread);
  LODWORD(v36) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(a1 + 16);
  v27 = v2;
  *(_QWORD *)v31 = *(_QWORD *)(a1 + 32);
  v37 = *(_DWORD *)(a1 + 40);
  v21 = *(_DWORD *)(a1 + 56);
  MemoryDescriptorList = *(PMDL *)(a1 + 64);
  v32 = *(_QWORD *)(a1 + 72);
  v3 = v32;
  v4 = *(_QWORD *)(a1 + 80);
  v25 = v4;
  v22 = *(_QWORD *)(a1 + 104);
  v24 = v22;
  v5 = *(_QWORD *)(a1 + 120);
  v28 = v5;
  PsSetPagePriorityThread(v6);
  v35 = KeGetCurrentThread();
  v35[1].TrapFrame = (_KTRAP_FRAME *)7;
  if ( *(int *)v3 < 0 )
  {
    v8 = v22;
  }
  else
  {
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(v3 + 8) = v37;
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
    v30 = MappedSystemVa;
    if ( MappedSystemVa )
      CcMapAndCopyFromCache(v31[0], MappedSystemVa, (__int64)&v36, v21, v22, 0LL);
    else
      *(_DWORD *)v3 = -1073741670;
    v8 = v22;
  }
  if ( v8 )
    IoDiskIoAttributionDereference(v8);
  if ( (_DWORD)v36 )
    ++CcNumberAsyncReadRefaulted;
  if ( v4 && *(_QWORD *)v4 )
    (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v4 + 8));
  KeGetCurrentThread()[1].TrapFrame = 0LL;
  PsSetPagePriorityThread(CurrentThread);
  _InterlockedAdd((volatile signed __int32 *)(v2 + 520), 0xFFFFFFFF);
  if ( !byte_140C498C1 )
  {
    v9 = *(_QWORD *)(v2 + 504);
    v33 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v5) / stru_140C49888.QuadPart;
    CcTelemetryBucketizeLatency(v33, v9 + 1224, v9 + 1320);
    ++*(_QWORD *)(v9 + 1208);
    if ( v10 > *(_QWORD *)(v9 + 1216) )
      *(_QWORD *)(v9 + 1216) = v10;
  }
  v11 = *(_QWORD *)(a1 + 136);
  v34 = v11;
  if ( v11 != *(_QWORD *)(v2 + 528) )
    KeBugCheckEx(0x34u, 0x702uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 704), &LockHandle);
  CcDecrementOpenCount(v2, v12, v13);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
