/*
 * XREFs of KeAcquireQueuedSpinLock @ 0x1402A09F0
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1402010B8 (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140201C30 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     IopGetMountFlag @ 0x140206E40 (IopGetMountFlag.c)
 *     CcGetVirtualAddress @ 0x140265080 (CcGetVirtualAddress.c)
 *     IopCopyCompleteReadIrp @ 0x14028C660 (IopCopyCompleteReadIrp.c)
 *     PopQueueQuerySetIrp @ 0x14028EC5C (PopQueueQuerySetIrp.c)
 *     IopMountInitializeVpb @ 0x14028FF9C (IopMountInitializeVpb.c)
 *     IopQueryVpbFlagsSafe @ 0x140290B34 (IopQueryVpbFlagsSafe.c)
 *     CcGetVacbMiss @ 0x14029F3A0 (CcGetVacbMiss.c)
 *     IopCheckVpbMounted @ 0x1402AF6D0 (IopCheckVpbMounted.c)
 *     IopfCompleteRequest @ 0x1402C9C40 (IopfCompleteRequest.c)
 *     CcExtendVacbArray @ 0x1402F2CD4 (CcExtendVacbArray.c)
 *     FsRtlpOplockBreakToII @ 0x1402FBDC8 (FsRtlpOplockBreakToII.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1402FD900 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1402FEAC0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1403011A4 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x140301BB0 (FsRtlpRequestShareableOplock.c)
 *     IopInterlockedIncrementUlong @ 0x140302A54 (IopInterlockedIncrementUlong.c)
 *     IopGetDevicePDO @ 0x140302C48 (IopGetDevicePDO.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140302D18 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140302E10 (IopVerifyDeviceObjectOnStack.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140302E90 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IopInsertRemoveDevice @ 0x140302F14 (IopInsertRemoveDevice.c)
 *     FsRtlNotifySetCancelRoutine @ 0x140302F88 (FsRtlNotifySetCancelRoutine.c)
 *     IoDeleteDevice @ 0x1403050A0 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140305590 (IopCompleteUnloadOrDelete.c)
 *     IoBoostThreadIoPriority @ 0x14031B5B0 (IoBoostThreadIoPriority.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x140321E74 (PpMarkDeviceStackExtensionFlag.c)
 *     RawInitiateDeleteVolume @ 0x1403220D8 (RawInitiateDeleteVolume.c)
 *     PnpGetRelatedTargetDevice @ 0x140322928 (PnpGetRelatedTargetDevice.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140326CC4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140326FC4 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlUninitializeOplock @ 0x14034C7D0 (FsRtlUninitializeOplock.c)
 *     IoCancelIrp @ 0x140352030 (IoCancelIrp.c)
 *     IopInterlockedRemoveHeadList @ 0x14035B350 (IopInterlockedRemoveHeadList.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035FAB4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAcquireVpbSpinLock @ 0x140363D00 (IoAcquireVpbSpinLock.c)
 *     IoGetDriverObjectExtension @ 0x140365960 (IoGetDriverObjectExtension.c)
 *     IoDetachDevice @ 0x140366180 (IoDetachDevice.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14036657C (IoGetLowerDeviceObjectWithTag.c)
 *     FsRtlUninitializeFileLock @ 0x14036B310 (FsRtlUninitializeFileLock.c)
 *     IopResurrectDriver @ 0x14036E6C0 (IopResurrectDriver.c)
 *     IopInterlockedInsertHeadList @ 0x140374A1C (IopInterlockedInsertHeadList.c)
 *     CcInitializePartitionVacbs @ 0x1403A09F0 (CcInitializePartitionVacbs.c)
 *     IoAllocateDriverObjectExtension @ 0x1403A5DE0 (IoAllocateDriverObjectExtension.c)
 *     IopInterlockedInsertTailList @ 0x1403A911C (IopInterlockedInsertTailList.c)
 *     IopCheckUnloadDriver @ 0x1403ABEFC (IopCheckUnloadDriver.c)
 *     PnpRemoveLockedDeviceNode @ 0x1403B728C (PnpRemoveLockedDeviceNode.c)
 *     PnpFindMountableDevice @ 0x1403B75FC (PnpFindMountableDevice.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403BFE04 (FsRtlpRequestExclusiveOplock.c)
 *     CcAllocateInitializeVacbArray @ 0x1403C3750 (CcAllocateInitializeVacbArray.c)
 *     IopSetFsRegistrationInProgress @ 0x1403C4B84 (IopSetFsRegistrationInProgress.c)
 *     IoEnumerateDeviceObjectList @ 0x1403C6CF0 (IoEnumerateDeviceObjectList.c)
 *     IoGetDiskDeviceObject @ 0x1403C6EE0 (IoGetDiskDeviceObject.c)
 *     IopInterlockedDecrementUlong @ 0x1403C7ADC (IopInterlockedDecrementUlong.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403D3510 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     PnpIsChainDereferenced @ 0x1403D44C0 (PnpIsChainDereferenced.c)
 *     PnpMarkDeviceForRemove @ 0x1403D4F88 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x1403D5390 (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1403D586C (PnpUnlockMountableDevice.c)
 *     IopCheckStackForTransactionSupport @ 0x1403D67C0 (IopCheckStackForTransactionSupport.c)
 *     FsRtlDisallowLegacyFilterOnDevice @ 0x14040FDC0 (FsRtlDisallowLegacyFilterOnDevice.c)
 *     IopStartNextPacket @ 0x14045FBCC (IopStartNextPacket.c)
 *     CcDereferenceVacbArray @ 0x14053848C (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x140538534 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x140538930 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x140539C4C (CcUninitializePartitionVacbs.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053E4B8 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14053EC88 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockBreakToNone @ 0x14053EFB8 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x14053F31C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     IopDisassociateThreadIrp @ 0x1405557F4 (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x140555CE4 (IopGetDriverPathInformation.c)
 *     IopReferenceVerifyVpb @ 0x1405561FC (IopReferenceVerifyVpb.c)
 *     IoAdjustStackSizeForRedirection @ 0x140556CA0 (IoAdjustStackSizeForRedirection.c)
 *     IoStartPacket @ 0x1405579A0 (IoStartPacket.c)
 *     IopGetFsRegistrationInProgress @ 0x140557D68 (IopGetFsRegistrationInProgress.c)
 *     IopStartNextPacketByKey @ 0x1405581D8 (IopStartNextPacketByKey.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1405615C8 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopSetLegacyResourcesFlag @ 0x140561C64 (IopSetLegacyResourcesFlag.c)
 *     RawCheckForDeleteVolume @ 0x1405A712C (RawCheckForDeleteVolume.c)
 *     RawVerifyVolume @ 0x1405A71CC (RawVerifyVolume.c)
 *     DifKeAcquireQueuedSpinLockWrapper @ 0x1405E2E30 (DifKeAcquireQueuedSpinLockWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140A99C30 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140AD2A20 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140AD2A84 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140AD2AE0 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsInFdoStack @ 0x140AD2B88 (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140AD2BF0 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x140AD2D08 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x140AD2D6C (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1402A0D00 (KxAcquireQueuedSpinLock.c)
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
