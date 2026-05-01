/*
 * XREFs of ??1MiniSearchAppExperienceManager_Hide@MiniSearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1803A0FD0
 * Callers:
 *     ?Hide@MiniSearchExperienceManager@@UEAAJXZ @ 0x1803A1920 (-Hide@MiniSearchExperienceManager@@UEAAJXZ.c)
 *     _MiniSearchExperienceManager::Hide_::_1_::dtor$2 @ 0x1803A1B24 (_MiniSearchExperienceManager--Hide_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803A16D4 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflector.c)
 */

void __fastcall MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_Hide::~MiniSearchAppExperienceManager_Hide(
        MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_Hide *this)
{
  *(_QWORD *)this = &MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_Hide::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SearchAppLauncherLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
