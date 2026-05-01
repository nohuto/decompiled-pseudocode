/*
 * XREFs of ??1MiniSearchAppExperienceManager_ActivateAppAsync@MiniSearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1803A0FA4
 * Callers:
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e___::CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e_____lambda_5a859347bbbbbb78c34c3a6938b2a83e____::_1_::dtor$2 @ 0x1801A6CFB (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a_ea_1801A6CFB.c)
 *     _lambda_5a859347bbbbbb78c34c3a6938b2a83e_::__lambda_5a859347bbbbbb78c34c3a6938b2a83e_ @ 0x1801A6FCC (_lambda_5a859347bbbbbb78c34c3a6938b2a83e_--__lambda_5a859347bbbbbb78c34c3a6938b2a83e_.c)
 *     _lambda_5a859347bbbbbb78c34c3a6938b2a83e_::operator() @ 0x1801A7048 (_lambda_5a859347bbbbbb78c34c3a6938b2a83e_--operator().c)
 *     __lambda_5a859347bbbbbb78c34c3a6938b2a83e_::operator()_::_1_::dtor$0 @ 0x1801A71C0 (__lambda_5a859347bbbbbb78c34c3a6938b2a83e_--operator()_--_1_--dtor$0.c)
 *     ?ActivateSearch@CUndockedMiniSearchAppExperienceManagerConfig@@UEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1803A1320 (-ActivateSearch@CUndockedMiniSearchAppExperienceManagerConfig@@UEAAXAEBUSearchAppActivatedEventA.c)
 *     _CUndockedMiniSearchAppExperienceManagerConfig::ActivateSearch_::_1_::dtor$1 @ 0x1803A1465 (_CUndockedMiniSearchAppExperienceManagerConfig--ActivateSearch_--_1_--dtor$1.c)
 *     _CUndockedMiniSearchAppExperienceManagerConfig::ActivateSearch_::_1_::dtor$4 @ 0x1803A1471 (_CUndockedMiniSearchAppExperienceManagerConfig--ActivateSearch_--_1_--dtor$4.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180078B9C (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync::~MiniSearchAppExperienceManager_ActivateAppAsync(
        MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync *this)
{
  *(_QWORD *)this = &MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
