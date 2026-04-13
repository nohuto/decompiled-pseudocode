/*
 * XREFs of ??1ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x180074D54
 * Callers:
 *     _lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_::operator() @ 0x180075388 (_lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_--operator().c)
 *     __lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_::operator()_::_1_::dtor$3 @ 0x1800D8231 (__lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180075DF4 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMa_ea_180075DF4.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionUnstagedActivity::~ActionUnstagedActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionUnstagedActivity *this)
{
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionUnstagedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
