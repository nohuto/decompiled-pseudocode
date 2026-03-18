/*
 * XREFs of CmCompleteRegistryInitialization @ 0x14082830C
 * Callers:
 *     NtInitializeRegistry @ 0x1406EA120 (NtInitializeRegistry.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlLockBootStatusData @ 0x1406D6540 (RtlLockBootStatusData.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x14081CFDC (PopCancelIgnoreBatteryStatusChange.c)
 *     PnpBootPhaseComplete @ 0x140827E8C (PnpBootPhaseComplete.c)
 *     IopCopyBootLogRegistryToFile @ 0x14082848C (IopCopyBootLogRegistryToFile.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x140828528 (ExNotifyPlatformBinaryExecuted.c)
 *     PoClearTransitionMarker @ 0x1408285B0 (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x1408288D4 (PoInitHiberServices.c)
 *     EtwInitialize @ 0x14082AB94 (EtwInitialize.c)
 *     CmpCmdInit @ 0x140832270 (CmpCmdInit.c)
 *     CmpInitializeSystemHivesLoad @ 0x1408337BC (CmpInitializeSystemHivesLoad.c)
 *     CmpCreateRegistryThread @ 0x1408339FC (CmpCreateRegistryThread.c)
 *     PsBootPhaseComplete @ 0x1408351BC (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x1408357A0 (ExpRefreshSystemTime.c)
 *     KeInitializeVelocity @ 0x1408618D8 (KeInitializeVelocity.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmCompleteRegistryInitialization(__int16 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // di
  __int64 v9; // rdx
  int v10; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( _InterlockedExchange(&CmFirstTime, 0) )
  {
    EtwInitialize(3LL, 0LL);
    CmCompleteInitMachineConfig(&IopAutoReboot);
    CmpInitializeSystemHivesLoad();
    CmpLockRegistryExclusive();
    LOBYTE(v3) = a1 == 1;
    CmpCmdInit(v3);
    CmpUnlockRegistry(v5, v4, v6, v7);
    if ( a1 != 1 )
    {
      CmpLoadingSystemHivesActive = 1;
      if ( CmpInitRmLogOnLoad || (v8 = 0, CmpForceSynchronousMachineHiveLoad) )
        v8 = 1;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v10 = CmpCreateRegistryThread(
              &Handle,
              v9,
              CmpFinishSystemHivesLoad,
              (unsigned __int64)&Event & -(__int64)(v8 != 0));
      if ( v10 < 0 )
        KeBugCheckEx(0x74u, 2uLL, 3uLL, 3uLL, v10);
      if ( v8 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ZwClose(Handle);
      Handle = 0LL;
    }
    if ( !CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
    }
    KeInitializeVelocity();
    RtlLockBootStatusData(0LL);
    PnpBootPhaseComplete();
    PoInitHiberServices();
    PoClearTransitionMarker();
    PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
    byte_140C22214 = 1;
    PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
    PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
    PopCancelIgnoreBatteryStatusChange();
    *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 132) + 8LL) = 1LL;
    ExNotifyPlatformBinaryExecuted();
    if ( a1 != 1 )
      IopCopyBootLogRegistryToFile();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
