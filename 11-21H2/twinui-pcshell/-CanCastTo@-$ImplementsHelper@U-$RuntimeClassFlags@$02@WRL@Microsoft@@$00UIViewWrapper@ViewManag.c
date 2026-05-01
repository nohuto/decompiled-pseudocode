/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$ChainInterfaces@UIWindowWrapperInternal@@UIWindowWrapper@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@23@UIViewVisibilityOverride@5Desktop@678@UIViewResourcePolicies@5678@UIClientWindowState@5678@UIViewRecoveryState@5678@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800817D0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800818E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrap.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VWindowWrapperBase@@@Details@23@UIWeakReferenceSource@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803FB2D8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarker@VWi.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::ChainInterfaces<IWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // r11
  _DWORD *v6; // rcx
  _DWORD *v7; // r9
  int v8; // r10d
  __int64 v9; // r9

  if ( *a2 == 2045438746
    && a2[1] == *(_DWORD *)&GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5.Data2
    && a2[2] == *(_DWORD *)GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5.Data4
    && a2[3] == *(_DWORD *)&GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( InlineIsEqualGUID(a2, &GUID_175d1cfe_6fbc_42ba_81e5_e3bc56d5aae9)
    || InlineIsEqualGUID(v3, &GUID_be4d17af_f213_4ed0_b92b_33a17d72d96d)
    || InlineIsEqualGUID(v6, &GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835) )
  {
LABEL_7:
    *v5 = v4;
    return 0LL;
  }
  if ( v8 != 905012364
    || v7[1] != *(_DWORD *)&GUID_35f1648c_265f_402c_b575_c9a325451df5.Data2
    || v7[2] != *(_DWORD *)GUID_35f1648c_265f_402c_b575_c9a325451df5.Data4
    || v7[3] != *(_DWORD *)&GUID_35f1648c_265f_402c_b575_c9a325451df5.Data4[4] )
  {
    if ( !InlineIsEqualGUID(v7, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e) )
      return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
               v4 + 8,
               v9,
               v5);
    goto LABEL_7;
  }
  *v5 = v4 + 8;
  return 0LL;
}
