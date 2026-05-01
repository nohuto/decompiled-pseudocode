/*
 * XREFs of ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804826A0
 * Callers:
 *     ?EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180482714 (-EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x180482F44 (-GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 *     ?GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x18048312C (-GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18048329C (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1804835F4 (-GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180486DFC (-RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804871C8 (-ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804882D8 (-UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::EnsureImmersiveShell(CortanaDesktopExperienceView *this)
{
  LPVOID *ppv; // rbx
  HRESULT Instance; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ppv = (LPVOID *)((char *)this + 120);
  if ( *((_QWORD *)this + 15) )
    return 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 15);
  Instance = CoCreateInstance(
               &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               ppv);
  v3 = Instance;
  if ( Instance >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x604,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)Instance);
  return v3;
}
