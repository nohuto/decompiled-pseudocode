/*
 * XREFs of ??1UndockedSearchAppExperienceManager_PositionSearchAppWindow@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x18038E54C
 * Callers:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180046E60 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     _UndockedSearchAppExperienceManager::PositionSearchAppWindow_::_1_::dtor$1 @ 0x180217864 (_UndockedSearchAppExperienceManager--PositionSearchAppWindow_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800476A8 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PositionSearchAppWindow::~UndockedSearchAppExperienceManager_PositionSearchAppWindow(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PositionSearchAppWindow::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
