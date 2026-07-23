/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x140302AA0
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
 *     FsRtlCancelNotify @ 0x14035E360 (FsRtlCancelNotify.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035FAB4 (IopAttachDeviceToDeviceStackSafe.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140360D60 (FsRtlpCancelOplockRHIrp.c)
 *     IoReleaseVpbSpinLock @ 0x140364AC0 (IoReleaseVpbSpinLock.c)
 *     IoGetDriverObjectExtension @ 0x140365960 (IoGetDriverObjectExtension.c)
 *     IoDetachDevice @ 0x140366180 (IoDetachDevice.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14036657C (IoGetLowerDeviceObjectWithTag.c)
 *     WmipNotificationIrpCancel @ 0x14036A360 (WmipNotificationIrpCancel.c)
 *     FsRtlUninitializeFileLock @ 0x14036B310 (FsRtlUninitializeFileLock.c)
 *     IopCsqCancelRoutine @ 0x14036DC30 (IopCsqCancelRoutine.c)
 *     IopResurrectDriver @ 0x14036E6C0 (IopResurrectDriver.c)
 *     IopInterlockedInsertHeadList @ 0x140374A1C (IopInterlockedInsertHeadList.c)
 *     CcInitializePartitionVacbs @ 0x1403A09F0 (CcInitializePartitionVacbs.c)
 *     IoAllocateDriverObjectExtension @ 0x1403A5DE0 (IoAllocateDriverObjectExtension.c)
 *     IopInterlockedInsertTailList @ 0x1403A911C (IopInterlockedInsertTailList.c)
 *     IopCheckUnloadDriver @ 0x1403ABEFC (IopCheckUnloadDriver.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1403B2590 (FsRtlpCancelExclusiveIrp.c)
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
 *     FsRtlPrivateCancelFileLockIrp @ 0x14053DCD0 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053E4B8 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14053E6F0 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x14053E7D4 (FsRtlpCancelWaitingIrp.c)
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
 *     PiDqIrpCancel @ 0x1405621A0 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x140564B10 (PiSwIrpCancelStartCreate.c)
 *     RawCheckForDeleteVolume @ 0x1405A712C (RawCheckForDeleteVolume.c)
 *     RawVerifyVolume @ 0x1405A71CC (RawVerifyVolume.c)
 *     DifKeReleaseQueuedSpinLockWrapper @ 0x1405E53D0 (DifKeReleaseQueuedSpinLockWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140A99C30 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140AD2A20 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140AD2A84 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140AD2AE0 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsInFdoStack @ 0x140AD2B88 (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140AD2BF0 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x140AD2D08 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x140AD2D6C (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall KeReleaseQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, KIRQL OldIrql)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  v2 = OldIrql;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 2 * Number);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v7 = (v6 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v6;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
}
