/*
 * XREFs of ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180506E40
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x18003E4D0 (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18003E7BC (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180043654 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180161430 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x180202E1C (-IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives@@@details@wil@@QEAA_NXZ @ 0x180203250 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x180480BE8 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     wil::details::ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___::_ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___ @ 0x18050495C (wil--details--ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___--_ScopeExitFn__lambda_3676.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180505558 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Show(XamlLauncherState *this, HSTRING a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v7; // edi
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  const wchar_t *StringRawBuffer; // rax
  int v13[4]; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v16; // [rsp+60h] [rbp+18h] BYREF

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
  *(_WORD *)((char *)this + 1011) = 0;
  v13[0] = *((_DWORD *)this + 8);
  *(_QWORD *)&v13[2] = (char *)this - 32;
  v7 = 1;
  v14 = 1;
  switch ( v13[0] )
  {
    case 0:
      XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
      *((_BYTE *)this + 1013) = 0;
LABEL_36:
      *((_DWORD *)this + 8) = 6;
      v11 = XamlLauncherState::ShowSearch((XamlLauncherState *)((char *)this - 32), a2);
      goto LABEL_28;
    case 5:
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
        1u,
        v4,
        v5);
      if ( a2 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
        if ( StringRawBuffer )
        {
          if ( wcsstr(StringRawBuffer, L"QuerySource=StartSearchBox") )
            v7 = 2;
        }
      }
      v11 = XamlLauncherState::ShowSearchFromOpenStart((__int64)this - 32, a2, v7);
LABEL_28:
      v8 = v11;
      if ( v11 < 0 )
        goto LABEL_19;
      break;
    case 6:
    case 7:
    case 12:
    case 13:
    case 14:
LABEL_22:
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
        1u,
        v4,
        v5);
      if ( *((_DWORD *)this + 8) == 7 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 456LL))(*((_QWORD *)this + 7), &v16);
        if ( v10 >= 0 )
        {
          if ( v16 )
          {
            XamlLauncherState::PostCortanaOrSearchVisibility(
              (XamlLauncherState *)((char *)this - 32),
              0LL,
              *((_QWORD *)this + 128));
            v7 = 7;
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x525,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v10);
        }
      }
      v11 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(**((_QWORD **)this + 7) + 56LL))(
              *((_QWORD *)this + 7),
              a2,
              v7);
      goto LABEL_28;
    case 16:
      XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
      *((_DWORD *)this + 8) = 17;
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6), 8LL);
      v8 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x514,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_19;
      }
      goto LABEL_36;
    case 22:
      goto LABEL_22;
  }
  v8 = 0;
LABEL_19:
  wil::details::ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___::_ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___((__int64)v13);
  return v8;
}
