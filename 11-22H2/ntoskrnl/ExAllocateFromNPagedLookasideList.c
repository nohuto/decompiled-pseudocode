/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1402B6B00
 * Callers:
 *     VfAvlReserveNode @ 0x14020A294 (VfAvlReserveNode.c)
 *     PopAllocateIrp @ 0x14028F314 (PopAllocateIrp.c)
 *     CcAllocateVacbLevels @ 0x1402F36E0 (CcAllocateVacbLevels.c)
 *     IoSetOplockPrivateFoExt @ 0x1403024C8 (IoSetOplockPrivateFoExt.c)
 *     LZNT1DecompressChunkNewThread @ 0x140304D34 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlPrivateLock @ 0x140327350 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x14032761C (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140327780 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlSplitLocks @ 0x14032837C (FsRtlSplitLocks.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140328450 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlTruncateBaseMcb @ 0x140339E10 (FsRtlTruncateBaseMcb.c)
 *     PopCreateDynamicIrpWorker @ 0x1403418B8 (PopCreateDynamicIrpWorker.c)
 *     FsRtlInitializeLargeMcb @ 0x14034A5F0 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x14034A660 (FsRtlInitializeBaseMcbEx.c)
 *     FsRtlAllocateFileLock @ 0x140368AF0 (FsRtlAllocateFileLock.c)
 *     WmipAllocRegEntry @ 0x1403C2024 (WmipAllocRegEntry.c)
 *     IoSetOplockKeyContext @ 0x1403CEAD8 (IoSetOplockKeyContext.c)
 *     sub_1403E51E0 @ 0x1403E51E0 (sub_1403E51E0.c)
 *     MiAddMdlTracker @ 0x14061C55C (MiAddMdlTracker.c)
 *     ObWaitForMultipleObjects @ 0x1406E3940 (ObWaitForMultipleObjects.c)
 *     AlpcpInitializePort @ 0x140716798 (AlpcpInitializePort.c)
 *     AlpcInitializeHandleTable @ 0x140717C10 (AlpcInitializeHandleTable.c)
 *     AlpcpAllocateBlob @ 0x14073A150 (AlpcpAllocateBlob.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14073A220 (FsRtlAllocateExtraCreateParameterList.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14073A280 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlAddToTunnelCacheEx @ 0x14079F1D0 (FsRtlAddToTunnelCacheEx.c)
 *     RtlpCreateRangeListEntry @ 0x140816F14 (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x140817490 (RtlpCopyRangeListEntry.c)
 *     WmipAllocEntry @ 0x14086B3D0 (WmipAllocEntry.c)
 *     HashpHashMemory @ 0x140A7708C (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7737C (HashpVerifyPkcs1Signature.c)
 *     ViAllocateContextTable @ 0x140AC4FEC (ViAllocateContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140AC5B90 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC5DE0 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140AC6650 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140AC7800 (VfGetScatterGatherList.c)
 *     ViIoCallbackSnapState @ 0x140ACC3D4 (ViIoCallbackSnapState.c)
 *     VfIrpAllocateCallDriverData @ 0x140ACEA48 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x140AD96E4 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140ADA7C8 (ViDeadlockPopulateLookasideCache.c)
 *     VfPacketCreateAndLock @ 0x140ADE00C (VfPacketCreateAndLock.c)
 *     IovpSessionDataCreate @ 0x140ADEEA8 (IovpSessionDataCreate.c)
 *     ViWdBeforeCallDriver @ 0x140ADF1D4 (ViWdBeforeCallDriver.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1404287F0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
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
