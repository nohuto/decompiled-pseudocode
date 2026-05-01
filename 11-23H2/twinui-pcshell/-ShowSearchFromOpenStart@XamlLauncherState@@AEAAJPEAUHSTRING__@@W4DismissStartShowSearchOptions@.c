/*
 * XREFs of ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x18003E4D0
 * Callers:
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18003E390 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x180042F60 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180053AA0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?BeginStartToFindInStartAnimation@XamlLauncherState@@UEAAXXZ @ 0x1805056E0 (-BeginStartToFindInStartAnimation@XamlLauncherState@@UEAAXXZ.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180506E40 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1805075F0 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18003E7BC (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180043654 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18009742C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x1801615E0 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     ?IsSessionIdle@XamlLauncherState@@AEBA_NXZ @ 0x180202DB4 (-IsSessionIdle@XamlLauncherState@@AEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives@@@details@wil@@QEAA_NXZ @ 0x180203250 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___::_ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___ @ 0x18038BC34 (wil--details--ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___--_ScopeExitFn__lambda_c5ae.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x180480BE8 (CortanaHelpers--AllowCortanaAboveLock.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::ShowSearchFromOpenStart(__int64 a1, HSTRING a2, int a3)
{
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  char IsSessionIdle; // al
  _QWORD *v10; // rsi
  char v11; // r14
  __int64 v12; // rdx
  int v14; // [rsp+20h] [rbp-20h] BYREF
  int v15; // [rsp+28h] [rbp-18h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h]
  char v17; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  char v19; // [rsp+80h] [rbp+40h] BYREF
  HSTRING v20; // [rsp+88h] [rbp+48h] BYREF
  char v21; // [rsp+98h] [rbp+58h] BYREF

  v20 = a2;
  v15 = *(_DWORD *)(a1 + 64);
  v16 = a1;
  v17 = 1;
  v19 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 80) + 136LL))(*(_QWORD *)(a1 + 80), &v19);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives>::GetImpl'::`2'::impl) )
      IsSessionIdle = XamlLauncherState::IsSessionIdle((XamlLauncherState *)a1);
    else
      IsSessionIdle = *(_BYTE *)(a1 + 1048);
    if ( (IsSessionIdle
       || (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 88) + 440LL))(*(_QWORD *)(a1 + 88), &v14) >= 0
       && (_BYTE)v14)
      && (v10 = (_QWORD *)(a1 + 88), (unsigned __int8)CortanaHelpers::AllowCortanaAboveLock())
      && XamlLauncherState::IsStartVisible((XamlLauncherState *)(a1 + 24)) )
    {
      v11 = 1;
    }
    else
    {
      v11 = 0;
      v10 = (_QWORD *)(a1 + 88);
    }
    WindowsGetStringRawBuffer(a2, 0LL);
    if ( v19 || v11 )
    {
      v7 = XamlLauncherState::ShowSearch((XamlLauncherState *)a1, a2);
      if ( v7 < 0 )
        goto LABEL_37;
      if ( v11 )
      {
LABEL_36:
        v7 = 0;
        goto LABEL_37;
      }
    }
    else
    {
      v21 = 0;
      v10 = (_QWORD *)(a1 + 88);
      v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), &v21);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 2765LL;
        goto LABEL_32;
      }
      if ( v21 )
      {
        if ( a2 )
        {
          v6 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 1072), &v20);
          v7 = v6;
          if ( v6 < 0 )
          {
            v8 = 2837LL;
            goto LABEL_32;
          }
        }
        *(_DWORD *)(a1 + 64) = 12;
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v10 + 120LL))(*v10, 2LL);
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = 2840LL;
          goto LABEL_32;
        }
        v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 112LL))(*(_QWORD *)(a1 + 80));
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = 2841LL;
          goto LABEL_32;
        }
      }
      else
      {
        LOBYTE(v12) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
          v12);
        if ( a3 == 2 )
        {
          *(_DWORD *)(a1 + 64) = 22;
          v7 = XamlLauncherState::ShowSearch((XamlLauncherState *)a1, a2);
          if ( v7 < 0 )
            goto LABEL_37;
        }
        else
        {
          *(_DWORD *)(a1 + 64) = 14;
          v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 64LL))(*(_QWORD *)(a1 + 80), 7LL);
          v7 = v6;
          if ( v6 < 0 )
          {
            v8 = 2870LL;
            goto LABEL_32;
          }
          XamlLauncherState::PostCortanaOrSearchVisibility((XamlLauncherState *)a1, 0, *(HMONITOR *)(a1 + 1056));
          v6 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(*(_QWORD *)*v10 + 56LL))(*v10, a2, 7LL);
          v7 = v6;
          if ( v6 < 0 )
          {
            v8 = 2872LL;
            goto LABEL_32;
          }
        }
      }
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 112LL))(*v10);
    if ( v7 < 0 )
      goto LABEL_37;
    goto LABEL_36;
  }
  v8 = 2744LL;
LABEL_32:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v6,
    v14);
LABEL_37:
  wil::details::ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___::_ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___(&v15);
  return (unsigned int)v7;
}
