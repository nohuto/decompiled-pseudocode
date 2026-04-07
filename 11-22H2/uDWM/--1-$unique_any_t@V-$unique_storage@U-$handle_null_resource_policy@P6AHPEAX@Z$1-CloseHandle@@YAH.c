/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18003DF00
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BBE8 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$3 @ 0x1800673D6 (_CWindowBorder--CreateBorderStructure_--_1_--dtor$3.c)
 *     _CSpriteVisual::Initialize_::_1_::dtor$0 @ 0x180067430 (_CSpriteVisual--Initialize_--_1_--dtor$0.c)
 *     _CWindowList::CaptureDesktop_::_1_::dtor$1 @ 0x18006749C (_CWindowList--CaptureDesktop_--_1_--dtor$1.c)
 *     _CDCompositionInteropVisual::Initialize_::_1_::dtor$1 @ 0x1800674AE (_CDCompositionInteropVisual--Initialize_--_1_--dtor$1.c)
 *     _CWindowList::ClipChange_::_1_::dtor$1 @ 0x180067A82 (_CWindowList--ClipChange_--_1_--dtor$1.c)
 *     _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$1 @ 0x180067D65 (_CDesktopManager--CreateMonitorRenderTargets_--_1_--dtor$1.c)
 *     _CGlobalLightSet::AddNewRevealAmbientLight_::_1_::dtor$4 @ 0x180067E56 (_CGlobalLightSet--AddNewRevealAmbientLight_--_1_--dtor$4.c)
 *     _CWindowData::EnsureClientAreaVisualProxy_::_1_::dtor$0 @ 0x180067E7A (_CWindowData--EnsureClientAreaVisualProxy_--_1_--dtor$0.c)
 *     _CAccentAcrylicBlurBehind::InitializeDComp_::_1_::dtor$0 @ 0x1800A107D (_CAccentAcrylicBlurBehind--InitializeDComp_--_1_--dtor$0.c)
 *     _CProjectedShadowScene::CreateProjectedShadowReceiverVisual_::_1_::dtor$0 @ 0x1800CEE2F (_CProjectedShadowScene--CreateProjectedShadowReceiverVisual_--_1_--dtor$0.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$10 @ 0x180108DA1 (_CWindowList--_CWindowList_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
