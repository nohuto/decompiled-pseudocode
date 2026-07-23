/*
 * XREFs of RtlEnterCriticalSection @ 0x180021B30
 * Callers:
 *     LdrRegisterDllNotification @ 0x180001F30 (LdrRegisterDllNotification.c)
 *     LdrpGetLoadAsEntry @ 0x1800089C4 (LdrpGetLoadAsEntry.c)
 *     LdrpCheckForRetryLoading @ 0x180010C40 (LdrpCheckForRetryLoading.c)
 *     LdrpWorkCallback @ 0x180011180 (LdrpWorkCallback.c)
 *     LdrpProcessWork @ 0x1800112B8 (LdrpProcessWork.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180011B40 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800128C4 (RtlpSetProcUserMachineLangList.c)
 *     RtlSetEnvironmentVar @ 0x180014C10 (RtlSetEnvironmentVar.c)
 *     RtlQueryEnvironmentVariable @ 0x18001EB90 (RtlQueryEnvironmentVariable.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F190 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpObtainLockedEnclave @ 0x180021F1C (LdrpObtainLockedEnclave.c)
 *     LdrShutdownThread @ 0x1800292E0 (LdrShutdownThread.c)
 *     RtlLockHeap @ 0x180029EC0 (RtlLockHeap.c)
 *     LdrpDrainWorkQueue @ 0x18002A48C (LdrpDrainWorkQueue.c)
 *     LdrpDynamicShimModule @ 0x18002E624 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18002ED90 (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x18002F8F8 (LdrpSendDllNotifications.c)
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180042250 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 *     RtlpFreeUserBlock @ 0x180047A68 (RtlpFreeUserBlock.c)
 *     RtlpMoveHeapBetweenLists @ 0x180048C64 (RtlpMoveHeapBetweenLists.c)
 *     RtlProtectHeap @ 0x180049120 (RtlProtectHeap.c)
 *     RtlpActivateLowFragmentationHeap @ 0x18004997C (RtlpActivateLowFragmentationHeap.c)
 *     RtlExitUserProcess @ 0x180051160 (RtlExitUserProcess.c)
 *     LdrpAcquireLoaderLock @ 0x180051228 (LdrpAcquireLoaderLock.c)
 *     LdrpDropLastInProgressCount @ 0x180052174 (LdrpDropLastInProgressCount.c)
 *     RtlCreateProcessParametersInternal @ 0x180057E10 (RtlCreateProcessParametersInternal.c)
 *     RtlCreateEnvironmentEx @ 0x180058420 (RtlCreateEnvironmentEx.c)
 *     EtwpSwitchBuffer @ 0x18005A86C (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x18005B2FC (EtwpFlushActiveBuffers.c)
 *     EtwpAllocateFreeBuffers @ 0x18005CF3C (EtwpAllocateFreeBuffers.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18006372C (RtlpAllocateUserBlockFromHeap.c)
 *     RtlSleepConditionVariableCS @ 0x1800692A0 (RtlSleepConditionVariableCS.c)
 *     RtlpComputePath @ 0x18006A470 (RtlpComputePath.c)
 *     LdrpUnloadNode @ 0x18006B520 (LdrpUnloadNode.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18006E06C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSetProcessPreferredUILanguages @ 0x18006FBE0 (RtlSetProcessPreferredUILanguages.c)
 *     LdrAddLoadAsDataTable @ 0x180070A50 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180071FE0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpQueueWork @ 0x180073560 (LdrpQueueWork.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180073660 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlGetUserInfoHeap @ 0x180076510 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180076940 (RtlSetUserValueHeap.c)
 *     RtlpEnumProcessHeaps @ 0x180077A4C (RtlpEnumProcessHeaps.c)
 *     LdrpLoadShimEngine @ 0x180079E58 (LdrpLoadShimEngine.c)
 *     RtlSetCurrentDirectory_U @ 0x18007BAE0 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007BE18 (RtlpReferenceCurrentDirectory.c)
 *     RtlSetHeapInformation @ 0x18007D200 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007D2E4 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlCreateTagHeap @ 0x180080060 (RtlCreateTagHeap.c)
 *     RtlAcquirePebLock @ 0x180080190 (RtlAcquirePebLock.c)
 *     RtlpSetProcMergedLangList @ 0x180082AF0 (RtlpSetProcMergedLangList.c)
 *     RtlValidateHeap @ 0x1800873F0 (RtlValidateHeap.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008AC4C (RtlUpdateProcessRegistryInfo.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18008B6C0 (RtlpQueryExtendedHeapInformation.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008C120 (RtlGetProcessPreferredUILanguages.c)
 *     LdrpCorInitialize @ 0x18008E254 (LdrpCorInitialize.c)
 *     RtlSetCurrentEnvironment @ 0x18008E750 (RtlSetCurrentEnvironment.c)
 *     AVrfDllLoadNotification @ 0x18008E9AC (AVrfDllLoadNotification.c)
 *     RtlPrepareForProcessCloning @ 0x18009EA60 (RtlPrepareForProcessCloning.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800D85AC (LdrpCreateSoftwareEnclave.c)
 *     LdrpDeleteEnclave @ 0x1800D869C (LdrpDeleteEnclave.c)
 *     RtlSetEnvironmentStrings @ 0x1800D8D40 (RtlSetEnvironmentStrings.c)
 *     LdrUnregisterDllNotification @ 0x1800D9CB0 (LdrUnregisterDllNotification.c)
 *     RtlCloneUserProcess @ 0x1800E2930 (RtlCloneUserProcess.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36A0 (RtlQueryProcessHeapInformation.c)
 *     AVrfDllUnloadNotification @ 0x1800E5040 (AVrfDllUnloadNotification.c)
 *     AVrfInternalHeapFreeNotification @ 0x1800E5AD0 (AVrfInternalHeapFreeNotification.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800EAEEC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800EB294 (RtlpEnsureLiveDeadListsInitialized.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800EB32C (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800EB464 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FBD00 (RtlpCleanupRegistryKeys.c)
 *     RtlCompactHeap @ 0x1800FE720 (RtlCompactHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FEBF0 (RtlLockHeapManagerForCloning.c)
 *     RtlQueryTagHeap @ 0x1800FEE20 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800FF15C (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800FF300 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x180103360 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x180103CC0 (RtlpSetupExtendedBlock.c)
 *     RtlDebugAllocateHeap @ 0x180105270 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180105774 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180105D3C (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1801060A0 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180106534 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106858 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180106B14 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1801071D8 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180107524 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180107838 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x180107B78 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x180110760 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1801109A0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x180110A80 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x180110B00 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x180110B50 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x180125380 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlpEnterCriticalSectionContended @ 0x180021B80 (RtlpEnterCriticalSectionContended.c)
 */

NTSTATUS __cdecl RtlEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  void *UniqueThread; // rax
  NTSTATUS result; // eax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset(&CriticalSection->LockCount, 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    CriticalSection->OwningThread = UniqueThread;
    result = 0;
    CriticalSection->RecursionCount = 1;
  }
  else if ( CriticalSection->OwningThread == UniqueThread )
  {
    ++CriticalSection->RecursionCount;
    return 0;
  }
  else
  {
    return RtlpEnterCriticalSectionContended();
  }
  return result;
}
