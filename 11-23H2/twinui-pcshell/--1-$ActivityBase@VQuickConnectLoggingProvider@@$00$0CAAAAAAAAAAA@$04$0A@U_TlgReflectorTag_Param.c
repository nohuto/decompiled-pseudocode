/*
 * XREFs of ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18044C010
 * Callers:
 *     ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x18044C154 (--1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ??1ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAA@XZ @ 0x18044C180 (--1ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ??1ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAA@XZ @ 0x18044C1AC (--1ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ??1ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAA@XZ @ 0x18044C1D8 (--1ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ??1ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAA@XZ @ 0x18044C204 (--1ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ??1ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAA@XZ @ 0x18044C230 (--1ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ??1ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAA@XZ @ 0x18044C25C (--1ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ??1ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAA@XZ @ 0x18044C288 (--1ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ??1ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAA@XZ @ 0x18044C2B4 (--1ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18044C04C (--1-$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180451720 (-reset@-$shared_object@V-$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
