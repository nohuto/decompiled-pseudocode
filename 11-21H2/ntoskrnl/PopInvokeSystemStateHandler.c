/*
 * XREFs of PopInvokeSystemStateHandler @ 0x140A4AF0C
 * Callers:
 *     PopTransitionToSleep @ 0x140A48630 (PopTransitionToSleep.c)
 *     PopEndMirroring @ 0x140A4E4B0 (PopEndMirroring.c)
 *     PopShutdownSystem @ 0x140A6BE04 (PopShutdownSystem.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     VfIsVerifierEnabled @ 0x1402DA4B0 (VfIsVerifierEnabled.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     KeRebaselineInterruptTime @ 0x14038B8A0 (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x140399340 (KeRebaselineSystemTime.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x140429800 (DbgBreakPointWithStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     PopIssueNextState @ 0x140A4B4D4 (PopIssueNextState.c)
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
 *     MiConvertHiberPhasePages @ 0x140A4FE40 (MiConvertHiberPhasePages.c)
 *     MiUpdateUserMappings @ 0x140A4FEE8 (MiUpdateUserMappings.c)
 *     MmInvalidateDumpAddresses @ 0x140A51570 (MmInvalidateDumpAddresses.c)
 *     VfNotifyOfHibernate @ 0x140A8682C (VfNotifyOfHibernate.c)
 *     BgLibraryInitialize @ 0x140AADB90 (BgLibraryInitialize.c)
 */

__int64 __fastcall PopInvokeSystemStateHandler(int a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int8 CurrentIrql; // r13
  signed int v5; // r12d
  __int64 *v6; // rsi
  __int64 v7; // rbx
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // bl
  char v12; // bl
  __int64 v13; // rcx
  char v14; // al
  __int64 v16; // rcx
  _DWORD *SchedulerAssist; // r9
  unsigned int v18; // ebx
  int v19; // edi
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v23; // r8
  int v24; // eax
  LARGE_INTEGER v25; // [rsp+30h] [rbp-D0h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER v27; // [rsp+48h] [rbp-B8h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD DeferredContext[10]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v30; // [rsp+E0h] [rbp-20h] BYREF
  int v31; // [rsp+E8h] [rbp-18h]
  int v32; // [rsp+ECh] [rbp-14h]
  _QWORD v33[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v34[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _SLIST_ENTRY v35[10]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v36; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v37; // [rsp+1C0h] [rbp+C0h]

  v2 = a1;
  v25.QuadPart = 0LL;
  CurrentIrql = 0;
  Affinity = 0LL;
  v5 = -1073741823;
  memset(&Dpc, 0, 60);
  memset(DeferredContext, 0, sizeof(DeferredContext));
  LODWORD(DeferredContext[5]) = v2;
  v37 = 0LL;
  DeferredContext[0] = &v36;
  DeferredContext[4] = &PopPowerStateNotifyHandler;
  v36 = 0LL;
  if ( (_DWORD)v2 != 7 )
  {
    DeferredContext[0] = (char *)&PopPowerStateHandlers + 24 * v2;
    if ( !*(_QWORD *)(DeferredContext[0] + 8LL) )
      return 3221225664LL;
  }
  LODWORD(DeferredContext[6]) = KeNumberProcessors_0;
  HIDWORD(DeferredContext[7]) = KeNumberProcessors_0;
  LODWORD(DeferredContext[7]) = 1;
  if ( (unsigned int)(v2 - 4) > 1 )
  {
    if ( PopCheckpointSystemSleepEnabled )
    {
      v16 = *(unsigned int *)(DeferredContext[0] + 16LL);
      LODWORD(v16) = v16 | 0x40000;
      *(_QWORD *)(DeferredContext[0] + 16LL) = v16;
    }
    if ( ((_DWORD)v2 == 3 || (_DWORD)v2 == 6) && a2 )
    {
      DeferredContext[3] = a2;
      DeferredContext[1] = PopSaveHiberContextWrapper;
      DeferredContext[2] = a2;
    }
  }
  memset(v35, 0, sizeof(v35));
  if ( a2 )
  {
    PopHibernateSystemContext = DeferredContext[0];
    v6 = &PopHibernateSystemContext;
    qword_140C54808 = DeferredContext[1];
    qword_140C54810 = DeferredContext[2];
    qword_140C54818 = DeferredContext[3];
    qword_140C54820 = DeferredContext[4];
    dword_140C54828 = DeferredContext[5];
    byte_140C5482C = BYTE4(DeferredContext[5]);
    dword_140C54830 = DeferredContext[6];
    qword_140C54838 = DeferredContext[7];
    RtlpInterlockedPushEntrySList(&stru_140C54840, &v35[9]);
  }
  else
  {
    Affinity.Reserved[1] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(KiProcessorIndexToNumberMappingTable[0] >> 6);
    Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    Affinity.Reserved[2] = 0;
    KeSetSystemGroupAffinityThread(&Affinity, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    KeInitializeDpc(&Dpc, PopInvokeStateHandlerTargetProcessor, DeferredContext);
    v18 = 0;
    for ( Dpc.Importance = 2; v18 < (unsigned int)KeNumberProcessors_0; ++v18 )
    {
      if ( v18 != KeGetCurrentPrcb()->Number )
      {
        v19 = HIDWORD(DeferredContext[6]);
        if ( !Dpc.DpcData )
          Dpc.Number = v18 + 2048;
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        while ( v19 == HIDWORD(DeferredContext[6]) )
          _mm_pause();
      }
    }
    v6 = DeferredContext;
  }
  PopIssueNextState(v6, v35, 2LL);
  PopIssueNextState(v6, v35, 3LL);
  if ( dword_140C227E0 == 4 )
  {
    PerformanceCounter.QuadPart = 0LL;
    v7 = 1000000LL * KeGetCurrentPrcb()->MHz;
  }
  else
  {
    v7 = PopQpcFrequency;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    v32 = 0;
    v30 = v34;
    v34[0] = PerformanceCounter.QuadPart;
    v34[1] = v7;
    v31 = 16;
    EtwTraceKernelEvent((__int64)&v30, 1u, 0x80008000, 0x1230u, 0x401802u);
  }
  PopIssueNextState(v6, v35, 4LL);
  if ( a2 )
  {
    RtlpDebugPrintCallbacksActive = 0;
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      LOBYTE(v9) = 1;
      VfNotifyOfHibernate(v9);
    }
  }
  PoAllProcIntrDisabled = 1;
  PopCheckpointSystemSleep(17LL);
  if ( *((int *)&v35[7].Next + 2) >= 0 )
  {
    *((_BYTE *)v6 + 44) = 1;
    PopIssueNextState(v6, v35, 12LL);
    if ( (_DWORD)v2 != 3 && (_DWORD)v2 != 6 )
      off_140C01F18[0]();
    if ( a2 )
    {
      PopIssueNextState(v6, v35, 5LL);
      if ( !_bittest(&PopSimulateHiberBugcheck, 8u) )
        MiUpdateUserMappings();
      PopIssueNextState(v6, v35, 10LL);
    }
    PopCheckpointSystemSleep(18LL);
    PopIssueNextState(v6, v35, 6LL);
    PopCheckpointSystemSleep(26LL);
    v5 = *((_DWORD *)&v35[7].Next + 2);
    KeRebaselineInterruptTime();
    off_140C01F08[0]();
    if ( a2 && v5 == 1073742484 )
      PopIssueNextState(v6, v35, 7LL);
    PopIssueNextState(v6, v35, 8LL);
    if ( a2 )
    {
      if ( v5 == 1073742484 )
      {
        PopCheckpointSystemSleep(27LL);
        PopIssueNextState(v6, v35, 9LL);
        PopCheckpointSystemSleep(32LL);
      }
      MmInvalidateDumpAddresses(qword_140C22BE8, 19LL);
      v10 = *(_QWORD *)(a2 + 304);
      if ( v10 )
        MmInvalidateDumpAddresses(v10, (unsigned int)(16 * *(_DWORD *)(a2 + 256)));
      PopIssueNextState(v6, v35, 10LL);
      if ( !_bittest(&PopSimulateHiberBugcheck, 8u) )
      {
        MiUpdateUserMappings();
        MiConvertHiberPhasePages(0LL);
      }
      *(_BYTE *)(a2 + 3) = 0;
      PopIssueNextState(v6, v35, 11LL);
    }
    v11 = PopDebugFlags;
    if ( (PopDebugFlags & 1) != 0 && (_BYTE)KdDebuggerEnabled )
      DbgBreakPointWithStatus(v5);
    if ( (v11 & 2) != 0 )
      KeBugCheckEx(0xA0u, 0xAuLL, 0LL, 0LL, 0LL);
    PopNoMoreInput = 0;
    if ( v5 >= 0 )
    {
      ++PoPowerSequence;
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      dword_140C226E8 = 1;
      if ( PoResumeFromHibernate )
      {
        _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
        _InterlockedOr(&PopPendingUserPresenceMonitorOnReason, 0x19u);
      }
    }
    *((_BYTE *)v6 + 44) = 0;
    PopIssueNextState(v6, v35, 12LL);
  }
  if ( a2 )
  {
    if ( v5 == -1073741632 )
    {
      if ( (PopSimulate & 0x1000) == 0 )
      {
        while ( 1 )
          ;
      }
      *(_BYTE *)a2 = 1;
    }
    else
    {
      PoHiberInProgress = 0;
      *(_DWORD *)(a2 + 188) = v5;
      if ( !*(_BYTE *)a2 )
      {
        if ( (unsigned int)VfIsVerifierEnabled() )
          VfNotifyOfHibernate(0LL);
        if ( RtlpDebugPrintCallbackList == (_UNKNOWN *)&RtlpDebugPrintCallbackList )
          RtlpDebugPrintCallbacksActive = 1;
        *(_DWORD *)(a2 + 188) = 1073742484;
        goto LABEL_49;
      }
    }
    v20 = qword_140C233C0 == 0;
    *v6 = (__int64)&unk_140C233B8;
    v6[3] = 0LL;
    if ( !v20 )
      PopIssueNextState(v6, v35, 6LL);
    HalReturnToFirmware(3);
  }
LABEL_49:
  KeRebaselineInterruptTime();
  KeRebaselineSystemTime();
  PopCheckpointSystemSleep(33LL);
  PoAllProcIntrDisabled = 0;
  PopIssueNextState(v6, v35, 13LL);
  if ( v5 >= 0 )
  {
    if ( dword_140C227E0 != 4 || PoResumeFromHibernate )
    {
      v12 = 0;
      v25 = KeQueryPerformanceCounter(0LL);
      qword_140C22E08 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C1D010;
    }
    else
    {
      v12 = 1;
      if ( !((unsigned __int8 (__fastcall *)(LARGE_INTEGER *, _QWORD))off_140C01CF0[0])(&v25, 0LL) )
        v25.QuadPart = 0LL;
    }
    if ( (xmmword_140D06910 & 0x8000) != 0 )
    {
      v27 = v25;
      v33[1] = 8LL;
      v33[0] = &v27;
      EtwTraceKernelEvent((__int64)v33, 1u, 0x80008000, 0x1231u, 0x401802u);
    }
    if ( v12 )
    {
      v25.QuadPart = v25.QuadPart / (1000 * (unsigned __int64)KeGetCurrentPrcb()->MHz) * (PopQpcFrequency / 0x3E8uLL);
      qword_140C22CE8 = v25.QuadPart - PerformanceCounter.QuadPart;
    }
  }
  PopIssueNextState(v6, v35, 14LL);
  PopIssueNextState(v6, v35, 15LL);
  PopIssueNextState(v6, v35, 16LL);
  if ( *((int *)&v35[7].Next + 2) >= 0 )
  {
    v13 = *v6;
    *((_DWORD *)&v35[7].Next + 2) = 0;
    v14 = *(_BYTE *)(v13 + 5);
    if ( v14 != -1 )
      *(_BYTE *)(v13 + 5) = v14 + 1;
  }
  if ( a2 )
  {
    if ( v5 == 1073742484 && !byte_140C22C01 )
    {
      if ( byte_140C547E0 )
        BgLibraryInitialize(qword_140C547D8, 0LL);
    }
  }
  else
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return *((unsigned int *)&v35[7].Next + 2);
}
