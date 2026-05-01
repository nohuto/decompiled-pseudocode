/*
 * XREFs of ??1MiniSearchAppExperienceManager_PositionSearchAppWindow@MiniSearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1803A0FFC
 * Callers:
 *     ?PositionSearchAppWindow@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A30C8 (-PositionSearchAppWindow@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     _MiniSearchExperienceManager::PositionSearchAppWindow_::_1_::dtor$1 @ 0x1803A3332 (_MiniSearchExperienceManager--PositionSearchAppWindow_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800476A8 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow::~MiniSearchAppExperienceManager_PositionSearchAppWindow(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
