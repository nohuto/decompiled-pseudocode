/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NXZ @ 0x1800D1AC0
 * Callers:
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x180082A60 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1800CADF0 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x1800D0870 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1800D15B0 (-IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x1800D1850 (-ChangeWindowType@CClassicWindow@@UEAA-AW4WindowChangeFlags@@W42@@Z.c)
 *     ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x1800D1A44 (-s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 *     ?ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ @ 0x1800D1A80 (-ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ.c)
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z @ 0x1800D2FF0 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1800D34D0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?CanViewMoveDesktops@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@@Z @ 0x1800D3C80 (-CanViewMoveDesktops@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805FAC90 (-IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtua.c)
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18076488C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D1BA8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x1800D1F90 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil_details_MapReportingKind @ 0x1803A51C4 (wil_details_MapReportingKind.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(_DWORD *a1)
{
  unsigned __int8 v2; // bl
  int v3; // eax
  unsigned int v4; // r10d
  char v6; // [rsp+30h] [rbp-38h]
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  int v8; // [rsp+78h] [rbp+10h] BYREF
  char v9; // [rsp+7Ch] [rbp+14h]
  char v10; // [rsp+80h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::GetCachedFeatureEnabledState(a1, &v7);
  v2 = v7 & 1;
  if ( (*a1 & 4) == 0 )
    v7 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::GetCachedFeatureEnabledState(
                      a1,
                      &v10);
  v8 = 0;
  v9 = 2;
  LODWORD(v7) = 3;
  v3 = wil_details_MapReportingKind(3LL, v2);
  if ( (unsigned int)wil::details::ReportUsageToServiceDirect(a1 + 2, 45035559LL, (v4 >> 10) & 1, (v4 >> 11) & 1, v3, 0)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    v6 = 0;
    g_wil_details_pfnFeatureLoggingHook(45035559LL, &v8, 0LL, v2, &v7, 0LL, v6, 1LL);
  }
  return v2;
}
