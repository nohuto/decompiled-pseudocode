/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VUwpWindowWrapperBase@@@Details@23@UIWeakReferenceSource@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180404330
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1804043E0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpW_ea_1804043E0.c)
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewResourcePolicies@5789@UIClientWindowState@5789@UIViewRecoveryState@5789@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1803FB4EC (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibility.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<UwpWindowWrapperBase>,IWeakReferenceSource,ILegacyViewWrapper>::FillArrayWithIid(
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
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_b4282c81_a540_4f5c_b46e_449970e517a8;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_be4d17af_f213_4ed0_b92b_33a17d72d96d;
  *a2 = v3 + 4;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::FillArrayWithIid(
    v3,
    a2,
    a3);
  LODWORD(v4) = *v4;
  *(GUID *)(v5 + 16LL * (unsigned int)v4) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  *(GUID *)(v5 + 16LL * (unsigned int)((_DWORD)v4 + 1)) = GUID_2dd4e662_f456_4daf_aeff_84a1c012e15f;
  result = (unsigned int)((_DWORD)v4 + 2);
  *v7 = result;
  return result;
}
