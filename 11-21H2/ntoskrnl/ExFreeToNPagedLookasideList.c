/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x140203D88
 * Callers:
 *     LZNT1DecompressChunkWorkItem @ 0x1402035C0 (LZNT1DecompressChunkWorkItem.c)
 *     IopDeleteFileObjectExtension @ 0x140203B8C (IopDeleteFileObjectExtension.c)
 *     FsRtlUninitializeBaseMcb @ 0x140203D00 (FsRtlUninitializeBaseMcb.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14021D404 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14021DEB4 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x14021E048 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateInsertLock @ 0x14021E5E4 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x14021E6C4 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14021F280 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlAddEntry @ 0x14022C788 (FsRtlAddEntry.c)
 *     CcDeleteMbcb @ 0x14023F250 (CcDeleteMbcb.c)
 *     CcExtendVacbArray @ 0x140247300 (CcExtendVacbArray.c)
 *     CcFreeUnusedVacbLevels @ 0x1402477A4 (CcFreeUnusedVacbLevels.c)
 *     FsRtlUninitializeLargeMcb @ 0x1402554A0 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeFileLock @ 0x140259FA0 (FsRtlUninitializeFileLock.c)
 *     IoSetOplockPrivateFoExt @ 0x1402A2EF0 (IoSetOplockPrivateFoExt.c)
 *     VfTargetDriversRemove @ 0x1402DB738 (VfTargetDriversRemove.c)
 *     CcDeallocateVacbLevel @ 0x1403877FC (CcDeallocateVacbLevel.c)
 *     PopCreateDynamicIrpWorker @ 0x14039653C (PopCreateDynamicIrpWorker.c)
 *     IoSetOplockKeyContext @ 0x14039E588 (IoSetOplockKeyContext.c)
 *     PopAllocateIrp @ 0x1403A3F0C (PopAllocateIrp.c)
 *     PopFreeIrp @ 0x1403A4DCC (PopFreeIrp.c)
 *     WmipDeregisterRegEntry @ 0x1403A5AF0 (WmipDeregisterRegEntry.c)
 *     PopIrpWorker @ 0x1403B1270 (PopIrpWorker.c)
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x140541E40 (FsRtlPrivateCancelFileLockIrp.c)
 *     MiFreeMdlTracker @ 0x140584374 (MiFreeMdlTracker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1405FE678 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066EF20 (FsRtlFreeExtraCreateParameter.c)
 *     AlpcpDestroyPort @ 0x14074D9EC (AlpcpDestroyPort.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     IovCallDriver @ 0x140A802F0 (IovCallDriver.c)
 *     ViFreeContextTable @ 0x140A8360C (ViFreeContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140A84180 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140A843D0 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140A84BC0 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x140A85150 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140A85600 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140A856B0 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140A859A0 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140A85DA0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140A86C30 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140A86EA0 (ViAdapterCallback.c)
 *     VfFastIoCheckState @ 0x140A8A8D4 (VfFastIoCheckState.c)
 *     VfIoCompletionCheckState @ 0x140A8A9FC (VfIoCompletionCheckState.c)
 *     ViDevObjRemove @ 0x140A91AD0 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140A91EDC (ViRemLockDeleteFirstTreeNode.c)
 *     ViDeadlockFree @ 0x140A997C0 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140A999D0 (ViDeadlockPopulateLookasideCache.c)
 *     VfPacketFree @ 0x140A9C13C (VfPacketFree.c)
 *     IovpSessionDataDereference @ 0x140A9CF00 (IovpSessionDataDereference.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x140A9D2AC (ViWdIrpBeforeCompletionRoutine.c)
 *     VfLookasideAdd @ 0x140A9F0C0 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140A9F1DC (VfLookasideDelete.c)
 *     VfCheckForResource @ 0x140AA144C (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AA1590 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AA16A4 (VfTrackResource.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
  else
  {
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
}
