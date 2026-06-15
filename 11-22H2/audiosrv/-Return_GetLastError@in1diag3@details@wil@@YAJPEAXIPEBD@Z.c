/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CD4F0
 * Callers:
 *     ?SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x180042D30 (-SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x180047E74 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594E8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@EffectPackConfigurationManager@@QEAAJXZ @ 0x18005B5FC (-RuntimeClassInitialize@EffectPackConfigurationManager@@QEAAJXZ.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18005BA5C (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18005E594 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18005FF6C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800CCD48 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1800CF670 (-GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x1800D2B50 (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$00@@AEAAJPEA_N@Z.c)
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800D6A90 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     ?RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z @ 0x1800D6FB4 (-RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z.c)
 *     ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800E9FCC (-HandleAccessChangeNotification@@YAJPEBG0@Z.c)
 *     ?GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800EBFC8 (-GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV-$vector@UAudioEffectInternal@@V-$.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ @ 0x1800EDEC0 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ.c)
 *     ?GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x180107770 (-GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV-$vector@UAudioEffe.c)
 *     ?SerializeForRpc@CStandardEvent@@UEAAJPEAUCP_EVENT_METADATA_BLOB@@@Z @ 0x18011F2F0 (-SerializeForRpc@CStandardEvent@@UEAAJPEAUCP_EVENT_METADATA_BLOB@@@Z.c)
 *     ?InitializeTheadpool@CWorkFifo@@AEAAJXZ @ 0x180135050 (-InitializeTheadpool@CWorkFifo@@AEAAJXZ.c)
 *     ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x180148220 (-FilterInstantiate2@@YAJPEBGKPEAPEAX@Z.c)
 *     ?GetMemory@CCrossProcessClientMemory@@UEAAJPEAIPEAPEAX@Z @ 0x180163320 (-GetMemory@CCrossProcessClientMemory@@UEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x1800CBED8 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr<1>(this, a2, a3, a4, v5, retaddr);
}
