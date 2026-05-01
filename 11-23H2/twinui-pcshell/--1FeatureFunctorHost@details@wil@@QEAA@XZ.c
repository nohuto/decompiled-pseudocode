/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x1801AE3E4
 * Callers:
 *     _CActionCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$35 @ 0x1802BB3BF (_CActionCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$35.c)
 *     _CActionCenterExperienceManager::OnVisibilityChanged_::_1_::dtor$17 @ 0x1802BBA44 (_CActionCenterExperienceManager--OnVisibilityChanged_--_1_--dtor$17.c)
 *     _wil::details::RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__&__::_1_::dtor$0 @ 0x1802BCAF1 (_wil--details--RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__-__--_1_--dtor$0.c)
 *     _CControlCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$25 @ 0x1802BCB15 (_CControlCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$25.c)
 *     _XamlLauncher::ShutdownServices_::_1_::dtor$0 @ 0x1802BCB66 (_XamlLauncher--ShutdownServices_--_1_--dtor$0.c)
 *     _CMultitaskingViewManager::RuntimeClassInitialize_::_1_::dtor$7 @ 0x1802BCBB5 (_CMultitaskingViewManager--RuntimeClassInitialize_--_1_--dtor$7.c)
 *     _XamlLauncher::PublishServices_::_1_::dtor$2 @ 0x1802BCC2D (_XamlLauncher--PublishServices_--_1_--dtor$2.c)
 *     _CDesktopPositioner::_GetLaunchPosition_::_1_::dtor$8 @ 0x1802C2751 (_CDesktopPositioner--_GetLaunchPosition_--_1_--dtor$8.c)
 *     _CControlCenterExperienceManager::OnVisibilityChanged_::_1_::dtor$5 @ 0x1804217AC (_CControlCenterExperienceManager--OnVisibilityChanged_--_1_--dtor$5.c)
 *     _CToastCenterExperienceManager::OnControlCenterVisibilityChanged_::_1_::dtor$0 @ 0x1804376DB (_CToastCenterExperienceManager--OnControlCenterVisibilityChanged_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureFunctorHost::~FeatureFunctorHost(wil::details::FeatureFunctorHost *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 16) = *((_DWORD *)this + 5);
}
