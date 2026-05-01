/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UINtUserViewWrapper@@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$ChainInterfaces@UIUwpWindowWrapperInternal@@UIWindowWrapper@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@23@UIViewVisibilityOverride@6Desktop@789@UIViewWrapperDesktopExtension@6Desktop@789@UIViewResourcePolicies@6789@UIClientWindowState@6789@UIViewRecoveryState@6789@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CCD20
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UIUAPViewWrapper@@UIUwpWindowWrapperUniversalInternal@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CC740 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowW.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VUwpWindowWrapperBase@@UIWeakReferenceSource@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804E114C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VUwpWin.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewRecoveryState@ViewManagerInterop@Shell@Internal@Windows@@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CE1F0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewRecoveryState@Vie.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,INtUserViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::ChainInterfaces<IUwpWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapperDesktopExtension,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // r10
  __int64 v5; // rcx
  _DWORD *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9

  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_9230a21d_831d_414f_87f1_f0131a16a75a)
    && !(unsigned int)InlineIsEqualGUID(v2, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5) )
  {
    v3 += 8LL;
    if ( (*v6 != -1272435583
       || v6[1] != *(_DWORD *)&GUID_b4282c81_a540_4f5c_b46e_449970e517a8.Data2
       || v6[2] != *(_DWORD *)GUID_b4282c81_a540_4f5c_b46e_449970e517a8.Data4
       || v6[3] != *(_DWORD *)&GUID_b4282c81_a540_4f5c_b46e_449970e517a8.Data4[4])
      && !(unsigned int)InlineIsEqualGUID(v5, &GUID_be4d17af_f213_4ed0_b92b_33a17d72d96d)
      && !(unsigned int)InlineIsEqualGUID(v7, &GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835)
      && !(unsigned int)InlineIsEqualGUID(v8, &GUID_0edf3272_236c_4754_865e_81f6b2040b56)
      && !(unsigned int)InlineIsEqualGUID(v9, &GUID_35f1648c_265f_402c_b575_c9a325451df5)
      && !(unsigned int)InlineIsEqualGUID(v10, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e) )
    {
      return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
               v3 + 8,
               v11,
               v4);
    }
  }
  *v4 = v3;
  return 0LL;
}
