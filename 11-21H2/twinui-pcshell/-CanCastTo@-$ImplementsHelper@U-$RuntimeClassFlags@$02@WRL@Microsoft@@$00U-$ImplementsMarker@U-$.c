/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@U?$CloakedIid@UITabbingAwarePositioner@@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007FC50
 * Callers:
 *     ?QueryInterface@HolographicPositioner@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007FDD0 (-QueryInterface@HolographicPositioner@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCImmersiveShellComponentWithGITSite@@UIWeakReferenceSource@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@U?$CloakedIid@UITabbingAwarePositioner@@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180174BCC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCImmer.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource>>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::CloakedIid<ITabbingAwarePositioner>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v4; // rcx
  __int64 v5; // r8
  _DWORD *v6; // rcx
  __int64 v7; // r8
  _DWORD *v8; // r9
  _DWORD *v9; // rcx
  __int64 v10; // r11
  __int64 v11; // r11
  __int64 result; // rax
  unsigned int v13; // r8d
  _DWORD *v14; // r9
  __int64 v15; // r10
  __int64 v16; // r10

  if ( *a2 == -2027141065 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data2
      && a2[2] == *(_DWORD *)GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data4
      && a2[3] == *(_DWORD *)&GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data4[4] )
    {
      goto LABEL_21;
    }
  }
  else if ( *a2 == 684124641
         && a2[1] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data2
         && a2[2] == *(_DWORD *)GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4
         && a2[3] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4[4] )
  {
LABEL_21:
    *a3 = a1;
    return 0LL;
  }
  if ( InlineIsEqualGUID(a2, &GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775) )
  {
    *a3 = v5;
    return 0;
  }
  if ( InlineIsEqualGUID(v4, &GUID_538317c5_5bad_4847_962d_42da294f5e0a) )
  {
    *a3 = v7;
    result = 0LL;
  }
  else if ( InlineIsEqualGUID(v6, &GUID_5090de35_ed23_43be_9714_586c5041026a) )
  {
    *a3 = v10;
    result = 0LL;
  }
  else if ( InlineIsEqualGUID(v9, &GUID_334a8e75_f9cf_4161_9035_68246f9ea21d) )
  {
    *a3 = v11 + 8;
    result = 0LL;
  }
  else
  {
    result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
  {
    if ( InlineIsEqualGUID(v8, &GUID_ee010e17_919a_4068_868b_675acf787303)
      || (v15 += 8LL, *v14 == -97675428)
      && v14[1] == *(_DWORD *)&GUID_fa2d975c_fba1_4f1c_ab07_aad66fcf2d12.Data2
      && v14[2] == *(_DWORD *)GUID_fa2d975c_fba1_4f1c_ab07_aad66fcf2d12.Data4
      && v14[3] == *(_DWORD *)&GUID_fa2d975c_fba1_4f1c_ab07_aad66fcf2d12.Data4[4] )
    {
      *a3 = v15;
      return v13;
    }
    v16 = v15 + 8;
    if ( *v14 == 1920966295
      && v14[1] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
      && v14[2] == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
      && v14[3] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
    {
      *a3 = v16;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v13;
  }
  return result;
}
