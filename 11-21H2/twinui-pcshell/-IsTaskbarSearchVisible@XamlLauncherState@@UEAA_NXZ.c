/*
 * XREFs of ?IsTaskbarSearchVisible@XamlLauncherState@@UEAA_NXZ @ 0x1801AD970
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18012E3CC (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019759C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall XamlLauncherState::IsTaskbarSearchVisible(XamlLauncherState *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FindInStart>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_FindInStart>::GetImpl'::`2'::impl,
    0,
    a3,
    a4);
  v5 = 0;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl)
    || XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)((char *)this - 24)) )
  {
    return 0;
  }
  if ( (unsigned int)(*((_DWORD *)this + 10) - 6) <= 2 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 8) + 456LL))(*((_QWORD *)this + 8), &v9);
    if ( v6 >= 0 )
      return v9 == 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3C5,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v6);
  }
  return v5;
}
