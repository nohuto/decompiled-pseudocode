/*
 * XREFs of ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18006D160
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x1801610D0 (-IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x1801615E0 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_35409324@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180189C7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_35409324@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ClaimForeground@XamlLauncherState@@UEAAXXZ @ 0x180505700 (-ClaimForeground@XamlLauncherState@@UEAAXXZ.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180505AC0 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 */

char __fastcall XamlLauncherState::DismissStartAndCortana(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  char result; // al
  __int64 v6; // rcx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 280) = a2;
  if ( XamlLauncherState::IsStartVisible((XamlLauncherState *)a1) )
  {
    v6 = *(_QWORD *)(a1 + 80);
    if ( v6 && ((*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 24LL))(v6, &v7) < 0 || v7) )
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 144LL))(*(_QWORD *)(a1 + 56));
    LOBYTE(v4) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_35409324>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_35409324>::GetImpl'::`2'::impl,
      v4);
    if ( a2 == 9 )
      XamlLauncherState::ClaimForeground((XamlLauncherState *)a1);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 24LL))(*(_QWORD *)(a1 + 72), 3LL);
    return XamlLauncherState::HideStartAndCortana(a1, a2);
  }
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    v4);
  result = XamlLauncherState::IsFindInStartVisible((XamlLauncherState *)a1);
  if ( result )
    return XamlLauncherState::HideStartAndCortana(a1, a2);
  return result;
}
