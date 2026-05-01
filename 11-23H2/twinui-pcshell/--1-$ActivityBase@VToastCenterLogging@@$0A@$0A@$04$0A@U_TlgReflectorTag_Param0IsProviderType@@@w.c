/*
 * XREFs of ??1?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180056AF4
 * Callers:
 *     ??1EM_HideActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180056970 (--1EM_HideActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435440 (--1EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_DisplayContextChanged@ToastCenterTelemetry@@QEAA@XZ @ 0x18043546C (--1EM_DisplayContextChanged@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435498 (--1EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_EventQueuedActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1804354C4 (--1EM_EventQueuedActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_LaunchActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18043551C (--1EM_LaunchActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_NewNotificationActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435548 (--1EM_NewNotificationActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_PositionViewActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435574 (--1EM_PositionViewActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1804355A0 (--1EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1804355F8 (--1EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ShowActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435624 (--1EM_ShowActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewCloakingActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1804356A8 (--1EM_ViewCloakingActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1804356D4 (--1EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewHiddenActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435700 (--1EM_ViewHiddenActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewShownActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18043572C (--1EM_ViewShownActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435758 (--1EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180056B34 (--1-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180073B5C (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
