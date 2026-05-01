/*
 * XREFs of ??1UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x180078C70
 * Callers:
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52_____lambda_ccf65d9649214ffd774f2e628ae5cb52____::_1_::dtor$2 @ 0x180198CBA (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5c_ea_180198CBA.c)
 *     __lambda_ccf65d9649214ffd774f2e628ae5cb52_::_lambda_ccf65d9649214ffd774f2e628ae5cb52__::_1_::dtor$0 @ 0x18019B3B8 (__lambda_ccf65d9649214ffd774f2e628ae5cb52_--_lambda_ccf65d9649214ffd774f2e628ae5cb52__--_1_--dto.c)
 *     __lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8__::_1_::dtor$0 @ 0x18019B46C (__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_--_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8__--_1_--dto.c)
 *     __lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8__::_1_::dtor$0_0 @ 0x18019B509 (__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_--_lambda_e9972a7fc06ea41c4e23ae797ec0a7d_ea_18019B509.c)
 *     _lambda_ccf65d9649214ffd774f2e628ae5cb52_::__lambda_ccf65d9649214ffd774f2e628ae5cb52_ @ 0x18019B958 (_lambda_ccf65d9649214ffd774f2e628ae5cb52_--__lambda_ccf65d9649214ffd774f2e628ae5cb52_.c)
 *     _lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_ @ 0x18019B99C (_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_--__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_.c)
 *     _lambda_ccf65d9649214ffd774f2e628ae5cb52_::operator() @ 0x18019C97C (_lambda_ccf65d9649214ffd774f2e628ae5cb52_--operator().c)
 *     __lambda_ccf65d9649214ffd774f2e628ae5cb52_::operator()_::_1_::dtor$0 @ 0x18019CCA1 (__lambda_ccf65d9649214ffd774f2e628ae5cb52_--operator()_--_1_--dtor$0.c)
 *     _lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::operator() @ 0x18019CDF8 (_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_--operator().c)
 *     __lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::operator()_::_1_::dtor$0 @ 0x18019D14C (__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_--operator()_--_1_--dtor$0.c)
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x18019D74C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     _UndockedSearchAppExperienceManager::Activate_::_1_::dtor$2 @ 0x18019D9BB (_UndockedSearchAppExperienceManager--Activate_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180078B9C (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::~UndockedSearchAppExperienceManager_ActivateSearch(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *this)
{
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(this);
}
