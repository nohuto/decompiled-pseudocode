/*
 * XREFs of ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1805075F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x18003E4D0 (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18003E7BC (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180161430 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x180202E1C (-IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives@@@details@wil@@QEAA_NXZ @ 0x180203250 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x180480BE8 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     wil::details::ScopeExitFn__lambda_533694300c82342eb515aaf46596886e___::_ScopeExitFn__lambda_533694300c82342eb515aaf46596886e___ @ 0x180504A6C (wil--details--ScopeExitFn__lambda_533694300c82342eb515aaf46596886e___--_ScopeExitFn__lambda_5336.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180505558 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Toggle(XamlLauncherState *this, HSTRING a2)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // eax
  int v9[4]; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v12; // [rsp+60h] [rbp+18h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives>::GetImpl'::`2'::impl) )
  {
    if ( !XamlLauncherState::IsShowOrToggleBlocked((XamlLauncherState *)((char *)this - 32)) )
      goto LABEL_3;
    return 0LL;
  }
  if ( *((_BYTE *)this + 1016) && !IsPPIEdition() && !CortanaHelpers::AllowCortanaAboveLock() )
    return 0LL;
LABEL_3:
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  v9[0] = *((_DWORD *)this + 8);
  *(_QWORD *)&v9[2] = (char *)this - 32;
  v10 = 1;
  if ( !v9[0] )
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
    *(_WORD *)((char *)this + 1011) = 0;
    *((_BYTE *)this + 1013) = 0;
    *((_DWORD *)this + 8) = 6;
    v8 = XamlLauncherState::ShowSearch((XamlLauncherState *)((char *)this - 32), a2);
    goto LABEL_22;
  }
  if ( v9[0] == 5 )
  {
    v12 = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 160LL))(*((_QWORD *)this + 7), &v12);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 1468LL;
      goto LABEL_16;
    }
    if ( v12 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7));
LABEL_19:
      v6 = 0;
      goto LABEL_20;
    }
    v8 = XamlLauncherState::ShowSearchFromOpenStart((__int64)this - 32, a2, 1);
LABEL_22:
    v6 = v8;
    if ( v8 < 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( v9[0] != 7 )
    goto LABEL_19;
  *((_DWORD *)this + 8) = 8;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7));
  v6 = v5;
  if ( v5 >= 0 )
    goto LABEL_19;
  v7 = 1461LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v5);
LABEL_20:
  wil::details::ScopeExitFn__lambda_533694300c82342eb515aaf46596886e___::_ScopeExitFn__lambda_533694300c82342eb515aaf46596886e___((__int64)v9);
  return v6;
}
