/*
 * XREFs of ?HideSearchWithArgs@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x18006A840
 * Callers:
 *     <none>
 * Callees:
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180043654 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::HideSearchWithArgs(XamlLauncherState *this, HSTRING a2)
{
  HSTRING v2; // rdi
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    a2);
  if ( *((_DWORD *)this + 10) == 7 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 8) + 456LL))(*((_QWORD *)this + 8), &v8);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4AB,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v5,
        v6);
    }
    else if ( !v8 )
    {
      XamlLauncherState::PostCortanaOrSearchVisibility((XamlLauncherState *)((char *)this - 24), 0LL, 0LL);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD, HSTRING))(**((_QWORD **)this + 8) + 96LL))(*((_QWORD *)this + 8), v2);
}
