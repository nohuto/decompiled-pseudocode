/*
 * XREFs of PiPnpRtlBeginOperation @ 0x140788EE0
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x140788864 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407889E0 (PiPnpRtlObjectEventWorker.c)
 *     PiProcessQueryDeviceState @ 0x14079379C (PiProcessQueryDeviceState.c)
 *     PnpProcessTargetDeviceEvent @ 0x1407948AC (PnpProcessTargetDeviceEvent.c)
 *     PipEnumerateCompleted @ 0x140795910 (PipEnumerateCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14079BAD0 (PiDcUpdateDeviceContainerMembership.c)
 *     PipProcessStartPhase3 @ 0x14079BED4 (PipProcessStartPhase3.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14079C720 (PnpNewDeviceNodeDependencyCheck.c)
 *     PiSwPropertySet @ 0x14079CF70 (PiSwPropertySet.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1407DB41C (PiDcHandleCustomDeviceEvent.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1407FA218 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqIrpPropertySet @ 0x140800484 (PiDqIrpPropertySet.c)
 *     PpDevCfgProcessDevices @ 0x140813294 (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140836DC0 (IoReportRootDevice.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083BF38 (PiDqActionDataGetChangedProperties.c)
 *     PiProcessAddBootDevices @ 0x140855240 (PiProcessAddBootDevices.c)
 *     IopRegisterDeviceInterface @ 0x140866CCC (IopRegisterDeviceInterface.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140868334 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipClearDevNodeProblem @ 0x14086966C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1408697BC (PipSetDevNodeProblem.c)
 *     IopRemoveDevice @ 0x140869E38 (IopRemoveDevice.c)
 *     PipMergeDependencyEdgeList @ 0x1409547C8 (PipMergeDependencyEdgeList.c)
 *     PiProcessClearDeviceProblem @ 0x140959420 (PiProcessClearDeviceProblem.c)
 *     PiProcessSetDeviceProblem @ 0x1409596E8 (PiProcessSetDeviceProblem.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14095A234 (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x1409684E0 (PiCMCreateDevice.c)
 *     PiCMDeleteClassKey @ 0x140968DDC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140968EF8 (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x14096958C (PiCMDeleteObject.c)
 *     PiInitializeDevice @ 0x14096DB94 (PiInitializeDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x14031E790 (RtlInitializeGenericTableAvl.c)
 *     PiPnpRtlGetCurrentOperation @ 0x140789970 (PiPnpRtlGetCurrentOperation.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
