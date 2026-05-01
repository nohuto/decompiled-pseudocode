/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VWindowWrapperBase@@@Details@23@UIWeakReferenceSource@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1803FC8E4
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803FC9A0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1803FC9A0.c)
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewResourcePolicies@5789@UIClientWindowState@5789@UIViewRecoveryState@5789@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1803FB4EC (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibility.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<WindowWrapperBase>,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  __int64 v5; // r8
  __int64 result; // rax
  _DWORD *v7; // r10

  v3 = *a2;
  *(GUID *)(a3 + 16 * v3) = GUID_9230a21d_831d_414f_87f1_f0131a16a75a;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_175d1cfe_6fbc_42ba_81e5_e3bc56d5aae9;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_be4d17af_f213_4ed0_b92b_33a17d72d96d;
  *a2 = v3 + 4;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::FillArrayWithIid(
    v3,
    a2,
    a3);
  LODWORD(v4) = *v4;
  *(GUID *)(v5 + 16LL * (unsigned int)v4) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  *(GUID *)(v5 + 16LL * (unsigned int)((_DWORD)v4 + 1)) = GUID_a52f5b9b_ee55_4add_b559_55f1c012e15f;
  *(GUID *)(v5 + 16LL * (unsigned int)((_DWORD)v4 + 2)) = GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67;
  result = (unsigned int)((_DWORD)v4 + 3);
  *v7 = result;
  return result;
}
