/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1402B6B30
 * Callers:
 *     VfAvlReserveNode @ 0x14020A26C (VfAvlReserveNode.c)
 *     PopAllocateIrp @ 0x14028F434 (PopAllocateIrp.c)
 *     CcAllocateVacbLevels @ 0x1402F36E0 (CcAllocateVacbLevels.c)
 *     IoSetOplockPrivateFoExt @ 0x1403024C8 (IoSetOplockPrivateFoExt.c)
 *     LZNT1DecompressChunkNewThread @ 0x140304D34 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlPrivateLock @ 0x140327530 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1403277FC (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140327960 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlSplitLocks @ 0x14032855C (FsRtlSplitLocks.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140328630 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlTruncateBaseMcb @ 0x140339FB0 (FsRtlTruncateBaseMcb.c)
 *     PopCreateDynamicIrpWorker @ 0x140341DA8 (PopCreateDynamicIrpWorker.c)
 *     FsRtlInitializeLargeMcb @ 0x14034ABF0 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x14034AC60 (FsRtlInitializeBaseMcbEx.c)
 *     FsRtlAllocateFileLock @ 0x140369140 (FsRtlAllocateFileLock.c)
 *     WmipAllocRegEntry @ 0x1403C2684 (WmipAllocRegEntry.c)
 *     IoSetOplockKeyContext @ 0x1403CF138 (IoSetOplockKeyContext.c)
 *     sub_1403E5840 @ 0x1403E5840 (sub_1403E5840.c)
 *     MiAddMdlTracker @ 0x14061C4EC (MiAddMdlTracker.c)
 *     ObWaitForMultipleObjects @ 0x1406E3890 (ObWaitForMultipleObjects.c)
 *     AlpcpInitializePort @ 0x140716728 (AlpcpInitializePort.c)
 *     AlpcInitializeHandleTable @ 0x140717BA0 (AlpcInitializeHandleTable.c)
 *     AlpcpAllocateBlob @ 0x140739C40 (AlpcpAllocateBlob.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140739D10 (FsRtlAllocateExtraCreateParameterList.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140739D70 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlAddToTunnelCacheEx @ 0x14079ECC0 (FsRtlAddToTunnelCacheEx.c)
 *     RtlpCreateRangeListEntry @ 0x140814994 (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x140814F10 (RtlpCopyRangeListEntry.c)
 *     WmipAllocEntry @ 0x14086AF00 (WmipAllocEntry.c)
 *     HashpHashMemory @ 0x140A7701C (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7730C (HashpVerifyPkcs1Signature.c)
 *     ViAllocateContextTable @ 0x140AC401C (ViAllocateContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140AC4BC0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC4E10 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140AC5680 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140AC6830 (VfGetScatterGatherList.c)
 *     ViIoCallbackSnapState @ 0x140ACB404 (ViIoCallbackSnapState.c)
 *     VfIrpAllocateCallDriverData @ 0x140ACDA78 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x140AD8714 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140AD97F8 (ViDeadlockPopulateLookasideCache.c)
 *     VfPacketCreateAndLock @ 0x140ADD03C (VfPacketCreateAndLock.c)
 *     IovpSessionDataCreate @ 0x140ADDED8 (IovpSessionDataCreate.c)
 *     ViWdBeforeCallDriver @ 0x140ADE204 (ViWdBeforeCallDriver.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140428EB0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
