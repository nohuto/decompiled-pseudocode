/*
 * XREFs of PiPnpRtlEndOperation @ 0x1407889BC
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
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     RtlIsGenericTableEmptyAvl @ 0x14031EB20 (RtlIsGenericTableEmptyAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14031EC60 (RtlDeleteElementGenericTableAvl.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     PiPnpRtlObjectEventDispatch @ 0x140788AF0 (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlObjectEventRelease @ 0x140788B38 (PiPnpRtlObjectEventRelease.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlEndOperation(PVOID **P)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rax
  PVOID *v5; // rdx
  PVOID *v6; // rax
  _QWORD **v7; // rdi
  _QWORD *v8; // rcx
  HANDLE *v9; // rcx
  _QWORD *v10; // rax
  HANDLE *Buffer; // [rsp+30h] [rbp+8h] BYREF

  Buffer = 0LL;
  if ( (*((_DWORD *)P + 36))-- == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiPnpRtlActiveOperationsLock, 1u);
    v5 = *P;
    if ( (*P)[1] != P || (v6 = P[1], *v6 != P) )
LABEL_16:
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
    KeLeaveCriticalRegion();
    while ( !RtlIsGenericTableEmptyAvl((PRTL_AVL_TABLE)(P + 3)) )
    {
      v9 = (HANDLE *)P[5][4];
      Buffer = v9;
      if ( v9[2] )
      {
        ZwClose(v9[2]);
        Buffer[2] = 0LL;
        v9 = Buffer;
      }
      PiPnpRtlObjectEventDispatch(v9);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 3), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegion();
    v7 = P + 16;
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == v7 )
        break;
      if ( (_QWORD **)v8[1] != v7 )
        goto LABEL_16;
      v10 = (_QWORD *)*v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_16;
      *v7 = v10;
      v10[1] = v7;
      Buffer = (HANDLE *)(v8 - 7);
      PiPnpRtlObjectEventRelease(v8 - 7);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
