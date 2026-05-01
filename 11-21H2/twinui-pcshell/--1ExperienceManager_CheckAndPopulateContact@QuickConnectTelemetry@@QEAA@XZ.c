/*
 * XREFs of ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x18037642C
 * Callers:
 *     _lambda_524e7201540b0d78c05a86380e3a64a5_::__lambda_524e7201540b0d78c05a86380e3a64a5_ @ 0x180376280 (_lambda_524e7201540b0d78c05a86380e3a64a5_--__lambda_524e7201540b0d78c05a86380e3a64a5_.c)
 *     _lambda_f35c72982d94b155c6e22210e02e73fe_::__lambda_f35c72982d94b155c6e22210e02e73fe_ @ 0x1803762B0 (_lambda_f35c72982d94b155c6e22210e02e73fe_--__lambda_f35c72982d94b155c6e22210e02e73fe_.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x180376AEC (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     _CQuickConnectExperienceManager::CheckAndPopulateContact_::_1_::dtor$0 @ 0x180376EB5 (_CQuickConnectExperienceManager--CheckAndPopulateContact_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803773F4 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact(
        QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *this)
{
  *(_QWORD *)this = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
