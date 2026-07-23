/*
 * XREFs of RtlLeaveCriticalSection @ 0x180027020
 * Callers:
 *     LdrRegisterDllNotification @ 0x180001F30 (LdrRegisterDllNotification.c)
 *     LdrpGetLoadAsEntry @ 0x1800089C4 (LdrpGetLoadAsEntry.c)
 *     LdrpCheckForRetryLoading @ 0x180010C40 (LdrpCheckForRetryLoading.c)
 *     LdrpWorkCallback @ 0x180011180 (LdrpWorkCallback.c)
 *     LdrpProcessWork @ 0x1800112B8 (LdrpProcessWork.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180011B40 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800128C4 (RtlpSetProcUserMachineLangList.c)
 *     RtlSetEnvironmentVar @ 0x180014C10 (RtlSetEnvironmentVar.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BBE0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x18001C0C0 (RtlGetFullPathName_Ustr.c)
 *     RtlQueryEnvironmentVariable @ 0x18001EB90 (RtlQueryEnvironmentVariable.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F190 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpObtainLockedEnclave @ 0x180021F1C (LdrpObtainLockedEnclave.c)
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180026F50 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrShutdownThread @ 0x1800292E0 (LdrShutdownThread.c)
 *     LdrpDrainWorkQueue @ 0x18002A48C (LdrpDrainWorkQueue.c)
 *     LdrpDynamicShimModule @ 0x18002E624 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18002ED90 (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x18002F8F8 (LdrpSendDllNotifications.c)
 *     TppCallbackEpilog @ 0x18003620C (TppCallbackEpilog.c)
 *     LdrpReleaseLoaderLock @ 0x180050FC4 (LdrpReleaseLoaderLock.c)
 *     RtlExitUserProcess @ 0x180051160 (RtlExitUserProcess.c)
 *     LdrpDropLastInProgressCount @ 0x180052174 (LdrpDropLastInProgressCount.c)
 *     RtlCreateProcessParametersInternal @ 0x180057E10 (RtlCreateProcessParametersInternal.c)
 *     RtlCreateEnvironmentEx @ 0x180058420 (RtlCreateEnvironmentEx.c)
 *     EtwpSwitchBuffer @ 0x18005A86C (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x18005B2FC (EtwpFlushActiveBuffers.c)
 *     EtwpAllocateFreeBuffers @ 0x18005CF3C (EtwpAllocateFreeBuffers.c)
 *     RtlSleepConditionVariableCS @ 0x1800692A0 (RtlSleepConditionVariableCS.c)
 *     RtlpComputePath @ 0x18006A470 (RtlpComputePath.c)
 *     LdrpUnloadNode @ 0x18006B520 (LdrpUnloadNode.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18006E06C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSetProcessPreferredUILanguages @ 0x18006FBE0 (RtlSetProcessPreferredUILanguages.c)
 *     LdrAddLoadAsDataTable @ 0x180070A50 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180071FE0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpQueueWork @ 0x180073560 (LdrpQueueWork.c)
 *     LdrpLoadShimEngine @ 0x180079E58 (LdrpLoadShimEngine.c)
 *     RtlSetCurrentDirectory_U @ 0x18007BAE0 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x18007BC80 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x18007BD30 (RtlGetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007BE18 (RtlpReferenceCurrentDirectory.c)
 *     RtlReleasePebLock @ 0x18007E060 (RtlReleasePebLock.c)
 *     RtlpSetProcMergedLangList @ 0x180082AF0 (RtlpSetProcMergedLangList.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008AC4C (RtlUpdateProcessRegistryInfo.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18008B6C0 (RtlpQueryExtendedHeapInformation.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008C120 (RtlGetProcessPreferredUILanguages.c)
 *     LdrpCorInitialize @ 0x18008E254 (LdrpCorInitialize.c)
 *     RtlSetCurrentEnvironment @ 0x18008E750 (RtlSetCurrentEnvironment.c)
 *     AVrfDllLoadNotification @ 0x18008E9AC (AVrfDllLoadNotification.c)
 *     RtlCompleteProcessCloning @ 0x18009E920 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009EA60 (RtlPrepareForProcessCloning.c)
 *     LdrpIssueEnclaveCall @ 0x1800AF2E0 (LdrpIssueEnclaveCall.c)
 *     LdrDeleteEnclave @ 0x1800D8030 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800D80C0 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800D81D0 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800D8270 (LdrLoadEnclaveModule.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800D85AC (LdrpCreateSoftwareEnclave.c)
 *     LdrpDeleteEnclave @ 0x1800D869C (LdrpDeleteEnclave.c)
 *     RtlSetEnvironmentStrings @ 0x1800D8D40 (RtlSetEnvironmentStrings.c)
 *     LdrUnregisterDllNotification @ 0x1800D9CB0 (LdrUnregisterDllNotification.c)
 *     LdrpCompleteProcessCloning @ 0x1800E0754 (LdrpCompleteProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E2930 (RtlCloneUserProcess.c)
 *     AVrfDllUnloadNotification @ 0x1800E5040 (AVrfDllUnloadNotification.c)
 *     AVrfInternalHeapFreeNotification @ 0x1800E5AD0 (AVrfInternalHeapFreeNotification.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800EAEEC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800EB294 (RtlpEnsureLiveDeadListsInitialized.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800EB32C (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800EB464 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FBD00 (RtlpCleanupRegistryKeys.c)
 *     RtlTraceDatabaseAdd @ 0x180110760 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1801109A0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x180110A80 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x180110B30 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x180110B50 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x180125380 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

NTSTATUS __cdecl RtlLeaveCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  signed __int32 LockCount; // esi
  void *LockSemaphore; // r9
  unsigned int v6; // ecx
  int v7; // r8d
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int i; // r8d
  int v11; // eax
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( CriticalSection->RecursionCount-- != 1 )
    return 0;
  CriticalSection->OwningThread = 0LL;
  LockCount = _InterlockedCompareExchange(&CriticalSection->LockCount, -1, -2);
  if ( LockCount == -2 )
    return 0;
  if ( (CriticalSection->LockCount & 1) != 0 )
    RtlpNotOwnerCriticalSection(CriticalSection);
  LockSemaphore = CriticalSection->LockSemaphore;
  if ( !LockSemaphore )
    LockSemaphore = (void *)RtlpCreateDeferredCriticalSectionEvent(CriticalSection);
  v6 = 0;
  while ( LockCount != _InterlockedCompareExchange(
                         &CriticalSection->LockCount,
                         (LockCount & 2 | 1) + LockCount,
                         LockCount) )
  {
    v7 = v6;
    if ( v6 )
    {
      if ( v6 < 0x1FFF )
        v7 = 2 * v6;
    }
    else
    {
      if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
        goto LABEL_18;
      v7 = 64;
    }
    v6 = v7;
    v8 = __rdtsc();
    v9 = 10 * (((v7 - 1) & (unsigned int)v8) + v7) / MEMORY[0x7FFE02D6];
    for ( i = 0; i < v9; ++i )
      _mm_pause();
LABEL_18:
    _m_prefetchw(&CriticalSection->LockCount);
    LockCount = CriticalSection->LockCount;
  }
  if ( (LockCount & 2) != 0 )
  {
    if ( LockSemaphore == (void *)-1LL )
    {
      _InterlockedOr(v12, 0);
      RtlpWakeByAddress(&CriticalSection->LockCount, 0LL);
    }
    else
    {
      v11 = ZwSetEvent(LockSemaphore, 0LL);
      if ( v11 < 0 )
        RtlRaiseStatus(v11);
    }
  }
  return 0;
}
