/*
 * XREFs of ??1UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1800B0394
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1800B0B84 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     __lambda_cdce16f825702c0a1c57b181431f22d2_::_lambda_cdce16f825702c0a1c57b181431f22d2__::_1_::dtor$0 @ 0x1801E800C (__lambda_cdce16f825702c0a1c57b181431f22d2_--_lambda_cdce16f825702c0a1c57b181431f22d2__--_1_--dto.c)
 *     __lambda_cdce16f825702c0a1c57b181431f22d2_::_lambda_cdce16f825702c0a1c57b181431f22d2__::_1_::dtor$0_0 @ 0x1801E80B2 (__lambda_cdce16f825702c0a1c57b181431f22d2_--_lambda_cdce16f825702c0a1c57b181431f22d_ea_1801E80B2.c)
 *     _lambda_cdce16f825702c0a1c57b181431f22d2_::__lambda_cdce16f825702c0a1c57b181431f22d2_ @ 0x1801E8654 (_lambda_cdce16f825702c0a1c57b181431f22d2_--__lambda_cdce16f825702c0a1c57b181431f22d2_.c)
 *     _lambda_cdce16f825702c0a1c57b181431f22d2_::operator() @ 0x1801E9714 (_lambda_cdce16f825702c0a1c57b181431f22d2_--operator().c)
 *     __lambda_cdce16f825702c0a1c57b181431f22d2_::operator()_::_1_::dtor$0 @ 0x1801E9AA7 (__lambda_cdce16f825702c0a1c57b181431f22d2_--operator()_--_1_--dtor$0.c)
 *     _UndockedSearchAppExperienceManager::Activate_::_1_::dtor$2 @ 0x1802B9483 (_UndockedSearchAppExperienceManager--Activate_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B045C (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::~UndockedSearchAppExperienceManager_ActivateSearch(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *this)
{
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
