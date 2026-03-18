/*
 * XREFs of PiPnpRtlBeginOperation @ 0x1407889D0
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x140788354 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407884D0 (PiPnpRtlObjectEventWorker.c)
 *     PiProcessQueryDeviceState @ 0x14079328C (PiProcessQueryDeviceState.c)
 *     PnpProcessTargetDeviceEvent @ 0x14079439C (PnpProcessTargetDeviceEvent.c)
 *     PipEnumerateCompleted @ 0x140795400 (PipEnumerateCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140795748 (PiProcessNewDeviceNode.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14079B5C0 (PiDcUpdateDeviceContainerMembership.c)
 *     PipProcessStartPhase3 @ 0x14079B9C4 (PipProcessStartPhase3.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14079C210 (PnpNewDeviceNodeDependencyCheck.c)
 *     PiSwPropertySet @ 0x14079CA60 (PiSwPropertySet.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1407DAE9C (PiDcHandleCustomDeviceEvent.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1407F9B68 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqIrpPropertySet @ 0x1407FFDD4 (PiDqIrpPropertySet.c)
 *     PpDevCfgProcessDevices @ 0x140810D14 (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140835270 (IoReportRootDevice.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083A1A8 (PiDqActionDataGetChangedProperties.c)
 *     PiProcessAddBootDevices @ 0x140854330 (PiProcessAddBootDevices.c)
 *     IopRegisterDeviceInterface @ 0x1408667FC (IopRegisterDeviceInterface.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140867E64 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipClearDevNodeProblem @ 0x14086919C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1408692EC (PipSetDevNodeProblem.c)
 *     IopRemoveDevice @ 0x140869968 (IopRemoveDevice.c)
 *     PipMergeDependencyEdgeList @ 0x140954718 (PipMergeDependencyEdgeList.c)
 *     PiProcessClearDeviceProblem @ 0x140959370 (PiProcessClearDeviceProblem.c)
 *     PiProcessSetDeviceProblem @ 0x140959638 (PiProcessSetDeviceProblem.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14095A184 (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x140968430 (PiCMCreateDevice.c)
 *     PiCMDeleteClassKey @ 0x140968D2C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140968E48 (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x1409694DC (PiCMDeleteObject.c)
 *     PiInitializeDevice @ 0x14096DAE4 (PiInitializeDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x14031E970 (RtlInitializeGenericTableAvl.c)
 *     PiPnpRtlGetCurrentOperation @ 0x140789460 (PiPnpRtlGetCurrentOperation.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlBeginOperation(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  int CurrentOperation; // eax
  unsigned int v4; // edi
  __int64 *v5; // rbx
  __int64 Pool2; // rax
  __int64 v7; // rbx
  struct _KTHREAD *v8; // rax
  __int64 v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a1 = 0LL;
  v11 = 0LL;
  CurrentOperation = PiPnpRtlGetCurrentOperation(&v11);
  v4 = CurrentOperation;
  if ( CurrentOperation == -1073741275 )
  {
    v4 = 0;
  }
  else if ( CurrentOperation < 0 )
  {
    return v4;
  }
  v5 = (__int64 *)v11;
  if ( v11 )
  {
    ++*(_DWORD *)(v11 + 144);
  }
  else
  {
    Pool2 = ExAllocatePool2(256LL, 152LL, 1097887312LL);
    v11 = Pool2;
    v7 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(Pool2 + 144) = 1;
    *(_QWORD *)(Pool2 + 16) = CurrentThread;
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(Pool2 + 24),
      PiPnpRtlObjectEventCompareObjects,
      PiPnpRtlOperationAllocateGenericTableEntry,
      PiPnpRtlOperationFreeGenericTableEntry,
      0LL);
    *(_QWORD *)(v7 + 136) = v7 + 128;
    *(_QWORD *)(v7 + 128) = v7 + 128;
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiPnpRtlActiveOperationsLock, 1u);
    v9 = PiPnpRtlActiveOperations;
    if ( *(__int64 **)(PiPnpRtlActiveOperations + 8) != &PiPnpRtlActiveOperations )
      __fastfail(3u);
    v5 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = &PiPnpRtlActiveOperations;
    *v5 = v9;
    *(_QWORD *)(v9 + 8) = v5;
    PiPnpRtlActiveOperations = (__int64)v5;
    ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
    KeLeaveCriticalRegion();
  }
  *a1 = v5;
  return v4;
}
