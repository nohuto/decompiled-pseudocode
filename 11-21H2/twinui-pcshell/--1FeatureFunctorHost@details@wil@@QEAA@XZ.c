/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x1801669E8
 * Callers:
 *     _CMultitaskingViewManager::RuntimeClassInitialize_::_1_::dtor$6 @ 0x1802154A2 (_CMultitaskingViewManager--RuntimeClassInitialize_--_1_--dtor$6.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$19 @ 0x18021A221 (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$19.c)
 *     _CActionCenterExperienceManager::OnVisibilityChanged_::_1_::dtor$14 @ 0x18021A76F (_CActionCenterExperienceManager--OnVisibilityChanged_--_1_--dtor$14.c)
 *     _CDesktopPositioner::_GetLaunchPosition_::_1_::dtor$8 @ 0x18021DBDE (_CDesktopPositioner--_GetLaunchPosition_--_1_--dtor$8.c)
 *     _wil::details::RunFeatureDispatch__lambda_4d22249b2e966fdcd7fec0fc117130b9__&__::_1_::dtor$0 @ 0x18021FBCE (_wil--details--RunFeatureDispatch__lambda_4d22249b2e966fdcd7fec0fc117130b9__-__--_1_--dtor$0.c)
 *     _XamlLauncher::PublishServices_::_1_::dtor$2 @ 0x18021FC87 (_XamlLauncher--PublishServices_--_1_--dtor$2.c)
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
