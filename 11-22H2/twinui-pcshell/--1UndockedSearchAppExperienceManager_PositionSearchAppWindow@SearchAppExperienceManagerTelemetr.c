/*
 * XREFs of ??1UndockedSearchAppExperienceManager_PositionSearchAppWindow@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1800B8D68
 * Callers:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800B7650 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     _UndockedSearchAppExperienceManager::PositionSearchAppWindow_::_1_::dtor$1 @ 0x1802B9927 (_UndockedSearchAppExperienceManager--PositionSearchAppWindow_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BB118 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PositionSearchAppWindow::~UndockedSearchAppExperienceManager_PositionSearchAppWindow(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PositionSearchAppWindow *this)
{
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PositionSearchAppWindow::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
