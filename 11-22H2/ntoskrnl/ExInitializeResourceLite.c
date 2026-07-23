/*
 * XREFs of ExInitializeResourceLite @ 0x140207480
 * Callers:
 *     CcAllocateInitializeBcb @ 0x140207370 (CcAllocateInitializeBcb.c)
 *     SepCreateTokenEx @ 0x140229730 (SepCreateTokenEx.c)
 *     DifExInitializeResourceLiteWrapper @ 0x1405D9300 (DifExInitializeResourceLiteWrapper.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     PnpInitializeNotifyEntry @ 0x14068840C (PnpInitializeNotifyEntry.c)
 *     NtCreateJobObject @ 0x1406885D0 (NtCreateJobObject.c)
 *     SepDuplicateToken @ 0x140729BF0 (SepDuplicateToken.c)
 *     RtlCreateHeap @ 0x1407D9600 (RtlCreateHeap.c)
 *     SepFilterToken @ 0x1407F2180 (SepFilterToken.c)
 *     TtmInit @ 0x140802F88 (TtmInit.c)
 *     PiPnpRtlInit @ 0x140813794 (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x14081425C (PiDrvDbCreateNode.c)
 *     PiDqObjectManagerInit @ 0x140814CC0 (PiDqObjectManagerInit.c)
 *     DrvDbOpenContext @ 0x140814FC0 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140815840 (DrvDbCreateDatabaseNode.c)
 *     PiDmObjectManagerInit @ 0x14083B378 (PiDmObjectManagerInit.c)
 *     AdtpObjsInitialize @ 0x140843E58 (AdtpObjsInitialize.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x140848C68 (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x140850FF0 (FsRtlInitializeTieringHeat.c)
 *     FsRtlInitializeDedupChange @ 0x140851024 (FsRtlInitializeDedupChange.c)
 *     _PnpCtxOpenMachine @ 0x140855BA4 (_PnpCtxOpenMachine.c)
 *     MUIInitializeResourceLock @ 0x14085F71C (MUIInitializeResourceLock.c)
 *     IopInitializeBootLogging @ 0x140944EF8 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x1409AC09C (TtmiCreateEventQueue.c)
 *     CmInitSystem1 @ 0x140B39964 (CmInitSystem1.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140B3CB80 (WmipGetSMBiosFromLoaderBlock.c)
 *     ExInitializeTimeRefresh @ 0x140B3CBEC (ExInitializeTimeRefresh.c)
 *     PiSwInit @ 0x140B3F42C (PiSwInit.c)
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x140B42D24 (PpInitializeBootDDB.c)
 *     PipDmgInitPhaseZero @ 0x140B43070 (PipDmgInitPhaseZero.c)
 *     PiDeviceDependencyInit @ 0x140B43154 (PiDeviceDependencyInit.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 *     SepInitializeWorkList @ 0x140B57DA8 (SepInitializeWorkList.c)
 *     MiInitializeLoadedModuleList @ 0x140B5FD1C (MiInitializeLoadedModuleList.c)
 *     ExpInitSystemPhase0 @ 0x140B61954 (ExpInitSystemPhase0.c)
 *     FsRtlInitSystem @ 0x140B693F0 (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x140B6DDC4 (SepRmDbInitialization.c)
 *     PopInitializeAdpm @ 0x140B7454C (PopInitializeAdpm.c)
 *     PpInitSystem @ 0x140B75180 (PpInitSystem.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140207740 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046ADD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlStdLogStackTrace @ 0x1405A9584 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1405A9610 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1405A9A04 (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x14060083C (PerfLogExecutiveResourceInitialize.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B12C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  ULONG_PTR v2; // rcx
  unsigned __int8 CurrentIrql; // di
  struct _LIST_ENTRY *v4; // rax
  __int64 v6; // rdi
  unsigned __int16 v7; // si
  __int64 v8; // rax
  __int64 v9; // rbp
  int RecordedStackTraceIndex; // eax
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rdx
  unsigned __int8 v13; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v19; // [rsp+40h] [rbp+8h] BYREF

  memset(Resource, 0, sizeof(struct _ERESOURCE));
  Resource->SystemResourcesList.Blink = &Resource->SystemResourcesList;
  Resource->SystemResourcesList.Flink = &Resource->SystemResourcesList;
  *(_OWORD *)&Resource->SharedWaiters = 0LL;
  Resource->SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v6 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      v8 = RtlStdLogStackTrace(RtlpStackTraceDatabase, 1LL);
      v9 = v8;
      if ( v8 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v6, v8);
        v7 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v6, v9);
      }
      else
      {
        v7 = 0;
      }
    }
    else
    {
      v7 = 0;
    }
    v2 = v7;
  }
  else
  {
    v2 = 0LL;
  }
  Resource->CreatorBackTraceIndex = v2;
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
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  }
  else
  {
    v19 = 0;
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
      v19 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock, CurrentIrql);
    while ( (ExpResourceSpinLock & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (ExpResourceSpinLock & 0x40000000) == 0 )
        _InterlockedOr(&ExpResourceSpinLock, 0x40000000u);
      KeYieldProcessorEx(&v19);
    }
  }
  v4 = (struct _LIST_ENTRY *)qword_140C2D668;
  if ( *(__int64 **)qword_140C2D668 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v4;
  v4->Flink = &Resource->SystemResourcesList;
  qword_140C2D668 = (__int64)Resource;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  if ( (_DWORD)KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v16 & v15[5]) == 0;
      v15[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  __incgsdword(0x8A58u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544LL, Resource, 0LL, 0LL);
  return 0;
}
