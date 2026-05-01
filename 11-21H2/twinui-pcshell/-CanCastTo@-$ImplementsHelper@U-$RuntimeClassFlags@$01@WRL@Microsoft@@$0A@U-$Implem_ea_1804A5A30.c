/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@@Details@23@UIExternalDragHost@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804A5A30
 * Callers:
 *     ?CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A590C (-CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInterna.c)
 *     ?Get@?$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804A5CF0 (-Get@-$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804A5DF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1804A5DF0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIExternalDragHost@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804A3148 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIExternalDragHost@@@De.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IPPIAllUpViewHost>>,IExternalDragHost>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r11
  unsigned int v6; // r10d
  _DWORD *v7; // r9

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_0cbeff0b_7751_4b77_8907_debf5cc3df7a);
  v6 = 0;
  if ( IsEqualGUID || InlineIsEqualGUID(v3, &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9) )
  {
    *v4 = v5;
  }
  else if ( *v7 == -1811144131
         && v7[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
         && v7[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
         && v7[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
  {
    *v4 = v5 + 8;
  }
  else
  {
    return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IExternalDragHost>::CanCastTo(
                           v5 + 120,
                           v7);
  }
  return v6;
}
