/*
 * XREFs of ??1TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18009B484
 * Callers:
 *     __lambda_4f27881777b3828299edd9a0e9cb6746_::operator()_::_1_::dtor$0 @ 0x1800F20B9 (__lambda_4f27881777b3828299edd9a0e9cb6746_--operator()_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$1 @ 0x1800F23DA (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800F23DA.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009C494 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::~TriggerManagerGetTriggeredItemsForStateActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *this)
{
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
