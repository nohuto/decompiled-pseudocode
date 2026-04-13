/*
 * XREFs of ??1ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x180074CFC
 * Callers:
 *     _lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_::operator() @ 0x180075524 (_lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_--operator().c)
 *     __lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_::operator()_::_1_::dtor$3 @ 0x1800D8282 (__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180075DF4 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMa_ea_180075DF4.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::~ActionRevertedActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity *this)
{
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
