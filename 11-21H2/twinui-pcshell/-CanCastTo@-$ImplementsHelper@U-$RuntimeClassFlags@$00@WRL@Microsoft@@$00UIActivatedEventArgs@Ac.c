/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIActivatedEventArgs@Activation@ApplicationModel@Windows@@UIActivatedEventArgsWithUser@567@U?$CloakedIid@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@@@23@U?$CloakedIid@UIActivatedEventArgsInternal@Activation@ApplicationModel@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18013A3F8
 * Callers:
 *     ?QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007CF00 (-QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCActivatedEventArgsBase@@@Details@23@UIWeakReferenceSource@@UIStartupTaskActivatedEventArgs@Activation@ApplicationModel@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1805727B4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$ImplementsMarker@VC.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@@Details@23@UIWeakReferenceSource@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@89Windows@@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1805F01B0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$Implem_ea_1805F01B0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v4; // rcx
  _QWORD *v5; // r10
  __int64 v6; // r11
  unsigned int v7; // r8d
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  _DWORD *v10; // r9

  if ( *a2 == -815458541
    && a2[1] == *(_DWORD *)&GUID_cf651713_cd08_4fd8_b697_a281b6544e2e.Data2
    && a2[2] == *(_DWORD *)GUID_cf651713_cd08_4fd8_b697_a281b6544e2e.Data4
    && a2[3] == *(_DWORD *)&GUID_cf651713_cd08_4fd8_b697_a281b6544e2e.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c);
    v7 = 0;
    if ( IsEqualGUID
      || InlineIsEqualGUID(v4, &GUID_99fc44e3_ce9a_4284_bf04_76331d1b1788)
      || InlineIsEqualGUID(v8, &GUID_eb97821f_f2b3_4129_a736_1cbadda865e8)
      || (v6 += 8LL, *v10 == -1796592748)
      && v10[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && v10[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && v10[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4]
      || InlineIsEqualGUID(v9, &GUID_00000003_0000_0000_c000_000000000046) )
    {
      *v5 = v6;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v7;
  }
}
