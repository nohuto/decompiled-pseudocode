/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007D010
 * Callers:
 *     ?QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007CF00 (-QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@@Details@23@UIWeakReferenceSource@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@89Windows@@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1805F01B0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$Implem_ea_1805F01B0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  __int64 v5; // rcx
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r11
  __int64 v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r11

  if ( (unsigned int)InlineIsEqualGUID(a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v2, &GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52)
      || (unsigned int)InlineIsEqualGUID(v5, &GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345) )
    {
      *v6 = v8;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v9, &GUID_2132b005_c604_4354_85bd_8f2e24181b0c) )
    {
      *v10 = v11 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v7;
  }
}
