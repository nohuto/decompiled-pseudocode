/*
 * XREFs of PiPnpRtlEndOperation @ 0x1407887CC
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
 *     ExAcquireResourceSharedLite @ 0x14023D680 (ExAcquireResourceSharedLite.c)
 *     RtlIsGenericTableEmptyAvl @ 0x14031E890 (RtlIsGenericTableEmptyAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14031E9D0 (RtlDeleteElementGenericTableAvl.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     PiPnpRtlObjectEventDispatch @ 0x140788900 (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlObjectEventRelease @ 0x140788948 (PiPnpRtlObjectEventRelease.c)
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
