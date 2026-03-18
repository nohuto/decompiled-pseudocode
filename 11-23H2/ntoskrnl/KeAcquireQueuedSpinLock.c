/*
 * XREFs of KeAcquireQueuedSpinLock @ 0x1402A0760
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1402010B8 (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140201C30 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     IopGetMountFlag @ 0x140206E40 (IopGetMountFlag.c)
 *     CcGetVirtualAddress @ 0x140264DF0 (CcGetVirtualAddress.c)
 *     IopCopyCompleteReadIrp @ 0x14028C3D0 (IopCopyCompleteReadIrp.c)
 *     PopQueueQuerySetIrp @ 0x14028E9CC (PopQueueQuerySetIrp.c)
 *     IopMountInitializeVpb @ 0x14028FD0C (IopMountInitializeVpb.c)
 *     IopQueryVpbFlagsSafe @ 0x1402908A4 (IopQueryVpbFlagsSafe.c)
 *     CcGetVacbMiss @ 0x14029F110 (CcGetVacbMiss.c)
 *     IopCheckVpbMounted @ 0x1402AF440 (IopCheckVpbMounted.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
 *     CcExtendVacbArray @ 0x1402F2A44 (CcExtendVacbArray.c)
 *     FsRtlpOplockBreakToII @ 0x1402FBB38 (FsRtlpOplockBreakToII.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1402FD670 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1402FE830 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x140300F14 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x140301920 (FsRtlpRequestShareableOplock.c)
 *     IopInterlockedIncrementUlong @ 0x1403027C4 (IopInterlockedIncrementUlong.c)
 *     IopGetDevicePDO @ 0x1403029B8 (IopGetDevicePDO.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140302A88 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140302B80 (IopVerifyDeviceObjectOnStack.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140302C00 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IopInsertRemoveDevice @ 0x140302C84 (IopInsertRemoveDevice.c)
 *     FsRtlNotifySetCancelRoutine @ 0x140302CF8 (FsRtlNotifySetCancelRoutine.c)
 *     IoDeleteDevice @ 0x140304E10 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     IoBoostThreadIoPriority @ 0x14031B320 (IoBoostThreadIoPriority.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x140321BE4 (PpMarkDeviceStackExtensionFlag.c)
 *     RawInitiateDeleteVolume @ 0x140321E48 (RawInitiateDeleteVolume.c)
 *     PnpGetRelatedTargetDevice @ 0x140322698 (PnpGetRelatedTargetDevice.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140326A34 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140326D34 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlUninitializeOplock @ 0x14034C630 (FsRtlUninitializeOplock.c)
 *     IoCancelIrp @ 0x140351E90 (IoCancelIrp.c)
 *     IopInterlockedRemoveHeadList @ 0x14035B1B0 (IopInterlockedRemoveHeadList.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035F914 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAcquireVpbSpinLock @ 0x140363B60 (IoAcquireVpbSpinLock.c)
 *     IoGetDriverObjectExtension @ 0x1403657C0 (IoGetDriverObjectExtension.c)
 *     IoDetachDevice @ 0x140365FE0 (IoDetachDevice.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1403663DC (IoGetLowerDeviceObjectWithTag.c)
 *     FsRtlUninitializeFileLock @ 0x14036B170 (FsRtlUninitializeFileLock.c)
 *     IopResurrectDriver @ 0x14036E520 (IopResurrectDriver.c)
 *     IopInterlockedInsertHeadList @ 0x14037487C (IopInterlockedInsertHeadList.c)
 *     CcInitializePartitionVacbs @ 0x1403A0810 (CcInitializePartitionVacbs.c)
 *     IoAllocateDriverObjectExtension @ 0x1403A5C00 (IoAllocateDriverObjectExtension.c)
 *     IopInterlockedInsertTailList @ 0x1403A8F3C (IopInterlockedInsertTailList.c)
 *     IopCheckUnloadDriver @ 0x1403ABD1C (IopCheckUnloadDriver.c)
 *     PnpRemoveLockedDeviceNode @ 0x1403B70AC (PnpRemoveLockedDeviceNode.c)
 *     PnpFindMountableDevice @ 0x1403B741C (PnpFindMountableDevice.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403BFC24 (FsRtlpRequestExclusiveOplock.c)
 *     CcAllocateInitializeVacbArray @ 0x1403C3570 (CcAllocateInitializeVacbArray.c)
 *     IopSetFsRegistrationInProgress @ 0x1403C49A4 (IopSetFsRegistrationInProgress.c)
 *     IoEnumerateDeviceObjectList @ 0x1403C6B10 (IoEnumerateDeviceObjectList.c)
 *     IoGetDiskDeviceObject @ 0x1403C6D00 (IoGetDiskDeviceObject.c)
 *     IopInterlockedDecrementUlong @ 0x1403C78FC (IopInterlockedDecrementUlong.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403D3330 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     PnpIsChainDereferenced @ 0x1403D42E0 (PnpIsChainDereferenced.c)
 *     PnpMarkDeviceForRemove @ 0x1403D4DA8 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x1403D51B0 (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1403D568C (PnpUnlockMountableDevice.c)
 *     IopCheckStackForTransactionSupport @ 0x1403D65E0 (IopCheckStackForTransactionSupport.c)
 *     FsRtlDisallowLegacyFilterOnDevice @ 0x14040FBE0 (FsRtlDisallowLegacyFilterOnDevice.c)
 *     IopStartNextPacket @ 0x14045F7CC (IopStartNextPacket.c)
 *     CcDereferenceVacbArray @ 0x140537F3C (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x140537FE4 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1405383E0 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x1405396FC (CcUninitializePartitionVacbs.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053DF68 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14053E5C0 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockBreakToNone @ 0x14053E8F0 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x14053EC5C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     IopDisassociateThreadIrp @ 0x140555134 (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x140555624 (IopGetDriverPathInformation.c)
 *     IopReferenceVerifyVpb @ 0x140555B3C (IopReferenceVerifyVpb.c)
 *     IoAdjustStackSizeForRedirection @ 0x1405565E0 (IoAdjustStackSizeForRedirection.c)
 *     IoStartPacket @ 0x1405572E0 (IoStartPacket.c)
 *     IopGetFsRegistrationInProgress @ 0x1405576A8 (IopGetFsRegistrationInProgress.c)
 *     IopStartNextPacketByKey @ 0x140557B18 (IopStartNextPacketByKey.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x140560F08 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopSetLegacyResourcesFlag @ 0x1405615A4 (IopSetLegacyResourcesFlag.c)
 *     RawCheckForDeleteVolume @ 0x1405A6BBC (RawCheckForDeleteVolume.c)
 *     RawVerifyVolume @ 0x1405A6C5C (RawVerifyVolume.c)
 *     DifKeAcquireQueuedSpinLockWrapper @ 0x1405E28C0 (DifKeAcquireQueuedSpinLockWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140A99DC0 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140AD2A30 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140AD2A94 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140AD2AF0 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsInFdoStack @ 0x140AD2B98 (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140AD2C00 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x140AD2D18 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x140AD2D7C (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1402A0A70 (KxAcquireQueuedSpinLock.c)
 */

KIRQL __stdcall KeAcquireQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number)
{
  KIRQL CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  int v3; // eax
  char *v4; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v3 = 4;
    if ( CurrentIrql != 2 )
      v3 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v3;
  }
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number;
  KxAcquireQueuedSpinLock(v4, *((_QWORD *)v4 + 1));
  return CurrentIrql;
}
