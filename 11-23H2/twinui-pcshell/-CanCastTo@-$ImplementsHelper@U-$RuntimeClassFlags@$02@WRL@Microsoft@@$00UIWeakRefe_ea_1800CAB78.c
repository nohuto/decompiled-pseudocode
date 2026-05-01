/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$ChainInterfaces@U?$CloakedIid@UIShellPositionerViewHandoffWithShowCommand@@@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CAB78
 * Callers:
 *     ?QueryInterface@HolographicPositioner@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CA7C0 (-QueryInterface@HolographicPositioner@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$ChainInterfaces@U?$CloakedIid@UIShellPositionerViewHandoffWithShowCommand@@@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$ChainInterfaces@U?$CloakedIid@UIShellPositionerViewHandoffWithShowCommand@@@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801B04F4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCIm_ea_1801B04F4.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::ChainInterfaces<Microsoft::WRL::CloakedIid<IShellPositionerViewHandoffWithShowCommand>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>>>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r15
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rcx
  _DWORD *v11; // r9
  _DWORD *v12; // r10
  _DWORD *v13; // r11
  __int64 result; // rax
  __int64 v15; // r15

  if ( (unsigned int)InlineIsEqualGUID(a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    *v4 = v5;
    return 0LL;
  }
  v6 = v5 + 8;
  if ( *a2 == -2027141065
    && a2[1] == *(_DWORD *)&GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data2
    && a2[2] == *(_DWORD *)GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data4
    && a2[3] == *(_DWORD *)&GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data4[4]
    || *a2 == 684124641
    && a2[1] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data2
    && a2[2] == *(_DWORD *)GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4
    && a2[3] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4[4] )
  {
LABEL_21:
    *v4 = v6;
    return 0LL;
  }
  if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775) )
  {
    *v8 = v6 + 8;
    return 0LL;
  }
  v9 = v6 + 16;
  if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_538317c5_5bad_4847_962d_42da294f5e0a)
    || (v9 = v6 + 24, (unsigned int)InlineIsEqualGUID(v10, &GUID_5090de35_ed23_43be_9714_586c5041026a))
    || (v9 = v6 + 32, *a2 == 860524149)
    && *v13 == *(_DWORD *)&GUID_334a8e75_f9cf_4161_9035_68246f9ea21d.Data2
    && *v12 == *(_DWORD *)GUID_334a8e75_f9cf_4161_9035_68246f9ea21d.Data4
    && *v11 == *(_DWORD *)&GUID_334a8e75_f9cf_4161_9035_68246f9ea21d.Data4[4] )
  {
    *v4 = v9;
    result = 0LL;
  }
  else
  {
    result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
  {
    v6 += 48LL;
    if ( *a2 == -837101594
      && *v13 == *(_DWORD *)&GUID_ce1ad7e6_6f3e_45e0_bbf3_cca1181639d0.Data2
      && *v12 == *(_DWORD *)GUID_ce1ad7e6_6f3e_45e0_bbf3_cca1181639d0.Data4
      && *v11 == *(_DWORD *)&GUID_ce1ad7e6_6f3e_45e0_bbf3_cca1181639d0.Data4[4]
      || *a2 == -301920745
      && *v13 == *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data2
      && *v12 == *(_DWORD *)GUID_ee010e17_919a_4068_868b_675acf787303.Data4
      && *v11 == *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data4[4] )
    {
      goto LABEL_21;
    }
    v15 = v6 + 8;
    if ( *a2 == 1920966295
      && *v13 == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
      && *v12 == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
      && *v11 == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
    {
      *v4 = v15;
      result = 0LL;
    }
    else
    {
      result = 2147500034LL;
    }
    if ( (_DWORD)result == -2147467262 )
      return 2147500034LL;
  }
  return result;
}
