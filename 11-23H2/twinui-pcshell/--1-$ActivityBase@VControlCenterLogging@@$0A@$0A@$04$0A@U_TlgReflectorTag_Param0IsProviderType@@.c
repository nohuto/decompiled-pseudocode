/*
 * XREFs of ??1?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18041D9C8
 * Callers:
 *     ??1EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DE88 (--1EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_EventQueuedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DEB4 (--1EM_EventQueuedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DEE0 (--1EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DF0C (--1EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DF38 (--1EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DF64 (--1EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_RaiseHideDeepLinkRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DF90 (--1EM_RaiseHideDeepLinkRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@Q.c)
 *     ??1EM_RaiseHideExperienceRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DFBC (--1EM_RaiseHideExperienceRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@.c)
 *     ??1EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DFE8 (--1EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041E014 (--1EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041E040 (--1EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewHiddenActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041E06C (--1EM_ViewHiddenActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewShownActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041E098 (--1EM_ViewShownActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewUncloakingActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041E0C4 (--1EM_ViewUncloakingActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18041DA38 (--1-$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-_ea_18041DA38.c)
 *     ?reset@?$shared_object@V?$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1804273B0 (-reset@-$shared_object@V-$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Par_ea_1804273B0.c)
 */

void __fastcall wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
