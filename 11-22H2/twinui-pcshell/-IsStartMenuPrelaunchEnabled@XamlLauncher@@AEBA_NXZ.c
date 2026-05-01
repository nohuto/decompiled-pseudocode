/*
 * XREFs of ?IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ @ 0x1801FF46C
 * Callers:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x1801039F4 (--0XamlLauncher@@QEAA@XZ.c)
 *     ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x1801982C0 (-Prelaunch@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800C4F5C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1801334E0 (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ??$GetForWindowsEdition@$0?HPPPPPPO@@ShellProgramConfiguration@@SA?AU0@PEBG@Z @ 0x1801FB560 (--$GetForWindowsEdition@$0-HPPPPPPO@@ShellProgramConfiguration@@SA-AU0@PEBG@Z.c)
 *     ??$get_value_nothrow@K@ShellProgramConfiguration@@QEBAJPEBGAEAK@Z @ 0x1801FB858 (--$get_value_nothrow@K@ShellProgramConfiguration@@QEBAJPEBGAEAK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_47410862@@@details@wil@@QEAA_NXZ @ 0x1802015E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_47410862@@@details@wil@@QEAA_NXZ.c)
 */

bool __fastcall XamlLauncher::IsStartMenuPrelaunchEnabled(XamlLauncher *this)
{
  PHKEY v1; // rax
  __int64 v2; // rdx
  bool v3; // bl
  int v4; // edi
  BOOL active; // ecx
  XamlLauncher *v7; // [rsp+30h] [rbp+8h] BYREF
  HKEY phkResult; // [rsp+38h] [rbp+10h] BYREF

  v7 = this;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_47410862>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_47410862>::GetImpl'::`2'::impl) )
    return 1;
  v1 = ShellProgramConfiguration::GetForWindowsEdition<-2147483646>(&phkResult);
  LODWORD(v7) = 0;
  v3 = *v1 && ShellProgramConfiguration::get_value_nothrow<unsigned long>(v1, v2, &v7) >= 0;
  v4 = (int)v7;
  active = IsActiveSessionCountLimited();
  if ( !v3 )
    v4 = active;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
  return v4 != 0;
}
