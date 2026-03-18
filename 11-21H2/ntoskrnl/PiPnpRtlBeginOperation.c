/*
 * XREFs of PiPnpRtlBeginOperation @ 0x140779DC4
 * Callers:
 *     PiProcessClearDeviceProblem @ 0x140660388 (PiProcessClearDeviceProblem.c)
 *     PiDqActionDataGetChangedProperties @ 0x140699E6C (PiDqActionDataGetChangedProperties.c)
 *     PiProcessQueryDeviceState @ 0x140749F30 (PiProcessQueryDeviceState.c)
 *     PipClearDevNodeProblem @ 0x140764FE4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140765114 (PipSetDevNodeProblem.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140766258 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopRemoveDevice @ 0x140766C3C (IopRemoveDevice.c)
 *     IopRegisterDeviceInterface @ 0x140769C24 (IopRegisterDeviceInterface.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14076BB10 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipProcessStartPhase3 @ 0x14076BE08 (PipProcessStartPhase3.c)
 *     PnpProcessTargetDeviceEvent @ 0x14076C3C0 (PnpProcessTargetDeviceEvent.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14076C764 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDqIrpPropertySet @ 0x14076DD0C (PiDqIrpPropertySet.c)
 *     PiSwPropertySet @ 0x14076E714 (PiSwPropertySet.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x14076F8AC (PipEnumerateCompleted.c)
 *     PiDqActionDataGetRequestedProperties @ 0x140776EE8 (PiDqActionDataGetRequestedProperties.c)
 *     PiPnpRtlObjectEventWorker @ 0x140778830 (PiPnpRtlObjectEventWorker.c)
 *     PiDqQueryEvaluateFilter @ 0x1407796C4 (PiDqQueryEvaluateFilter.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14078C2F8 (PiDcHandleCustomDeviceEvent.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     PpDevCfgProcessDevices @ 0x140827F54 (PpDevCfgProcessDevices.c)
 *     PiProcessAddBootDevices @ 0x140859618 (PiProcessAddBootDevices.c)
 *     PipMergeDependencyEdgeList @ 0x140942B68 (PipMergeDependencyEdgeList.c)
 *     PiProcessSetDeviceProblem @ 0x140947A8C (PiProcessSetDeviceProblem.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1409483EC (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x140954434 (PiCMCreateDevice.c)
 *     PiCMDeleteClassKey @ 0x140954D10 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140954E2C (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x1409554B0 (PiCMDeleteObject.c)
 *     PiInitializeDevice @ 0x14095975C (PiInitializeDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 *     PiPnpRtlGetCurrentOperation @ 0x14077BA10 (PiPnpRtlGetCurrentOperation.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
      (PRTL_AVL_COMPARE_ROUTINE)PiPnpRtlObjectEventCompareObjects,
      (PRTL_AVL_ALLOCATE_ROUTINE)PiPnpRtlOperationAllocateGenericTableEntry,
      (PRTL_AVL_FREE_ROUTINE)PiPnpRtlOperationFreeGenericTableEntry,
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
