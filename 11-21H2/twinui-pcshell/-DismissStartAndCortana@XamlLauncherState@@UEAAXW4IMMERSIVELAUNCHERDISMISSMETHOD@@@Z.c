/*
 * XREFs of ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180043B60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x18012E740 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019759C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     ?IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x1801AD890 (-IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1804505C0 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 */

char __fastcall XamlLauncherState::DismissStartAndCortana(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  char result; // al
  int v6; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 272) = a2;
  if ( XamlLauncherState::IsStartVisible((XamlLauncherState *)a1) )
  {
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 && ((*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 24LL))(v4, &v6) < 0 || v6) )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_FindInStart>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_FindInStart>::GetImpl'::`2'::impl,
        0LL);
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 144LL))(*(_QWORD *)(a1 + 56));
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 24LL))(*(_QWORD *)(a1 + 72), 3LL);
    return XamlLauncherState::HideStartAndCortana(a1, a2);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FindInStart>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_FindInStart>::GetImpl'::`2'::impl,
    0LL);
  result = wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl);
  if ( result )
  {
    result = XamlLauncherState::IsFindInStartVisible((XamlLauncherState *)a1);
    if ( result )
      return XamlLauncherState::HideStartAndCortana(a1, a2);
  }
  return result;
}
