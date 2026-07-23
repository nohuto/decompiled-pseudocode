/*
 * XREFs of KiCompleteKernelInit @ 0x140A8D340
 * Callers:
 *     KiInitializeKernel @ 0x140A8C770 (KiInitializeKernel.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246750 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KeInitializeDpc @ 0x1402BF970 (KeInitializeDpc.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307790 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiUpdateThreadPriority @ 0x140307A60 (KiUpdateThreadPriority.c)
 *     KeInitializeTimer2 @ 0x14031E320 (KeInitializeTimer2.c)
 *     KeAttachProcess @ 0x140363D20 (KeAttachProcess.c)
 *     KiSetProcessorIdle @ 0x140381A7C (KiSetProcessorIdle.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiInitializeThreadCycleTable @ 0x140A8D520 (KiInitializeThreadCycleTable.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140A8D590 (KiAddCpuToSystemCpuPartition.c)
 *     KiCreateCpuSetForProcessor @ 0x140A8D5D8 (KiCreateCpuSetForProcessor.c)
 *     KiAllocateHeteroConfigBuffer @ 0x140A92074 (KiAllocateHeteroConfigBuffer.c)
 */

__int64 __fastcall KiCompleteKernelInit(__int64 a1, __int64 a2, int a3)
{
  char v3; // bl
  unsigned __int8 CurrentIrql; // cl
  int v8; // eax
  __int64 v9; // rdx
  int HeteroConfigBuffer; // eax
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rax
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v14 = 0LL;
  if ( !a3 )
  {
    *(_DWORD *)(a1 + 13224) = KiMaximumDpcQueueDepth;
    *(_DWORD *)(a1 + 13232) = KiMinimumDpcRate;
    *(_DWORD *)(a1 + 33108) = KiAdjustDpcThreshold;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v13) = 4;
    if ( CurrentIrql != 2 )
      v13 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  _enable();
  KeAttachProcess(PsInitialSystemProcess);
  if ( !a3 )
  {
    qword_140C42538 = 0LL;
    qword_140C42530 = (__int64)&qword_140C42528;
    qword_140C42528 = (__int64)&qword_140C42528;
    KeInitializeTimer2((__int64)&KiForegroundState, (__int64)KiForegroundTimerCallback, 0LL, 8LL);
    KeInitializeDpc((PRKDPC)&stru_140C424A8, (PKDEFERRED_ROUTINE)KiProcessPendingForegroundBoosts, 0LL);
    KeInitializeDpc((PRKDPC)&stru_140C424E8, (PKDEFERRED_ROUTINE)KiTriggerForegroundBoostDpc, 0LL);
    KeInitializeDpc(
      (PRKDPC)&KiUpdateVpThreadPriorityDpc,
      (PKDEFERRED_ROUTINE)KiUpdateVpBackingThreadPriorityDpcRoutine,
      0LL);
    BYTE1(KiUpdateVpThreadPriorityDpc) = 2;
    qword_140C42548 = (__int64)&KiUpdateVpThreadPriorityListHead;
    KiUpdateVpThreadPriorityListHead = (__int64)&KiUpdateVpThreadPriorityListHead;
    KiUpdateVpThreadPriorityLock = 0LL;
    HeteroConfigBuffer = KiAllocateHeteroConfigBuffer();
    if ( HeteroConfigBuffer < 0 )
      KeBugCheckEx(0x31u, HeteroConfigBuffer, 0xDuLL, 0LL, 0LL);
  }
  v8 = KiInitializeThreadCycleTable(a1);
  if ( v8 < 0 )
    KeBugCheckEx(0x31u, v8, 0xCuLL, 0LL, 0LL);
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 80LL), *(unsigned __int8 *)(a1 + 209));
  _interlockedbittestandset64(
    (volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 104LL),
    *(unsigned __int8 *)(a1 + 209));
  KiAcquirePrcbLocksForIsolationUnit(a1, 0, &v14);
  *(_BYTE *)(a1 + 35) = 1;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v3 = 1;
    KiSetProcessorIdle(a1, 1, 1);
  }
  KiUpdateThreadPriority(a1, v9, a2, 0, v3);
  KiReleasePrcbLocksForIsolationUnit(&v14);
  KiAddCpuToSystemCpuPartition(a1);
  return KiCreateCpuSetForProcessor(a1);
}
