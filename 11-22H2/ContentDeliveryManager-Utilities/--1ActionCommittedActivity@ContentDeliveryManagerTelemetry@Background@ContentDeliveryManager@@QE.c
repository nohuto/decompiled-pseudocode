/*
 * XREFs of ??1ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x180074C90
 * Callers:
 *     _lambda_1535a6ac74a46a99e57700c911cef706_::operator() @ 0x180075054 (_lambda_1535a6ac74a46a99e57700c911cef706_--operator().c)
 *     __lambda_1535a6ac74a46a99e57700c911cef706_::operator()_::_1_::dtor$3 @ 0x1800D818F (__lambda_1535a6ac74a46a99e57700c911cef706_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180075DF4 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMa_ea_180075DF4.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionCommittedActivity::~ActionCommittedActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionCommittedActivity *this)
{
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionCommittedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
