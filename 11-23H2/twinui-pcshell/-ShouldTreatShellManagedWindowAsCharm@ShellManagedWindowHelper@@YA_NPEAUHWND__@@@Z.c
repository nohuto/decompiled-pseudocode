/*
 * XREFs of ?ShouldTreatShellManagedWindowAsCharm@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x1801D64D4
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800C71E0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PSSBG8dTest@@@details@wil@@QEAA_NXZ @ 0x1801D67B4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PSSBG8dTest@@@details@wil@@QEAA_N.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SOLFSTest@@@details@wil@@QEAA_NXZ @ 0x1801D68AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SOLFSTest@@@details@wil@@QEAA_NXZ.c)
 */

bool __fastcall ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsCharm(HWND hWnd, HWND a2)
{
  bool result; // al

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SOLFSTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SOLFSTest>::GetImpl'::`2'::impl) )
    return GetPropW(hWnd, L"Microsoft.Windows.ShellManagedWindowAsCharm") != 0LL;
  result = wil::details::FeatureImpl<__WilFeatureTraits_Feature_PSSBG8dTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PSSBG8dTest>::GetImpl'::`2'::impl);
  if ( result )
    return GetPropW(hWnd, L"Microsoft.Windows.ShellManagedWindowAsCharm") != 0LL;
  return result;
}
