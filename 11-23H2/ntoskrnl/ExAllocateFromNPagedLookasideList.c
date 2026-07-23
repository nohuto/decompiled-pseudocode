/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1402B6DC0
 * Callers:
 *     VfAvlReserveNode @ 0x14020A26C (VfAvlReserveNode.c)
 *     PopAllocateIrp @ 0x14028F6C4 (PopAllocateIrp.c)
 *     CcAllocateVacbLevels @ 0x1402F3970 (CcAllocateVacbLevels.c)
 *     IoSetOplockPrivateFoExt @ 0x140302758 (IoSetOplockPrivateFoExt.c)
 *     LZNT1DecompressChunkNewThread @ 0x140304FC4 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlPrivateLock @ 0x1403277C0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x140327A8C (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140327BF0 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlSplitLocks @ 0x1403287EC (FsRtlSplitLocks.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1403288C0 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlTruncateBaseMcb @ 0x14033A240 (FsRtlTruncateBaseMcb.c)
 *     PopCreateDynamicIrpWorker @ 0x140342038 (PopCreateDynamicIrpWorker.c)
 *     FsRtlInitializeLargeMcb @ 0x14034AD90 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x14034AE00 (FsRtlInitializeBaseMcbEx.c)
 *     FsRtlAllocateFileLock @ 0x1403692E0 (FsRtlAllocateFileLock.c)
 *     WmipAllocRegEntry @ 0x1403C2864 (WmipAllocRegEntry.c)
 *     IoSetOplockKeyContext @ 0x1403CF318 (IoSetOplockKeyContext.c)
 *     sub_1403E5A20 @ 0x1403E5A20 (sub_1403E5A20.c)
 *     MiAddMdlTracker @ 0x14061CA3C (MiAddMdlTracker.c)
 *     ObWaitForMultipleObjects @ 0x1406E38C0 (ObWaitForMultipleObjects.c)
 *     AlpcpInitializePort @ 0x140716928 (AlpcpInitializePort.c)
 *     AlpcInitializeHandleTable @ 0x140717DA0 (AlpcInitializeHandleTable.c)
 *     AlpcpAllocateBlob @ 0x140739E30 (AlpcpAllocateBlob.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140739F00 (FsRtlAllocateExtraCreateParameterList.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140739F60 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlAddToTunnelCacheEx @ 0x14079EEB0 (FsRtlAddToTunnelCacheEx.c)
 *     RtlpCreateRangeListEntry @ 0x140814C64 (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x1408151E0 (RtlpCopyRangeListEntry.c)
 *     WmipAllocEntry @ 0x14086B140 (WmipAllocEntry.c)
 *     HashpHashMemory @ 0x140A772CC (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x140A775BC (HashpVerifyPkcs1Signature.c)
 *     ViAllocateContextTable @ 0x140AC400C (ViAllocateContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140AC4BB0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC4E00 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140AC5670 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140AC6820 (VfGetScatterGatherList.c)
 *     ViIoCallbackSnapState @ 0x140ACB3F4 (ViIoCallbackSnapState.c)
 *     VfIrpAllocateCallDriverData @ 0x140ACDA68 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x140AD8704 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140AD97E8 (ViDeadlockPopulateLookasideCache.c)
 *     VfPacketCreateAndLock @ 0x140ADD02C (VfPacketCreateAndLock.c)
 *     IovpSessionDataCreate @ 0x140ADDEC8 (IovpSessionDataCreate.c)
 *     ViWdBeforeCallDriver @ 0x140ADE1F4 (ViWdBeforeCallDriver.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
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
