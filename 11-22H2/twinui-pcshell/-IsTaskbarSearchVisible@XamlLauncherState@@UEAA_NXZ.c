/*
 * XREFs of ?IsTaskbarSearchVisible@XamlLauncherState@@UEAA_NXZ @ 0x1801613D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180161430 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall XamlLauncherState::IsTaskbarSearchVisible(XamlLauncherState *this, __int64 a2)
{
  char v3; // bl
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v7; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    a2);
  v3 = 0;
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)((char *)this - 24)) )
    return 0;
  if ( *((_DWORD *)this + 10) == 6 || (unsigned int)(*((_DWORD *)this + 10) - 7) < 2 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 8) + 456LL))(*((_QWORD *)this + 8), &v7);
    if ( v5 >= 0 )
      return v7 == 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x410,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v5);
  }
  return v3;
}
