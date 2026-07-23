/*
 * XREFs of PiPnpRtlBeginOperation @ 0x140788BC0
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x140788544 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407886C0 (PiPnpRtlObjectEventWorker.c)
 *     PiProcessQueryDeviceState @ 0x14079347C (PiProcessQueryDeviceState.c)
 *     PnpProcessTargetDeviceEvent @ 0x14079458C (PnpProcessTargetDeviceEvent.c)
 *     PipEnumerateCompleted @ 0x1407955F0 (PipEnumerateCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14079B7B0 (PiDcUpdateDeviceContainerMembership.c)
 *     PipProcessStartPhase3 @ 0x14079BBB4 (PipProcessStartPhase3.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14079C400 (PnpNewDeviceNodeDependencyCheck.c)
 *     PiSwPropertySet @ 0x14079CC50 (PiSwPropertySet.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1407DB16C (PiDcHandleCustomDeviceEvent.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1407F9E38 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqIrpPropertySet @ 0x1408000A4 (PiDqIrpPropertySet.c)
 *     PpDevCfgProcessDevices @ 0x140810FE4 (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140835570 (IoReportRootDevice.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083A4A8 (PiDqActionDataGetChangedProperties.c)
 *     PiProcessAddBootDevices @ 0x140854630 (PiProcessAddBootDevices.c)
 *     IopRegisterDeviceInterface @ 0x140866A3C (IopRegisterDeviceInterface.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1408680A4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipClearDevNodeProblem @ 0x1408693DC (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x14086952C (PipSetDevNodeProblem.c)
 *     IopRemoveDevice @ 0x140869BA8 (IopRemoveDevice.c)
 *     PipMergeDependencyEdgeList @ 0x140954918 (PipMergeDependencyEdgeList.c)
 *     PiProcessClearDeviceProblem @ 0x140959570 (PiProcessClearDeviceProblem.c)
 *     PiProcessSetDeviceProblem @ 0x140959838 (PiProcessSetDeviceProblem.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14095A384 (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x140968630 (PiCMCreateDevice.c)
 *     PiCMDeleteClassKey @ 0x140968F2C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140969048 (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x1409696DC (PiCMDeleteObject.c)
 *     PiInitializeDevice @ 0x14096DCE4 (PiInitializeDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x14031EC00 (RtlInitializeGenericTableAvl.c)
 *     PiPnpRtlGetCurrentOperation @ 0x140789650 (PiPnpRtlGetCurrentOperation.c)
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
