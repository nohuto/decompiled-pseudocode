/*
 * XREFs of ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180451C00
 * Callers:
 *     <none>
 * Callees:
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180044C00 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18012E3CC (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019759C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x1801ADAB0 (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x1801ADAEC (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1803A57D8 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     wil::details::ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___::_ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___ @ 0x18044F7C0 (wil--details--ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___--_ScopeExitFn__lambda_3676.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180450260 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Show(XamlLauncherState *this, HSTRING a2)
{
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  const wchar_t *StringRawBuffer; // rax
  int v13[4]; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v16; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 1024) && !IsPPIEdition() && !CortanaHelpers::AllowCortanaAboveLock() )
    return 0LL;
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  *(_WORD *)((char *)this + 1019) = 0;
  v13[0] = *((_DWORD *)this + 8);
  *(_QWORD *)&v13[2] = (char *)this - 32;
  v7 = 1;
  v14 = 1;
  if ( !v13[0] )
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
    *((_BYTE *)this + 1021) = 0;
    goto LABEL_36;
  }
  if ( v13[0] == 5 )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl) )
    {
      if ( a2 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
        if ( StringRawBuffer )
        {
          if ( wcsstr(StringRawBuffer, L"QuerySource=StartSearchBox") )
            v7 = 2;
        }
      }
    }
    v10 = XamlLauncherState::ShowSearchFromOpenStart((__int64)this - 32, a2, v7);
    goto LABEL_21;
  }
  if ( v13[0] > 5 )
  {
    if ( v13[0] <= 7 )
      goto LABEL_19;
    if ( v13[0] > 11 )
    {
      if ( v13[0] > 14 )
      {
        if ( v13[0] != 16 )
        {
          if ( v13[0] != 22 )
            goto LABEL_15;
          goto LABEL_19;
        }
        XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
        *((_DWORD *)this + 8) = 17;
        v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6), 8LL);
        v8 = v9;
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4C7,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v9);
          goto LABEL_16;
        }
LABEL_36:
        *((_DWORD *)this + 8) = 6;
        goto LABEL_20;
      }
LABEL_19:
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_FindInStart>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_FindInStart>::GetImpl'::`2'::impl,
        0,
        v5,
        v6);
      if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl) )
      {
LABEL_20:
        v10 = XamlLauncherState::ShowSearch((XamlLauncherState *)((char *)this - 32), a2);
        goto LABEL_21;
      }
      if ( *((_DWORD *)this + 8) == 7 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 456LL))(*((_QWORD *)this + 7), &v16);
        if ( v11 >= 0 )
        {
          if ( v16 )
          {
            XamlLauncherState::PostCortanaOrSearchVisibility(
              (XamlLauncherState *)((char *)this - 32),
              0,
              *((HMONITOR *)this + 129));
            v7 = 7;
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4D8,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v11);
        }
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(**((_QWORD **)this + 7) + 56LL))(
              *((_QWORD *)this + 7),
              a2,
              v7);
LABEL_21:
      v8 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
    }
  }
LABEL_15:
  v8 = 0;
LABEL_16:
  wil::details::ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___::_ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___((__int64)v13);
  return v8;
}
