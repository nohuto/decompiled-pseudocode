/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@@Details@23@UIXamlAltTabViewHostInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802EC616
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIXamlAltTabViewHostInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802EC940 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802EC940.c)
 *     ?XamlAltTabViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x180766BFC (-XamlAltTabViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180183418 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiv_ea_180183418.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IAltTabViewHost>>,IXamlAltTabViewHostInternal>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // r10
  __int64 result; // rax
  _DWORD *v7; // r10
  _QWORD *v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r11d

  if ( InlineIsEqualGUID(a2, &GUID_405444d2_baa5_48ed_abfe_a673f70be863)
    || InlineIsEqualGUID(v2, &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9) )
  {
    *v3 = v4;
    return 0LL;
  }
  result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>::CanCastTo(
             v4 + 8,
             v5,
             v3);
  if ( (_DWORD)result != -2147467262 )
    return result;
  if ( InlineIsEqualGUID(v7, &GUID_3e53d16b_fedb_45ad_802b_4418c91afa31) )
  {
    *v8 = v9 + 120;
    return 0LL;
  }
  return v10;
}
