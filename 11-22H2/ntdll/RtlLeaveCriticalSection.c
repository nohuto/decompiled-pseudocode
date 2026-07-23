/*
 * XREFs of RtlLeaveCriticalSection @ 0x1800271F0
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
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BDC0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x18001C2A0 (RtlGetFullPathName_Ustr.c)
 *     RtlQueryEnvironmentVariable @ 0x18001ED70 (RtlQueryEnvironmentVariable.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F370 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpObtainLockedEnclave @ 0x1800220FC (LdrpObtainLockedEnclave.c)
 *     LdrGetProcedureAddressForCaller @ 0x180022190 (LdrGetProcedureAddressForCaller.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800270A0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrShutdownThread @ 0x1800294B0 (LdrShutdownThread.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 *     LdrpDynamicShimModule @ 0x18002E7F4 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18002EF60 (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x18002FAC8 (LdrpSendDllNotifications.c)
 *     TppCallbackEpilog @ 0x18003636C (TppCallbackEpilog.c)
 *     LdrpReleaseLoaderLock @ 0x180051124 (LdrpReleaseLoaderLock.c)
 *     RtlExitUserProcess @ 0x1800512C0 (RtlExitUserProcess.c)
 *     LdrpDropLastInProgressCount @ 0x1800522D4 (LdrpDropLastInProgressCount.c)
 *     RtlCreateProcessParametersInternal @ 0x180057F70 (RtlCreateProcessParametersInternal.c)
 *     RtlCreateEnvironmentEx @ 0x180058580 (RtlCreateEnvironmentEx.c)
 *     EtwpSwitchBuffer @ 0x18005D864 (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x18005E2FC (EtwpFlushActiveBuffers.c)
 *     EtwpAllocateFreeBuffers @ 0x18005FDCC (EtwpAllocateFreeBuffers.c)
 *     RtlSleepConditionVariableCS @ 0x1800692C0 (RtlSleepConditionVariableCS.c)
 *     RtlpComputePath @ 0x18006A490 (RtlpComputePath.c)
 *     LdrpUnloadNode @ 0x18006B540 (LdrpUnloadNode.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18006E06C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSetProcessPreferredUILanguages @ 0x18006FBE0 (RtlSetProcessPreferredUILanguages.c)
 *     LdrpQueueWork @ 0x180072EF0 (LdrpQueueWork.c)
 *     LdrpLoadShimEngine @ 0x1800797E8 (LdrpLoadShimEngine.c)
 *     RtlSetCurrentDirectory_U @ 0x18007B470 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x18007B610 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x18007B6C0 (RtlGetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007B7A8 (RtlpReferenceCurrentDirectory.c)
 *     RtlReleasePebLock @ 0x18007D9F0 (RtlReleasePebLock.c)
 *     RtlpSetProcMergedLangList @ 0x180082480 (RtlpSetProcMergedLangList.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008A44C (RtlUpdateProcessRegistryInfo.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18008AEC0 (RtlpQueryExtendedHeapInformation.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008B920 (RtlGetProcessPreferredUILanguages.c)
 *     LdrpCorInitialize @ 0x18008DA54 (LdrpCorInitialize.c)
 *     RtlSetCurrentEnvironment @ 0x18008DF50 (RtlSetCurrentEnvironment.c)
 *     AVrfDllLoadNotification @ 0x18008E1AC (AVrfDllLoadNotification.c)
 *     RtlCompleteProcessCloning @ 0x18009DFE0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009E120 (RtlPrepareForProcessCloning.c)
 *     LdrpIssueEnclaveCall @ 0x1800AD210 (LdrpIssueEnclaveCall.c)
 *     LdrDeleteEnclave @ 0x1800D8680 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800D8710 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800D8820 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800D88C0 (LdrLoadEnclaveModule.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800D8BFC (LdrpCreateSoftwareEnclave.c)
 *     LdrpDeleteEnclave @ 0x1800D8CEC (LdrpDeleteEnclave.c)
 *     RtlSetEnvironmentStrings @ 0x1800D9390 (RtlSetEnvironmentStrings.c)
 *     LdrUnregisterDllNotification @ 0x1800DA300 (LdrUnregisterDllNotification.c)
 *     LdrpCompleteProcessCloning @ 0x1800DF424 (LdrpCompleteProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E1600 (RtlCloneUserProcess.c)
 *     AVrfDllUnloadNotification @ 0x1800E3D10 (AVrfDllUnloadNotification.c)
 *     AVrfInternalHeapFreeNotification @ 0x1800E47A0 (AVrfInternalHeapFreeNotification.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800E9BBC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800E9F64 (RtlpEnsureLiveDeadListsInitialized.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800E9FFC (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800EA134 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FA8F0 (RtlpCleanupRegistryKeys.c)
 *     RtlTraceDatabaseAdd @ 0x18010F2E0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x18010F520 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x18010F600 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x18010F6B0 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x18010F6D0 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x180123F00 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
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
