/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x140ACD2A4
 * Callers:
 *     VfFailDeviceNode @ 0x1403B4290 (VfFailDeviceNode.c)
 *     VfFailDriver @ 0x1405CE940 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x1405CE970 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x1405CFA04 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405CFBE8 (MdlInvariantPreProcessing1.c)
 *     VerifierFreeTrackedPool @ 0x1405D00D0 (VerifierFreeTrackedPool.c)
 *     VfReportIssueWithOptions @ 0x1405D0270 (VfReportIssueWithOptions.c)
 *     VfMiscCheckKernelAddress @ 0x1405D2A08 (VfMiscCheckKernelAddress.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x140AC0866 (VfIrpDatabaseCheckExFreePool.c)
 *     IovCompleteRequest @ 0x140AC147C (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x140AC16C0 (IovFreeIrpPrivate.c)
 *     IovInitializeTimer @ 0x140AC1770 (IovInitializeTimer.c)
 *     VfAllocateCommonBufferEx @ 0x140AC5130 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140AC52A0 (VfAllocateCommonBufferWithBounds.c)
 *     VerifierIoAllocateIrp @ 0x140ACAD20 (VerifierIoAllocateIrp.c)
 *     VerifierIoAllocateIrpEx @ 0x140ACAE10 (VerifierIoAllocateIrpEx.c)
 *     VerifierPortIoAllocateIrp @ 0x140ACB0C0 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x140ACB224 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140ACB2FC (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x140ACB34C (VfIoCompletionCheckState.c)
 *     VfTargetEtwUnregister @ 0x140ACB754 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140ACBC70 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140ACBCEC (ViTargetRemovingCheckEtwWmi.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140ACDDF0 (ViIrpCheckKernelAddressForIrp.c)
 *     VfHandlePoolAlloc @ 0x140AD0FD0 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140AD141C (ViFreeTrackedPool.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x140AD2040 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x140AD24E0 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140AD2640 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140AD288C (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140AD28BC (VfRemLockReportBadReleaseTag.c)
 *     ViErrorFinishReport @ 0x140AD3744 (ViErrorFinishReport.c)
 *     VfCheckUserHandle @ 0x140AD3D04 (VfCheckUserHandle.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140AD48D0 (VfZwNotifyChangeKey_Entry.c)
 *     ViZwCheckApcRequirement @ 0x140AD4EF8 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140AD4FA4 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140AD502C (ViZwCheckVirtualAddress.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140AD5120 (ViShutdownWatchdogExecuteDpc.c)
 *     VfPoolCheckForLeaks @ 0x140ADA0AC (VfPoolCheckForLeaks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140ADD3A0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViWdIrpTimedOut @ 0x140ADE40C (ViWdIrpTimedOut.c)
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140ADFB30 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140ADFBA0 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140ADFCD0 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140ADFD20 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140ADFDB0 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140ADFF20 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLock_Entry @ 0x140ADFF70 (VfMiscKeReleaseInStackQueuedSpinLock_Entry.c)
 *     VfMiscKeReleaseSpinLock_Entry @ 0x140AE0030 (VfMiscKeReleaseSpinLock_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140AE0100 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140AE0220 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140AE0260 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140AE02D0 (VfMiscMmUnmapLockedPages_Entry.c)
 *     VfMiscObReferenceObjectByHandle_Exit @ 0x140AE0550 (VfMiscObReferenceObjectByHandle_Exit.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140AE0600 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObject_Exit @ 0x140AE0670 (VfMiscObfReferenceObject_Exit.c)
 *     ViMiscCheckKeLowerIrql @ 0x140AE1328 (ViMiscCheckKeLowerIrql.c)
 *     ViMiscCheckKeRaiseIrql @ 0x140AE13CC (ViMiscCheckKeRaiseIrql.c)
 *     ViMiscCheckResourceAcquire @ 0x140AE143C (ViMiscCheckResourceAcquire.c)
 *     ViMiscCheckResourceRelease @ 0x140AE14DC (ViMiscCheckResourceRelease.c)
 *     ViMiscEnforceRule @ 0x140AE1548 (ViMiscEnforceRule.c)
 *     ViMiscExCheckAPCsDisabled @ 0x140AE1594 (ViMiscExCheckAPCsDisabled.c)
 *     ViMiscValidateKeWaitUsage @ 0x140AE1600 (ViMiscValidateKeWaitUsage.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AE1720 (ViMiscValidateSynchronizationObject.c)
 *     VfCheckForLookaside @ 0x140AE2198 (VfCheckForLookaside.c)
 *     VfLookasideAdd @ 0x140AE2260 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140AE237C (VfLookasideDelete.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140AE2460 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140AE25E0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140AE2720 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140AE2840 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140AE2990 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140AE2B10 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140AE2C20 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmMapIoSpace @ 0x140AE3010 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140AE31A0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AE3270 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140AE3470 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140AE3560 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x140AE36A0 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140AE37E0 (VerifierMmUnmapIoSpace.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x140AE3A78 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x140AE3B70 (ViMmValidateIrql.c)
 *     VfCheckForResource @ 0x140AE43AC (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AE44F0 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AE4604 (VfTrackResource.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140AE4B78 (ViCtxCheckAndReleaseIsrState.c)
 *     ExAllocatePoolSanityChecks @ 0x140AE7C9C (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x140AE7E1C (ExFreePoolSanityChecks.c)
 *     MmCheckMdlPages @ 0x140AE8284 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140AE838C (MmCheckMapIoSpace.c)
 *     ViIrqlKeLeaveCriticalRegion_Entry @ 0x140AE8570 (ViIrqlKeLeaveCriticalRegion_Entry.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CarInitializeRuleViolationDetails @ 0x1405D42D0 (CarInitializeRuleViolationDetails.c)
 *     CarQueryReportActionForTriage @ 0x1405D44D0 (CarQueryReportActionForTriage.c)
 *     CarReportRuleViolationForTriage @ 0x1405D4930 (CarReportRuleViolationForTriage.c)
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
