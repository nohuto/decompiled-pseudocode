/*
 * XREFs of ??1?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1806B07A0
 * Callers:
 *     ??1HideFlyout@MeetAndChatTelemetry@@QEAA@XZ @ 0x1806B08F4 (--1HideFlyout@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ??1ShowFlyout@MeetAndChatTelemetry@@QEAA@XZ @ 0x1806B0920 (--1ShowFlyout@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ??1UserInitiatedInstall@MeetAndChatTelemetry@@QEAA@XZ @ 0x1806B094C (--1UserInitiatedInstall@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ??1FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAA@XZ @ 0x1806C4E40 (--1FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1806B07DC (--1-$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderT_ea_1806B07DC.c)
 *     ?reset@?$shared_object@V?$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1806C1800 (-reset@-$shared_object@V-$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflector_ea_1806C1800.c)
 */

void __fastcall wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
