/*
 * XREFs of KeAcquireQueuedSpinLock @ 0x1402A0640
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1402010B8 (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140201C30 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     IopGetMountFlag @ 0x140206E40 (IopGetMountFlag.c)
 *     CcGetVirtualAddress @ 0x140264CD0 (CcGetVirtualAddress.c)
 *     IopCopyCompleteReadIrp @ 0x14028C2B0 (IopCopyCompleteReadIrp.c)
 *     PopQueueQuerySetIrp @ 0x14028E8AC (PopQueueQuerySetIrp.c)
 *     IopMountInitializeVpb @ 0x14028FBEC (IopMountInitializeVpb.c)
 *     IopQueryVpbFlagsSafe @ 0x140290784 (IopQueryVpbFlagsSafe.c)
 *     CcGetVacbMiss @ 0x14029EFF0 (CcGetVacbMiss.c)
 *     IopCheckVpbMounted @ 0x1402AF410 (IopCheckVpbMounted.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
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
 *     IoBoostThreadIoPriority @ 0x14031B140 (IoBoostThreadIoPriority.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x140321A04 (PpMarkDeviceStackExtensionFlag.c)
 *     RawInitiateDeleteVolume @ 0x140321C68 (RawInitiateDeleteVolume.c)
 *     PnpGetRelatedTargetDevice @ 0x1403224B8 (PnpGetRelatedTargetDevice.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140326854 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140326B54 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlUninitializeOplock @ 0x14034C030 (FsRtlUninitializeOplock.c)
 *     IoCancelIrp @ 0x140351890 (IoCancelIrp.c)
 *     IopInterlockedRemoveHeadList @ 0x14035AB68 (IopInterlockedRemoveHeadList.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035F2C4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAcquireVpbSpinLock @ 0x140363510 (IoAcquireVpbSpinLock.c)
 *     IoGetDriverObjectExtension @ 0x140365170 (IoGetDriverObjectExtension.c)
 *     IoDetachDevice @ 0x140365990 (IoDetachDevice.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x140365D8C (IoGetLowerDeviceObjectWithTag.c)
 *     FsRtlUninitializeFileLock @ 0x14036AB20 (FsRtlUninitializeFileLock.c)
 *     IopResurrectDriver @ 0x14036DED0 (IopResurrectDriver.c)
 *     IopInterlockedInsertHeadList @ 0x140374ECC (IopInterlockedInsertHeadList.c)
 *     CcInitializePartitionVacbs @ 0x1403A0520 (CcInitializePartitionVacbs.c)
 *     IoAllocateDriverObjectExtension @ 0x1403A54A0 (IoAllocateDriverObjectExtension.c)
 *     IopInterlockedInsertTailList @ 0x1403A884C (IopInterlockedInsertTailList.c)
 *     IopCheckUnloadDriver @ 0x1403AB540 (IopCheckUnloadDriver.c)
 *     PnpRemoveLockedDeviceNode @ 0x1403B6A4C (PnpRemoveLockedDeviceNode.c)
 *     PnpFindMountableDevice @ 0x1403B6DBC (PnpFindMountableDevice.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403BF5C4 (FsRtlpRequestExclusiveOplock.c)
 *     CcAllocateInitializeVacbArray @ 0x1403C2F10 (CcAllocateInitializeVacbArray.c)
 *     IopSetFsRegistrationInProgress @ 0x1403C4344 (IopSetFsRegistrationInProgress.c)
 *     IoEnumerateDeviceObjectList @ 0x1403C64B0 (IoEnumerateDeviceObjectList.c)
 *     IoGetDiskDeviceObject @ 0x1403C66A0 (IoGetDiskDeviceObject.c)
 *     IopInterlockedDecrementUlong @ 0x1403C729C (IopInterlockedDecrementUlong.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403D2CD0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     PnpIsChainDereferenced @ 0x1403D3C80 (PnpIsChainDereferenced.c)
 *     PnpMarkDeviceForRemove @ 0x1403D4748 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x1403D4B50 (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1403D502C (PnpUnlockMountableDevice.c)
 *     IopCheckStackForTransactionSupport @ 0x1403D5F80 (IopCheckStackForTransactionSupport.c)
 *     FsRtlDisallowLegacyFilterOnDevice @ 0x14040F4D0 (FsRtlDisallowLegacyFilterOnDevice.c)
 *     IopStartNextPacket @ 0x14045F16C (IopStartNextPacket.c)
 *     CcDereferenceVacbArray @ 0x140537FEC (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x140538094 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x140538490 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x1405397AC (CcUninitializePartitionVacbs.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053E018 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14053E670 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockBreakToNone @ 0x14053E9A0 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x14053ED0C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     IopDisassociateThreadIrp @ 0x1405551D4 (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x1405556C4 (IopGetDriverPathInformation.c)
 *     IopReferenceVerifyVpb @ 0x140555BDC (IopReferenceVerifyVpb.c)
 *     IoAdjustStackSizeForRedirection @ 0x140556680 (IoAdjustStackSizeForRedirection.c)
 *     IoStartPacket @ 0x140557380 (IoStartPacket.c)
 *     IopGetFsRegistrationInProgress @ 0x140557748 (IopGetFsRegistrationInProgress.c)
 *     IopStartNextPacketByKey @ 0x140557BB8 (IopStartNextPacketByKey.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x140560FA8 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopSetLegacyResourcesFlag @ 0x140561644 (IopSetLegacyResourcesFlag.c)
 *     RawCheckForDeleteVolume @ 0x1405A6C4C (RawCheckForDeleteVolume.c)
 *     RawVerifyVolume @ 0x1405A6CEC (RawVerifyVolume.c)
 *     DifKeAcquireQueuedSpinLockWrapper @ 0x1405E2950 (DifKeAcquireQueuedSpinLockWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140A99E80 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140AD3A00 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140AD3A64 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140AD3AC0 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsInFdoStack @ 0x140AD3B68 (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140AD3BD0 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x140AD3CE8 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x140AD3D4C (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1402A0950 (KxAcquireQueuedSpinLock.c)
 */

KIRQL __stdcall KeAcquireQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number)
{
  KIRQL CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  int v3; // eax
  char *v4; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
