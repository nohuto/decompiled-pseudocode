/*
 * XREFs of ??1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x18019BEB8
 * Callers:
 *     _lambda_e09b1650d30d60aee5c16df43a188659_::__lambda_e09b1650d30d60aee5c16df43a188659_ @ 0x18019B98C (_lambda_e09b1650d30d60aee5c16df43a188659_--__lambda_e09b1650d30d60aee5c16df43a188659_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e09b1650d30d60aee5c16df43a188659___::_CTaskWrapper__lambda_e09b1650d30d60aee5c16df43a188659___ @ 0x18019BAF4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e09b1650d30d60aee5c16df43a188659___--_CTask.c)
 *     _lambda_e09b1650d30d60aee5c16df43a188659_::operator() @ 0x18019CD40 (_lambda_e09b1650d30d60aee5c16df43a188659_--operator().c)
 *     ?ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z @ 0x1801A0900 (-ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z.c)
 *     _CUndockedSearchAppExperienceManagerConfig::ResetWindowRegionAsync_::_1_::dtor$0 @ 0x1801A0A67 (_CUndockedSearchAppExperienceManagerConfig--ResetWindowRegionAsync_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800476A8 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::~UndockedSearchAppExperienceManager_ResetWindowRgn(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
