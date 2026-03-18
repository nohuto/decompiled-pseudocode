/*
 * XREFs of RtlRaiseStatus @ 0x1403217B0
 * Callers:
 *     PsChargePoolQuota @ 0x140207F00 (PsChargePoolQuota.c)
 *     InitializeSListHead @ 0x140221420 (InitializeSListHead.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x140224220 (IopAllocateAndPopulateWriteIrp.c)
 *     MmProbeAndLockPages @ 0x140238790 (MmProbeAndLockPages.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     CcInitializeCacheMapInternal @ 0x14025E8D0 (CcInitializeCacheMapInternal.c)
 *     CcCopyReadEx @ 0x140261D60 (CcCopyReadEx.c)
 *     CcPinFileData @ 0x140263890 (CcPinFileData.c)
 *     CcMapAndRead @ 0x140265190 (CcMapAndRead.c)
 *     CcGetVacbMiss @ 0x14029F110 (CcGetVacbMiss.c)
 *     RtlDispatchException @ 0x1402A3DC0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402A4D40 (RtlUnwindEx.c)
 *     RtlpxVirtualUnwind @ 0x1402A5A80 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x1402A5F50 (RtlpUnwindPrologue.c)
 *     NtSetInformationFile @ 0x1402A6BF0 (NtSetInformationFile.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402AD250 (ExpAllocatePoolWithTagFromNode.c)
 *     ExAllocateHeapPool @ 0x1402AD2E0 (ExAllocateHeapPool.c)
 *     KeReleaseSemaphoreEx @ 0x1402B71A0 (KeReleaseSemaphoreEx.c)
 *     CcAsyncCopyRead @ 0x1402C1070 (CcAsyncCopyRead.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     MiZeroEngineMemory @ 0x1402D1280 (MiZeroEngineMemory.c)
 *     CcSetFileSizesEx @ 0x1402F0FA0 (CcSetFileSizesEx.c)
 *     CcZeroData @ 0x1402FB700 (CcZeroData.c)
 *     CcZeroDataInCache @ 0x1402FBF18 (CcZeroDataInCache.c)
 *     MiProbeAndLockPages @ 0x1402FC270 (MiProbeAndLockPages.c)
 *     KeSuspendThread @ 0x140309E18 (KeSuspendThread.c)
 *     RtlIsNameInExpression @ 0x14030C360 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x14030C4E0 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x14030C5A0 (RtlpIsNameInExpressionPrivate.c)
 *     RtlRaiseException @ 0x14030D590 (RtlRaiseException.c)
 *     KiInitializeUserApc @ 0x14030F1D8 (KiInitializeUserApc.c)
 *     KeWaitForMultipleObjects @ 0x1403111A0 (KeWaitForMultipleObjects.c)
 *     KeReleaseSemaphore @ 0x140321430 (KeReleaseSemaphore.c)
 *     RtlRaiseStatus @ 0x1403217B0 (RtlRaiseStatus.c)
 *     RtlAreNamesEqual @ 0x140324840 (RtlAreNamesEqual.c)
 *     FsRtlPrivateLock @ 0x140327530 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140328630 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlAddEntry @ 0x14033AAB0 (FsRtlAddEntry.c)
 *     FsRtlInitializeLargeMcb @ 0x14034ABF0 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x14034AC60 (FsRtlInitializeBaseMcbEx.c)
 *     KiWaitForAllObjects @ 0x14034AEFC (KiWaitForAllObjects.c)
 *     FsRtlCancelNotify @ 0x14035E1C0 (FsRtlCancelNotify.c)
 *     CcPrepareMdlWrite @ 0x140369190 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14036B88C (CcMdlWriteComplete2.c)
 *     MiZeroPageCalibrate @ 0x1403AA5F0 (MiZeroPageCalibrate.c)
 *     CcZeroDataOnDisk @ 0x1403C1710 (CcZeroDataOnDisk.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1403C4EA0 (RtlpLookupPrimaryFunctionEntry.c)
 *     MmProbeAndLockSelectedPages @ 0x1403D53C0 (MmProbeAndLockSelectedPages.c)
 *     KeReleaseMutantEx @ 0x1404105DC (KeReleaseMutantEx.c)
 *     RtlpUnwindOpSlots @ 0x140464850 (RtlpUnwindOpSlots.c)
 *     CcReferenceFileOffset @ 0x1405380B0 (CcReferenceFileOffset.c)
 *     FsRtlAllocatePool @ 0x14053DB40 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithQuota @ 0x14053DB70 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x14053DBA0 (FsRtlAllocatePoolWithQuotaTag.c)
 *     FsRtlAllocatePoolWithTag @ 0x14053DBD0 (FsRtlAllocatePoolWithTag.c)
 *     FsRtlpPostStackOverflow @ 0x14053F434 (FsRtlpPostStackOverflow.c)
 *     DifExRaiseStatusWrapper @ 0x1405D95F0 (DifExRaiseStatusWrapper.c)
 *     _purecall @ 0x14060CEB0 (_purecall.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     CcMapAndCopyFromCache @ 0x1406F5C10 (CcMapAndCopyFromCache.c)
 *     NtQueryMultipleValueKey @ 0x14070DD60 (NtQueryMultipleValueKey.c)
 *     IopCreateFile @ 0x14073C690 (IopCreateFile.c)
 *     CcMdlRead @ 0x14073E9A0 (CcMdlRead.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748574 (MiMapLockedPagesInUserSpace.c)
 *     IopReadFile @ 0x14074C1C0 (IopReadFile.c)
 *     RtlRunOnceExecuteOnce @ 0x140757D90 (RtlRunOnceExecuteOnce.c)
 *     BuildQueryDirectoryIrp @ 0x1407658A0 (BuildQueryDirectoryIrp.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140767CE0 (IoCreateStreamFileObjectEx2.c)
 *     NtQueryEaFile @ 0x1407C9FC0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CBB90 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1407E7070 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E82F0 (NtWriteFileGather.c)
 *     NtSetUuidSeed @ 0x140850810 (NtSetUuidSeed.c)
 *     CmpInitCallbacks @ 0x140863F0C (CmpInitCallbacks.c)
 *     EtwpInitializeLastBranchTracing @ 0x140864FE8 (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeStackLookasideList @ 0x140865D74 (EtwpInitializeStackLookasideList.c)
 *     ExRaiseAccessViolation @ 0x140873DE0 (ExRaiseAccessViolation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945AC0 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140945F38 (IopSetFileObjectIosbRange.c)
 *     NtSetEaFile @ 0x14094AC60 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B270 (NtQueryQuotaInformationFile.c)
 *     ObpInitStackAndObjectTables @ 0x14097CF68 (ObpInitStackAndObjectTables.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00B60 (ExRaiseDatatypeMisalignment.c)
 *     PopEndMirroring @ 0x140AA2820 (PopEndMirroring.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140AAE008 (ExpAllocatePoolWithQuotaTag.c)
 *     ExAllocatePool3 @ 0x140AAE430 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     VerifierExAllocatePoolWithTag @ 0x140ABFFD0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePool @ 0x140AD08F0 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool2 @ 0x140AD0A10 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePool3 @ 0x140AD0B50 (VerifierExAllocatePool3.c)
 *     VerifierExAllocatePoolWithQuota @ 0x140AD0D00 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140AD0DD0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140AD0EB0 (VerifierExAllocatePoolWithTagPriority.c)
 *     VfHandlePoolAlloc @ 0x140AD0FE0 (VfHandlePoolAlloc.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AE3280 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140AE3480 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140AE3570 (VerifierMmProbeAndLockProcessPages.c)
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 *     MiInitializeDecayPfns @ 0x140B5F9E4 (MiInitializeDecayPfns.c)
 *     WheapInitializeEventing @ 0x140B66418 (WheapInitializeEventing.c)
 *     MiInitializeSystemPteTracker @ 0x140B6EC44 (MiInitializeSystemPteTracker.c)
 *     ExpWorkerFactoryInitialization @ 0x140B72530 (ExpWorkerFactoryInitialization.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140B91018 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1403217B0 (RtlRaiseStatus.c)
 *     RtlRaiseNoncontinuableException @ 0x1404297A0 (RtlRaiseNoncontinuableException.c)
 *     memset @ 0x140435A00 (memset.c)
 */

void __fastcall __noreturn RtlRaiseStatus(int a1)
{
  __int64 v2; // r8
  char v3; // bl
  unsigned int v4; // eax
  _DWORD v5[2]; // [rsp+20h] [rbp-578h] BYREF
  __int64 v6; // [rsp+28h] [rbp-570h]
  __int64 v7; // [rsp+30h] [rbp-568h]
  int v8; // [rsp+38h] [rbp-560h]
  _BYTE v9[124]; // [rsp+3Ch] [rbp-55Ch] BYREF
  _BYTE v10[1240]; // [rsp+C0h] [rbp-4D8h] BYREF

  memset(v9, 0, sizeof(v9));
  v6 = 0LL;
  v8 = 0;
  v7 = -1LL;
  v5[0] = a1;
  v3 = 1;
  v5[1] = 129;
  do
  {
    LOBYTE(v2) = v3;
    v4 = RtlRaiseNoncontinuableException(v5, v10, v2);
    --v3;
  }
  while ( !v3 );
  RtlRaiseStatus(v4);
}
