/*
 * XREFs of ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x18006C810
 * Callers:
 *     ?Dismiss@CJumpViewExperienceManager@@UEAAJXZ @ 0x18006C800 (-Dismiss@CJumpViewExperienceManager@@UEAAJXZ.c)
 *     ?ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1801B2590 (-ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_C.c)
 *     CJumpViewExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x1801E3530 (CJumpViewExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     ?DisplaySettingsChange@CJumpViewExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180447950 (-DisplaySettingsChange@CJumpViewExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONIT.c)
 *     ?OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180448B80 (-OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@P.c)
 *     ?OnIdleStateChanged@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x180448CB0 (-OnIdleStateChanged@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z.c)
 *     ?OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180448E30 (-OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18002C12C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1800D6384 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsShowingOnHover@CJumpViewExperienceManager@@AEAA_NXZ @ 0x1801E398C (-IsShowingOnHover@CJumpViewExperienceManager@@AEAA_NXZ.c)
 *     ?StopMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ @ 0x1801E3C00 (-StopMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@wil@@QEAA_NXZ @ 0x1801E3C78 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CJumpViewExperienceManager::DismissImpl(CJumpViewExperienceManager *this, char a2)
{
  CJumpViewExperienceManager *v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::GetImpl'::`2'::impl) )
  {
    if ( CJumpViewExperienceManager::IsShowingOnHover(this) && g_hoverState && !*(&g_hoverState + 1) )
      return 0LL;
    CJumpViewExperienceManager::StopMouseHoverHook(v4);
  }
  if ( *((_DWORD *)this + 48) == 2 )
  {
    if ( *((_QWORD *)this + 22) )
    {
      v5 = CSingleViewShellExperience::Hide((__int64)this + 152, 0LL);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x21A,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
          (const char *)(unsigned int)v5,
          v8);
        return v6;
      }
    }
    if ( a2
      && (!(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::GetImpl'::`2'::impl)
       || !CJumpViewExperienceManager::IsShowingOnHover(this)) )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 47) + 24LL))(*((_QWORD *)this + 47), 0xFFFFLL);
    }
    v10 = 1;
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
      (char *)this + 872,
      &v10);
  }
  return 0LL;
}
