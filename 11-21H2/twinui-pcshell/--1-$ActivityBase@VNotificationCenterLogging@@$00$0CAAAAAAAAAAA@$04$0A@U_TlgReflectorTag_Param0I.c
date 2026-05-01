/*
 * XREFs of ??1?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180362224
 * Callers:
 *     ??1EM_HideInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180362544 (--1EM_HideInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1803625C8 (--1EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEA.c)
 *     ??1EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180362620 (--1EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18036264C (--1EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180362260 (--1-$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderTyp_ea_180362260.c)
 *     ?reset@?$shared_object@V?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1803674D8 (-reset@-$shared_object@V-$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTa_ea_1803674D8.c)
 */

void __fastcall wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
