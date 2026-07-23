/*
 * XREFs of RtlEnterCriticalSection @ 0x180021D10
 * Callers:
 *     LdrRegisterDllNotification @ 0x180001F00 (LdrRegisterDllNotification.c)
 *     LdrRemoveLoadAsDataTable @ 0x180008560 (LdrRemoveLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x1800088C0 (LdrAddLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x180008AE0 (LdrpGetLoadAsEntry.c)
 *     LdrpCheckForRetryLoading @ 0x180010E50 (LdrpCheckForRetryLoading.c)
 *     LdrpWorkCallback @ 0x180011390 (LdrpWorkCallback.c)
 *     LdrpProcessWork @ 0x1800114C8 (LdrpProcessWork.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180011D50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x180012AD4 (RtlpSetProcUserMachineLangList.c)
 *     RtlSetEnvironmentVar @ 0x180014E20 (RtlSetEnvironmentVar.c)
 *     RtlQueryEnvironmentVariable @ 0x18001ED70 (RtlQueryEnvironmentVariable.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F370 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpObtainLockedEnclave @ 0x1800220FC (LdrpObtainLockedEnclave.c)
 *     LdrShutdownThread @ 0x1800294B0 (LdrShutdownThread.c)
 *     RtlLockHeap @ 0x18002A090 (RtlLockHeap.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 *     LdrpDynamicShimModule @ 0x18002E7F4 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18002EF60 (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x18002FAC8 (LdrpSendDllNotifications.c)
 *     RtlpFreeHeap @ 0x1800397E0 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800425F0 (RtlpReAllocateHeap.c)
 *     RtlpFreeUserBlock @ 0x180047BC8 (RtlpFreeUserBlock.c)
 *     RtlpMoveHeapBetweenLists @ 0x180048DC4 (RtlpMoveHeapBetweenLists.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180049ADC (RtlpActivateLowFragmentationHeap.c)
 *     RtlExitUserProcess @ 0x1800512C0 (RtlExitUserProcess.c)
 *     LdrpAcquireLoaderLock @ 0x180051388 (LdrpAcquireLoaderLock.c)
 *     LdrpDropLastInProgressCount @ 0x1800522D4 (LdrpDropLastInProgressCount.c)
 *     RtlCreateProcessParametersInternal @ 0x180057F70 (RtlCreateProcessParametersInternal.c)
 *     RtlCreateEnvironmentEx @ 0x180058580 (RtlCreateEnvironmentEx.c)
 *     EtwpSwitchBuffer @ 0x18005D864 (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x18005E2FC (EtwpFlushActiveBuffers.c)
 *     EtwpAllocateFreeBuffers @ 0x18005FDCC (EtwpAllocateFreeBuffers.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18006385C (RtlpAllocateUserBlockFromHeap.c)
 *     RtlSleepConditionVariableCS @ 0x1800692C0 (RtlSleepConditionVariableCS.c)
 *     RtlpComputePath @ 0x18006A490 (RtlpComputePath.c)
 *     LdrpUnloadNode @ 0x18006B540 (LdrpUnloadNode.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18006E06C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSetProcessPreferredUILanguages @ 0x18006FBE0 (RtlSetProcessPreferredUILanguages.c)
 *     LdrpQueueWork @ 0x180072EF0 (LdrpQueueWork.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180072FF0 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlGetUserInfoHeap @ 0x180075EA0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x1800762D0 (RtlSetUserValueHeap.c)
 *     RtlpEnumProcessHeaps @ 0x1800773DC (RtlpEnumProcessHeaps.c)
 *     LdrpLoadShimEngine @ 0x1800797E8 (LdrpLoadShimEngine.c)
 *     RtlSetCurrentDirectory_U @ 0x18007B470 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007B7A8 (RtlpReferenceCurrentDirectory.c)
 *     RtlSetHeapInformation @ 0x18007CB90 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007CC74 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlCreateTagHeap @ 0x18007F9F0 (RtlCreateTagHeap.c)
 *     RtlAcquirePebLock @ 0x18007FB20 (RtlAcquirePebLock.c)
 *     RtlpSetProcMergedLangList @ 0x180082480 (RtlpSetProcMergedLangList.c)
 *     RtlValidateHeap @ 0x180086BF0 (RtlValidateHeap.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008A44C (RtlUpdateProcessRegistryInfo.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18008AEC0 (RtlpQueryExtendedHeapInformation.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008B920 (RtlGetProcessPreferredUILanguages.c)
 *     LdrpCorInitialize @ 0x18008DA54 (LdrpCorInitialize.c)
 *     RtlSetCurrentEnvironment @ 0x18008DF50 (RtlSetCurrentEnvironment.c)
 *     AVrfDllLoadNotification @ 0x18008E1AC (AVrfDllLoadNotification.c)
 *     RtlPrepareForProcessCloning @ 0x18009E120 (RtlPrepareForProcessCloning.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800D8BFC (LdrpCreateSoftwareEnclave.c)
 *     LdrpDeleteEnclave @ 0x1800D8CEC (LdrpDeleteEnclave.c)
 *     RtlSetEnvironmentStrings @ 0x1800D9390 (RtlSetEnvironmentStrings.c)
 *     LdrUnregisterDllNotification @ 0x1800DA300 (LdrUnregisterDllNotification.c)
 *     RtlCloneUserProcess @ 0x1800E1600 (RtlCloneUserProcess.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E2370 (RtlQueryProcessHeapInformation.c)
 *     AVrfDllUnloadNotification @ 0x1800E3D10 (AVrfDllUnloadNotification.c)
 *     AVrfInternalHeapFreeNotification @ 0x1800E47A0 (AVrfInternalHeapFreeNotification.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800E9BBC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800E9F64 (RtlpEnsureLiveDeadListsInitialized.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800E9FFC (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800EA134 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FA8F0 (RtlpCleanupRegistryKeys.c)
 *     RtlCompactHeap @ 0x1800FD310 (RtlCompactHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FD7E0 (RtlLockHeapManagerForCloning.c)
 *     RtlQueryTagHeap @ 0x1800FDA10 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800FDD4C (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800FDEF0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x180101F50 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1801028B0 (RtlpSetupExtendedBlock.c)
 *     RtlDebugAllocateHeap @ 0x180103E60 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180104364 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x18010492C (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180104C90 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180105124 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180105448 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180105704 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180105DC8 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180106114 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180106428 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x180106768 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x18010F2E0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x18010F520 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x18010F600 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x18010F680 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x18010F6D0 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x180123F00 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlpEnterCriticalSectionContended @ 0x180021D60 (RtlpEnterCriticalSectionContended.c)
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
