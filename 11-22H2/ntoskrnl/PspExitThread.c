/*
 * XREFs of PspExitThread @ 0x14076DF3C
 * Callers:
 *     NtTerminateProcess @ 0x1406837E0 (NtTerminateProcess.c)
 *     KiSchedulerApcTerminate @ 0x14076D4E0 (KiSchedulerApcTerminate.c)
 *     PspTerminateThreadByPointer @ 0x14076DE90 (PspTerminateThreadByPointer.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201DF4 (ExfAcquireReleasePushLockExclusive.c)
 *     KeForceResumeProcess @ 0x140204AE0 (KeForceResumeProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     PspRevertContainerImpersonation @ 0x140259D1C (PspRevertContainerImpersonation.c)
 *     PsGetProcessServerSilo @ 0x14028C060 (PsGetProcessServerSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140293330 (PdcCreateWatchdogAroundClientCall.c)
 *     ObFastDereferenceObject @ 0x140297B60 (ObFastDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KeQuerySystemTimePrecise @ 0x1402BE500 (KeQuerySystemTimePrecise.c)
 *     KeQuerySystemTimeUnsafe @ 0x1402BF7EC (KeQuerySystemTimeUnsafe.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C3620 (ObReferenceObjectSafeWithTag.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A210 (ExWaitForRundownProtectionRelease.c)
 *     ExTimerRundown @ 0x14030A23C (ExTimerRundown.c)
 *     KeTerminateThread @ 0x14030A438 (KeTerminateThread.c)
 *     KiRundownMutants @ 0x14030AF6C (KiRundownMutants.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CAD0 (PsAttachSiloToCurrentThread.c)
 *     PopPowerRequestHandleClose @ 0x14032B5A4 (PopPowerRequestHandleClose.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140349554 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ZwFreeVirtualMemory @ 0x14041AA60 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KeUnsecureThread @ 0x14056F39C (KeUnsecureThread.c)
 *     LpcExitProcess @ 0x140688B4C (LpcExitProcess.c)
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 *     PsInvokeWin32Callout @ 0x1406AF850 (PsInvokeWin32Callout.c)
 *     PspCallThreadNotifyRoutines @ 0x1406AFDA0 (PspCallThreadNotifyRoutines.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406BB250 (SeAuditingWithTokenForSubcategory.c)
 *     PspExitProcess @ 0x140751944 (PspExitProcess.c)
 *     ObCloseHandle @ 0x14076BDA0 (ObCloseHandle.c)
 *     PspTlsDataCleanup @ 0x14076E700 (PspTlsDataCleanup.c)
 *     PspEmptyPropertySet @ 0x14076E7C4 (PspEmptyPropertySet.c)
 *     PspClearProcessThreadCidRefs @ 0x14076E7E8 (PspClearProcessThreadCidRefs.c)
 *     PsCaptureExceptionPort @ 0x14076E8B0 (PsCaptureExceptionPort.c)
 *     KeRundownApcQueues @ 0x14076E950 (KeRundownApcQueues.c)
 *     IoCancelThreadIo @ 0x14076E9F4 (IoCancelThreadIo.c)
 *     CmNotifyRunDown @ 0x14076EAF4 (CmNotifyRunDown.c)
 *     LpcRequestPort @ 0x14076F070 (LpcRequestPort.c)
 *     MmDeleteTeb @ 0x14076F0DC (MmDeleteTeb.c)
 *     ExWnfExitProcess @ 0x1407CCB58 (ExWnfExitProcess.c)
 *     DbgkExitProcess @ 0x1409392EC (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x1409393A8 (DbgkExitThread.c)
 *     PspCatchCriticalBreak @ 0x1409B3AD0 (PspCatchCriticalBreak.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1409B3C20 (PspFreeCurrentThreadUserShadowStack.c)
 *     SeAuditProcessExit @ 0x1409CAFC4 (SeAuditProcessExit.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

struct _KPRCB *__fastcall PspExitThread(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // r14
  ULONG_PTR v4; // r8
  struct _LIST_ENTRY *Blink; // rbx
  volatile signed __int64 *v6; // rbx
  unsigned int v7; // ebx
  void *InitialStack; // r12
  _DWORD *v9; // r13
  void *v10; // rbx
  int v11; // eax
  char v12; // r12
  PVOID *Teb; // rbx
  PVOID v14; // rcx
  __int16 v15; // ax
  char v16; // al
  bool v17; // zf
  LIST_ENTRY *p_WaitListHead; // rbx
  struct _KTHREAD *Thread; // rcx
  _QWORD *v21; // r12
  _QWORD *v22; // rax
  _QWORD *v23; // r15
  ULONG_PTR v24; // rbx
  void *v25; // rcx
  int v26; // eax
  void *v27; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  struct _LIST_ENTRY *v31; // rbx
  signed __int32 v32[8]; // [rsp+0h] [rbp-F8h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-D8h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-C8h] BYREF
  ULONG_PTR v35; // [rsp+38h] [rbp-C0h] BYREF
  _OWORD v36[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+60h] [rbp-98h]
  PVOID BaseAddress; // [rsp+70h] [rbp-88h] BYREF
  PVOID v39; // [rsp+78h] [rbp-80h] BYREF
  _KPROCESS *Process; // [rsp+80h] [rbp-78h]
  struct _KTHREAD *v41; // [rsp+88h] [rbp-70h]
  char *v42; // [rsp+90h] [rbp-68h]
  __int128 v43; // [rsp+98h] [rbp-60h] BYREF
  __int128 v44; // [rsp+A8h] [rbp-50h] BYREF
  char v46; // [rsp+108h] [rbp+10h]
  PMDL MemoryDescriptorList; // [rsp+110h] [rbp+18h] BYREF
  PVOID Object; // [rsp+118h] [rbp+20h]

  memset(v36, 0, sizeof(v36));
  v37 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v41 = CurrentThread;
  Process = CurrentThread->Process;
  v3 = (__int64)Process;
  PspClearProcessThreadCidRefs(CurrentThread, *(_QWORD *)&CurrentThread[1].CurrentRunTime, CurrentThread);
  v4 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( Process != (_KPROCESS *)v4 )
    KeBugCheckEx(5u, (ULONG_PTR)Process, v4, CurrentThread->ApcStateIndex, (ULONG_PTR)CurrentThread);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(0LL);
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) != 0 )
    KeBugCheckEx(0xE9u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x20u, 0LL, CurrentThread->CombinedApcDisable, 0LL, 1uLL);
  if ( CurrentThread[1].ApcState.ApcListHead[1].Flink )
  {
    KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL);
    ObfDereferenceObjectWithTag(CurrentThread[1].ApcState.ApcListHead[1].Flink, 0x79517350u);
    CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
  }
  PspEmptyPropertySet(&CurrentThread[1].WaitBlockFill11[88]);
  PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CurrentThread[1].WaitStatus);
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  if ( Blink )
  {
    PopPowerRequestHandleClose(CurrentThread[1].ApcState.ApcListHead[1].Blink);
    ObfDereferenceObject(Blink);
    CurrentThread[1].ApcState.ApcListHead[1].Blink = 0LL;
  }
  v46 = 0;
  Object = 0LL;
  CurrentThread[1].Timer.DueTime.LowPart = a1;
  if ( (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread((__int64)CurrentThread, 0LL, 0);
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(v3 + 2172) & 1) == 0 || *(_QWORD *)(v3 + 2240) )
    PspCallThreadNotifyRoutines(CurrentThread, 0, 0);
  v6 = (volatile signed __int64 *)(v3 + 1080);
  ExAcquirePushLockExclusiveEx(v3 + 1080, 0LL);
  if ( --*(_DWORD *)(v3 + 1520) )
  {
    if ( a1 != -1073741749 )
      *(_DWORD *)(v3 + 1532) = a1;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 1124), 0x2000008u);
    KeForceResumeProcess(v3);
    v46 = 1;
    if ( *(_DWORD *)(v3 + 2004) == 259 )
    {
      if ( a1 == -1073741749 )
        *(_DWORD *)(v3 + 2004) = *(_DWORD *)(v3 + 1532);
      else
        *(_DWORD *)(v3 + 2004) = a1;
    }
    v21 = *(_QWORD **)(v3 + 1504);
    if ( v21 != (_QWORD *)(v3 + 1504) )
    {
      v22 = (_QWORD *)(v3 + 1504);
      v23 = 0LL;
      do
      {
        if ( v21 - 167 != (_QWORD *)CurrentThread )
        {
          if ( !*((_BYTE *)v21 - 1332) && ObReferenceObjectSafeWithTag((__int64)(v21 - 167)) )
          {
            if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 1080));
            KeAbPostRelease(v3 + 1080);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            KeWaitForSingleObject(v21 - 167, Executive, 0, 0, 0LL);
            if ( v23 )
              ObfDereferenceObjectWithTag(v23, 0x65547350u);
            v23 = v21 - 167;
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v3 + 1080, 0LL);
          }
          v22 = (_QWORD *)(v3 + 1504);
        }
        v21 = (_QWORD *)*v21;
      }
      while ( v21 != v22 );
      Object = v23;
    }
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 1080));
  KeAbPostRelease(v3 + 1080);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
  if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
  {
    v31 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
    if ( v31 == (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v31[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v31 - 48) >> 8)] != PsJobType
      || (HIDWORD(v31[96].Flink) & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)CurrentThread, (ULONG_PTR)v31, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v31, 0x6D497350u);
  }
  if ( *(_QWORD *)(v3 + 1400) && (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    if ( !v46 )
    {
      v7 = a1;
      DbgkExitThread(a1);
      goto LABEL_23;
    }
    DbgkExitProcess(*(unsigned int *)(v3 + 2004));
  }
  v7 = a1;
LABEL_23:
  if ( (*(_BYTE *)(v3 + 992) & 1) != 0 )
  {
    MemoryDescriptorList = 0LL;
    if ( (int)KeUnsecureThread((__int64)&MemoryDescriptorList) >= 0 )
    {
      MmUnlockPages(MemoryDescriptorList);
      ExFreePoolWithTag(MemoryDescriptorList, 0x65537350u);
    }
  }
  if ( (_BYTE)KdDebuggerEnabled
    && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x20) != 0
    && (CurrentThread->Process[1].DirectoryTableBase & 0x4000000800000000LL) == 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v7;
    PspCatchCriticalBreak("Critical thread 0x%p (in %s) exited\n", CurrentThread, (const char *)(v3 + 1448));
  }
  if ( v46 && (*(_DWORD *)(v3 + 1124) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v7;
    PspCatchCriticalBreak("Critical process 0x%p (%s) exited\n", (const void *)v3, (const char *)(v3 + 1448));
  }
  InitialStack = CurrentThread[1].InitialStack;
  if ( InitialStack )
  {
    *(_QWORD *)&v36[0] = 0x600300008LL;
    *((_QWORD *)&v37 + 1) = *(_QWORD *)&CurrentThread[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v26 = LpcRequestPort(*((_QWORD *)InitialStack + 1), v36);
        if ( v26 != -1073741801 && v26 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(*((PVOID *)InitialStack + 1));
      v27 = *(void **)InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v27;
    }
    while ( v27 );
  }
  v9 = &CurrentThread[1].SwapListEntry + 1;
  v42 = (char *)(&CurrentThread[1].SwapListEntry + 1);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
  {
    v10 = (void *)PsCaptureExceptionPort(v3);
    if ( v10 )
    {
      *(_QWORD *)&v36[0] = 0x600300008LL;
      *((_QWORD *)&v37 + 1) = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v11 = LpcRequestPort(v10, v36);
        if ( v11 != -1073741801 && v11 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(v10);
    }
  }
  if ( CurrentThread->WaitBlock[2].SparePtr )
  {
    *(_QWORD *)&v43 = CurrentThread;
    DWORD2(v43) = 1;
    PsInvokeWin32Callout(1, (__int64)&v43, 0, 0LL);
  }
  v12 = v46;
  if ( v46 && *(_QWORD *)(v3 + 1288) )
  {
    *(_QWORD *)&v44 = v3;
    DWORD2(v44) = 0;
    PsInvokeWin32Callout(0, (__int64)&v44, 0, 0LL);
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  PspTlsDataCleanup(CurrentThread, 0LL);
  IoCancelThreadIo();
  ExTimerRundown();
  CmNotifyRunDown(CurrentThread);
  KiRundownMutants((ULONG_PTR)KeGetCurrentThread());
  Teb = (PVOID *)CurrentThread->Teb;
  Object = Teb;
  if ( Teb )
  {
    CurrentThread->Teb = 0LL;
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v32, 0);
    if ( ((__int64)CurrentThread[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((ULONG_PTR)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    MemoryDescriptorList = (PMDL)&CurrentThread->116;
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 1124) & 0x40000008) == 0 )
    {
      if ( (*v9 & 2) != 0 )
      {
        BaseAddress = Teb[655];
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        if ( *(_QWORD *)(v3 + 1408) )
        {
          v15 = *(_WORD *)(v3 + 2412);
          if ( v15 == 332 || (v17 = v15 == 452, v16 = 0, v17) )
            v16 = 1;
          if ( v16 )
          {
            v39 = (PVOID)*((unsigned int *)Teb + 2947);
            v35 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v39, &v35, 0x8000u);
          }
        }
      }
      v14 = Teb[725];
      if ( v14 )
        ObCloseHandle(v14, 1);
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 && (*v9 & 2) != 0 )
        PspFreeCurrentThreadUserShadowStack();
      MmDeleteTeb(v3, Teb);
    }
    v12 = v46;
  }
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise(&CurrentThread[1].Header.WaitListHead.Flink);
  else
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v12 )
  {
    *(_QWORD *)(v3 + 2112) = p_WaitListHead->Flink;
    PspExitProcess(1, v3);
    v24 = PsReferencePrimaryTokenWithTag(v3, 0x65547350u);
    if ( SeAuditingWithTokenForSubcategory(135, v24) )
      SeAuditProcessExit(v3, *(unsigned int *)(v3 + 2004));
    ObFastDereferenceObject((signed __int64 *)(v3 + 1208), v24, 0x65547350u);
    ExWnfExitProcess(v3, 0LL);
    PspRundownSingleProcess(v3, 1);
    LpcExitProcess((struct _KPROCESS *)v3);
    v25 = *(void **)(v3 + 2120);
    if ( v25 )
    {
      ExFreePoolWithTag(v25, 0);
      *(_QWORD *)(v3 + 2120) = 0LL;
    }
  }
  KeRundownApcQueues(CurrentThread);
  if ( CurrentThread->SchedulerApc.SystemArgument2 && PspLegoNotifyRoutine )
    PspLegoNotifyRoutine(CurrentThread);
  PspTlsDataCleanup(CurrentThread, 1LL);
  Thread = CurrentThread[1].WaitBlock[3].Thread;
  if ( Thread )
  {
    ExFreePoolWithTag(Thread, 0x63537350u);
    CurrentThread[1].WaitBlock[3].Thread = 0LL;
  }
  return KeTerminateThread((ULONG_PTR)CurrentThread);
}
