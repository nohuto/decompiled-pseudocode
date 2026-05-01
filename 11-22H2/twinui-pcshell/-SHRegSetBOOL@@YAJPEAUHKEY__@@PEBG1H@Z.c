/*
 * XREFs of ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1801BC580
 * Callers:
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x1800F4D94 (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     _lambda_7ce5adc85e5a19fc59ac7a9da48d7a58_::operator() @ 0x1801DA2A4 (_lambda_7ce5adc85e5a19fc59ac7a9da48d7a58_--operator().c)
 *     ?WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAAJPEBG_N@Z @ 0x180247A98 (-WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAAJPEBG_N@Z.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1804682C8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy @ 0x180489074 (CortanaHelpers--UpdateCortanaAboveLockValueBasedOnEnterprisePolicy.c)
 *     ?EnablePreloadForUser@InputAppPreloader@KeyboardHosting@@QEAAXXZ @ 0x18052F1FC (-EnablePreloadForUser@InputAppPreloader@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18053C850 (-OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18053C8C0 (-OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801AAC38 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall SHRegSetBOOL(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, int a4)
{
  __int64 result; // rax
  BOOL v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4 != 0;
  result = _RegSetKeyValueWithSDDL(a1, a2, a3, 4u, (BYTE *)&v5, 4u);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
