/*
 * XREFs of ?DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ @ 0x1801EAE64
 * Callers:
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1801EA284 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800C4F5C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?HasKeyAccess@SearchSettingsHelper@SearchSettings@@CA_NPEAUHKEY__@@PEBGK@Z @ 0x1801ED4BC (-HasKeyAccess@SearchSettingsHelper@SearchSettings@@CA_NPEAUHKEY__@@PEBGK@Z.c)
 *     ?TryGetHKCU@SearchSettingsHelper@SearchSettings@@CAJPEAPEAUHKEY__@@@Z @ 0x1801EFC24 (-TryGetHKCU@SearchSettingsHelper@SearchSettings@@CAJPEAPEAUHKEY__@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAA_NXZ @ 0x1801F03DC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55370801@@@details@wil@@QEAA_NXZ @ 0x1801F0554 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55370801@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56097011@@@details@wil@@QEAA_NXZ @ 0x1801F0590 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56097011@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
char SearchSettings::SearchSettingsHelper::DoKeysExistAndCanAccess(void)
{
  bool HasKeyAccess; // r15
  bool v1; // r14
  bool v2; // bp
  bool v3; // si
  char v4; // bl
  bool v5; // di
  bool v6; // r12
  bool v7; // al
  bool v8; // zf
  HKEY hKey; // [rsp+50h] [rbp+8h] BYREF

  hKey = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &hKey,
    0LL);
  if ( (int)SearchSettings::SearchSettingsHelper::TryGetHKCU(&hKey) < 0 )
    goto LABEL_25;
  HasKeyAccess = SearchSettings::SearchSettingsHelper::HasKeyAccess(
                   hKey,
                   L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
                   0x3001Fu);
  v1 = SearchSettings::SearchSettingsHelper::HasKeyAccess(
         hKey,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\Dynamic",
         0x3001Fu);
  v2 = SearchSettings::SearchSettingsHelper::HasKeyAccess(
         hKey,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\Dynamic\\Current",
         0x3001Fu);
  v3 = SearchSettings::SearchSettingsHelper::HasKeyAccess(
         hKey,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
         0x2001Fu);
  v4 = 1;
  v5 = 1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_40979072>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_40979072>::GetImpl'::`2'::impl) )
    v5 = SearchSettings::SearchSettingsHelper::HasKeyAccess(
           hKey,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders",
           0x3001Fu);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55370801>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55370801>::GetImpl'::`2'::impl) )
  {
    v6 = SearchSettings::SearchSettingsHelper::HasKeyAccess(
           hKey,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders\\InstalledDates",
           0x3001Fu);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56097011>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56097011>::GetImpl'::`2'::impl) )
    {
      v7 = SearchSettings::SearchSettingsHelper::HasKeyAccess(
             hKey,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders\\Index",
             0x3001Fu);
      if ( !HasKeyAccess || !v1 || !v2 || !v3 || !v5 || !v6 )
        goto LABEL_25;
      v8 = !v7;
    }
    else
    {
      if ( !HasKeyAccess || !v1 || !v2 || !v3 || !v5 )
        goto LABEL_25;
      v8 = !v6;
    }
  }
  else
  {
    if ( !HasKeyAccess || !v1 || !v2 || !v3 )
      goto LABEL_25;
    v8 = !v5;
  }
  if ( v8 )
LABEL_25:
    v4 = 0;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return v4;
}
