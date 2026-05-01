/*
 * XREFs of ?Hide@XamlLauncherState@@UEAAJXZ @ 0x18012E080
 * Callers:
 *     <none>
 * Callees:
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180044C00 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18012E3CC (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details@wil@@QEAA_NXZ @ 0x1801A2398 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::ScopeExitFn__lambda_e82be49316057d1ad7a0ae694d91bd6f___::_ScopeExitFn__lambda_e82be49316057d1ad7a0ae694d91bd6f___ @ 0x18044FED0 (wil--details--ScopeExitFn__lambda_e82be49316057d1ad7a0ae694d91bd6f___--_ScopeExitFn__lambda_e82b.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Hide(XamlLauncherState *this)
{
  XamlLauncherState *v2; // rdi
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  int v7[4]; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = (XamlLauncherState *)((char *)this - 32);
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  v7[0] = *((_DWORD *)this + 8);
  *(_QWORD *)&v7[2] = v2;
  v8 = 1;
  if ( v7[0] != 7 )
    goto LABEL_11;
  *((_DWORD *)this + 8) = 8;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::GetImpl'::`2'::impl) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 456LL))(*((_QWORD *)this + 7), &v10);
    if ( v4 >= 0 )
    {
      if ( !v10 )
        XamlLauncherState::PostCortanaOrSearchVisibility(v2, 0, 0LL);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x515,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v4);
    }
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7));
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51A,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
  else
LABEL_11:
    v6 = 0;
  wil::details::ScopeExitFn__lambda_e82be49316057d1ad7a0ae694d91bd6f___::_ScopeExitFn__lambda_e82be49316057d1ad7a0ae694d91bd6f___(v7);
  return v6;
}
