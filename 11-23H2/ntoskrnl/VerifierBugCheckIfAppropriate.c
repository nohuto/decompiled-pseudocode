/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x140ACD2B4
 * Callers:
 *     VfFailDeviceNode @ 0x1403B40B0 (VfFailDeviceNode.c)
 *     VfFailDriver @ 0x1405CE3D0 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x1405CE400 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x1405CF494 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405CF678 (MdlInvariantPreProcessing1.c)
 *     VerifierFreeTrackedPool @ 0x1405CFB60 (VerifierFreeTrackedPool.c)
 *     VfReportIssueWithOptions @ 0x1405CFD00 (VfReportIssueWithOptions.c)
 *     VfMiscCheckKernelAddress @ 0x1405D2498 (VfMiscCheckKernelAddress.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x140AC0876 (VfIrpDatabaseCheckExFreePool.c)
 *     IovCompleteRequest @ 0x140AC148C (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x140AC16D0 (IovFreeIrpPrivate.c)
 *     IovInitializeTimer @ 0x140AC1780 (IovInitializeTimer.c)
 *     VfAllocateCommonBufferEx @ 0x140AC5140 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140AC52B0 (VfAllocateCommonBufferWithBounds.c)
 *     VerifierIoAllocateIrp @ 0x140ACAD30 (VerifierIoAllocateIrp.c)
 *     VerifierIoAllocateIrpEx @ 0x140ACAE20 (VerifierIoAllocateIrpEx.c)
 *     VerifierPortIoAllocateIrp @ 0x140ACB0D0 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x140ACB234 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140ACB30C (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x140ACB35C (VfIoCompletionCheckState.c)
 *     VfTargetEtwUnregister @ 0x140ACB764 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140ACBC80 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140ACBCFC (ViTargetRemovingCheckEtwWmi.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140ACDE00 (ViIrpCheckKernelAddressForIrp.c)
 *     VfHandlePoolAlloc @ 0x140AD0FE0 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140AD142C (ViFreeTrackedPool.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x140AD2050 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x140AD24F0 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140AD2650 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140AD289C (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140AD28CC (VfRemLockReportBadReleaseTag.c)
 *     ViErrorFinishReport @ 0x140AD3754 (ViErrorFinishReport.c)
 *     VfCheckUserHandle @ 0x140AD3D14 (VfCheckUserHandle.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140AD48E0 (VfZwNotifyChangeKey_Entry.c)
 *     ViZwCheckApcRequirement @ 0x140AD4F08 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140AD4FB4 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140AD503C (ViZwCheckVirtualAddress.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140AD5130 (ViShutdownWatchdogExecuteDpc.c)
 *     VfPoolCheckForLeaks @ 0x140ADA0BC (VfPoolCheckForLeaks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140ADD3B0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViWdIrpTimedOut @ 0x140ADE41C (ViWdIrpTimedOut.c)
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140ADFB40 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140ADFBB0 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140ADFCE0 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140ADFD30 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140ADFDC0 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140ADFF30 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLock_Entry @ 0x140ADFF80 (VfMiscKeReleaseInStackQueuedSpinLock_Entry.c)
 *     VfMiscKeReleaseSpinLock_Entry @ 0x140AE0040 (VfMiscKeReleaseSpinLock_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140AE0110 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140AE0230 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140AE0270 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140AE02E0 (VfMiscMmUnmapLockedPages_Entry.c)
 *     VfMiscObReferenceObjectByHandle_Exit @ 0x140AE0560 (VfMiscObReferenceObjectByHandle_Exit.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140AE0610 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObject_Exit @ 0x140AE0680 (VfMiscObfReferenceObject_Exit.c)
 *     ViMiscCheckKeLowerIrql @ 0x140AE1338 (ViMiscCheckKeLowerIrql.c)
 *     ViMiscCheckKeRaiseIrql @ 0x140AE13DC (ViMiscCheckKeRaiseIrql.c)
 *     ViMiscCheckResourceAcquire @ 0x140AE144C (ViMiscCheckResourceAcquire.c)
 *     ViMiscCheckResourceRelease @ 0x140AE14EC (ViMiscCheckResourceRelease.c)
 *     ViMiscEnforceRule @ 0x140AE1558 (ViMiscEnforceRule.c)
 *     ViMiscExCheckAPCsDisabled @ 0x140AE15A4 (ViMiscExCheckAPCsDisabled.c)
 *     ViMiscValidateKeWaitUsage @ 0x140AE1610 (ViMiscValidateKeWaitUsage.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AE1730 (ViMiscValidateSynchronizationObject.c)
 *     VfCheckForLookaside @ 0x140AE21A8 (VfCheckForLookaside.c)
 *     VfLookasideAdd @ 0x140AE2270 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140AE238C (VfLookasideDelete.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140AE2470 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140AE25F0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140AE2730 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140AE2850 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140AE29A0 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140AE2B20 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140AE2C30 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmMapIoSpace @ 0x140AE3020 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140AE31B0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AE3280 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140AE3480 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140AE3570 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x140AE36B0 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140AE37F0 (VerifierMmUnmapIoSpace.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x140AE3A88 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x140AE3B80 (ViMmValidateIrql.c)
 *     VfCheckForResource @ 0x140AE43BC (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AE4500 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AE4614 (VfTrackResource.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140AE4B88 (ViCtxCheckAndReleaseIsrState.c)
 *     ExAllocatePoolSanityChecks @ 0x140AE7CAC (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x140AE7E2C (ExFreePoolSanityChecks.c)
 *     MmCheckMdlPages @ 0x140AE8294 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140AE839C (MmCheckMapIoSpace.c)
 *     ViIrqlKeLeaveCriticalRegion_Entry @ 0x140AE8580 (ViIrqlKeLeaveCriticalRegion_Entry.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     memset @ 0x140435A00 (memset.c)
 *     CarInitializeRuleViolationDetails @ 0x1405D3D60 (CarInitializeRuleViolationDetails.c)
 *     CarQueryReportActionForTriage @ 0x1405D3F60 (CarQueryReportActionForTriage.c)
 *     CarReportRuleViolationForTriage @ 0x1405D43C0 (CarReportRuleViolationForTriage.c)
 */

__int64 __fastcall VerifierBugCheckIfAppropriate(
        ULONG BugCheckCode,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 BugCheckParameter4)
{
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  unsigned int v11; // edx
  __int64 *v12; // rcx
  __int64 v13; // rcx
  _DWORD v14[4]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v15[10]; // [rsp+40h] [rbp-58h] BYREF

  memset(v15, 0, 0x48uLL);
  CurrentIrql = KeGetCurrentIrql();
  result = CarInitializeRuleViolationDetails(v15);
  if ( (VfRuleClasses & 0x400000) == 0 || CurrentIrql <= 2u )
  {
    v11 = 0;
    v12 = ViVerifierBugcheckAttributes;
    while ( *(_DWORD *)v12 != BugCheckCode || *((_DWORD *)v12 + 1) != BugCheckParameter1 )
    {
      ++v11;
      v12 = (__int64 *)((char *)v12 + 12);
      if ( v11 >= 0xD )
        goto LABEL_7;
    }
    if ( VfVerifyMode < *((_DWORD *)v12 + 2) )
    {
      v13 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckLogIndex, 1u) + 1) & 0xF);
      result = BugCheckParameter4;
      *((_QWORD *)&ViBugcheckLog + v13 + 4) = BugCheckParameter4;
      *((_DWORD *)&ViBugcheckLog + 2 * v13) = BugCheckCode;
      *((_QWORD *)&ViBugcheckLog + v13 + 1) = BugCheckParameter1;
      *((_QWORD *)&ViBugcheckLog + v13 + 2) = BugCheckParameter2;
      *((_QWORD *)&ViBugcheckLog + v13 + 3) = BugCheckParameter3;
      return result;
    }
LABEL_7:
    if ( CurrentIrql > 2u
      || ViLegacyVolatile
      || (int)CarQueryReportActionForTriage(BugCheckCode, BugCheckParameter1, v14) < 0 )
    {
      KeBugCheckEx(BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
    }
    v15[2] = BugCheckParameter4;
    v15[0] = BugCheckParameter2;
    v15[1] = BugCheckParameter3;
    return CarReportRuleViolationForTriage(BugCheckCode, (unsigned int)BugCheckParameter1, (__int64)v15);
  }
  return result;
}
