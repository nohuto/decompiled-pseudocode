/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800970E4
 * Callers:
 *     _CGlobalLightSet::AddNewRevealAmbientLight_::_1_::dtor$4 @ 0x1800647A4 (_CGlobalLightSet--AddNewRevealAmbientLight_--_1_--dtor$4.c)
 *     _CGlobalLightSet::AddNewRevealSpotLightWithType_::_1_::dtor$4 @ 0x18006483E (_CGlobalLightSet--AddNewRevealSpotLightWithType_--_1_--dtor$4.c)
 *     _CWindowData::EnsureClientAreaVisualProxy_::_1_::dtor$0 @ 0x180064874 (_CWindowData--EnsureClientAreaVisualProxy_--_1_--dtor$0.c)
 *     _CWindowList::CaptureDesktop_::_1_::dtor$1 @ 0x180064D72 (_CWindowList--CaptureDesktop_--_1_--dtor$1.c)
 *     _CWindowList::ClipChange_::_1_::dtor$1 @ 0x18006506F (_CWindowList--ClipChange_--_1_--dtor$1.c)
 *     _CDesktopManager::CreateMonitorRenderTargetsLegacy_::_1_::dtor$1 @ 0x180065582 (_CDesktopManager--CreateMonitorRenderTargetsLegacy_--_1_--dtor$1.c)
 *     _CAnimationScheduler::_SetStoryboardTriggerForAnimationClock_::_1_::dtor$0 @ 0x1800A7E1C (_CAnimationScheduler--_SetStoryboardTriggerForAnimationClock_--_1_--dtor$0.c)
 *     _CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor$2 @ 0x1800AF5C6 (_CDDisplayManager--MakeSourceHandleForTarget_--_1_--dtor$2.c)
 *     _CDesktopManager::CreateMonitorRenderTargetsDDisplay_::_1_::dtor$1 @ 0x1800B013E (_CDesktopManager--CreateMonitorRenderTargetsDDisplay_--_1_--dtor$1.c)
 *     _CDesktopManager::CreateMonitorRenderTargetsDDisplay_::_1_::dtor$2 @ 0x1800B014A (_CDesktopManager--CreateMonitorRenderTargetsDDisplay_--_1_--dtor$2.c)
 *     _CProjectedShadowScene::CreateProjectedShadowReceiverVisual_::_1_::dtor$0 @ 0x1800CA796 (_CProjectedShadowScene--CreateProjectedShadowReceiverVisual_--_1_--dtor$0.c)
 *     _CSystemBackdropVisual::Initialize_::_1_::dtor$0 @ 0x1800E1695 (_CSystemBackdropVisual--Initialize_--_1_--dtor$0.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$10 @ 0x180101AB8 (_CWindowList--_CWindowList_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(a1);
}
