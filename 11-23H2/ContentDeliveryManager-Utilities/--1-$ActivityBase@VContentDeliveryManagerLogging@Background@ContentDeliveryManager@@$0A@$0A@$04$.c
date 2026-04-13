/*
 * XREFs of ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FA44
 * Callers:
 *     ??1TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18008FE34 (--1TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@Co.c)
 *     ??1TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18008FE60 (--1TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMana.c)
 *     ??1TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18008FE8C (--1TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     ??1DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x1800A19A8 (--1DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMana.c)
 *     ??1DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x1800A19D4 (--1DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 * Callees:
 *     ??1?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FA78 (--1-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_18008FA78.c)
 *     ?reset@?$shared_object@V?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180096F40 (-reset@-$shared_object@V-$ActivityData@VContentDeliveryManagerLogging@Background@Co_ea_180096F40.c)
 */

void __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
