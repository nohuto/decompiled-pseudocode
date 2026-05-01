/*
 * XREFs of ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180043654
 * Callers:
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x18003E4D0 (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ?OnCortanaHidden@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180042EA0 (-OnCortanaHidden@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x180042F60 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?HideCortana@XamlLauncherState@@UEAAXXZ @ 0x1800607F0 (-HideCortana@XamlLauncherState@@UEAAXXZ.c)
 *     ?HideSearchWithArgs@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x18006A840 (-HideSearchWithArgs@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180161160 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 *     ?ShowSearchWithStart@XamlLauncherState@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180198890 (-ShowSearchWithStart@XamlLauncherState@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 *     ?Hide@XamlLauncherState@@UEAAJXZ @ 0x1805058E0 (-Hide@XamlLauncherState@@UEAAJXZ.c)
 *     ?OnCortanaNotifyRelaunch@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1805067A0 (-OnCortanaNotifyRelaunch@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180506E40 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncherState::PostCortanaOrSearchVisibility(XamlLauncherState *this, __int64 a2, LPARAM a3)
{
  WPARAM v4; // rbx
  __int64 v6; // rdx
  HWND WindowW; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v13; // [rsp+48h] [rbp+20h] BYREF

  v4 = (unsigned __int8)a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    a2);
  LOBYTE(v6) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    v6);
  WindowW = hWnd;
  if ( !hWnd )
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    hWnd = WindowW;
  }
  PostMessageW(WindowW, 0x5D1u, v4, a3);
  v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 11) + 456LL))(*((_QWORD *)this + 11), &v13);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD55,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v8,
      v11);
  }
  else if ( v13 )
  {
    LOBYTE(v9) = v4;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 80LL))(*((_QWORD *)this + 16), v9);
  }
  else
  {
    LOBYTE(v9) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
      v9);
    LOBYTE(v10) = v4;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 72LL))(*((_QWORD *)this + 16), v10);
  }
}
