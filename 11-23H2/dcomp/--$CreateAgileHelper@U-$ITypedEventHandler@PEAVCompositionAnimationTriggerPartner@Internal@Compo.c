/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1801863F8
 * Callers:
 *     ?add_TriggerFired@Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@6@PEAUEventRegistrationToken@@@Z @ 0x180187770 (-add_TriggerFired@Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180064D60 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_8627deac8dedf8c98fb010acffb04b2f_@@$0?0PEAUICompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAUICompositionAnimationTriggerPartnerFiredEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAUICompositionAnimationTriggerPartner@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@Internal@Composition@UI@Windows@@PEAUICompositionAnimationTriggerPartnerFiredEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUICompositionAnimationTriggerPartner@Internal@Composition@UI@3@PEAUICompositionAnimationTriggerPartnerFiredEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_8627deac8dedf8c98fb010acffb04b2f_@@@Z @ 0x180186B74 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$_ea_180186B74.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *,Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs *>>(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  int AgileReference; // ebx
  __int64 *v7; // rax
  __int64 v8; // rax
  LPVOID v9; // rax
  __int64 *v10; // rbx
  __int64 v12; // [rsp+40h] [rbp+20h] BYREF
  __int64 *v13; // [rsp+48h] [rbp+28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  v13 = &v12;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v13);
  v5 = v4;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_97445c29_c4c1_5528_a102_b57e6d0231f3, a1, v5);
    if ( AgileReference < 0 )
      goto LABEL_11;
  }
  else
  {
    v7 = (__int64 *)*v4;
    v14 = 0LL;
    *v5 = 0LL;
    v13 = v7;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  }
  v8 = v12;
  v12 = 0LL;
  v14 = v8;
  v9 = DefaultHeap::Alloc(0x48uLL);
  if ( v9 )
    v10 = (__int64 *)Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *,Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs *,Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartnerFiredEventArgs *>>::*)(Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner *,Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartnerFiredEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *,Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_8627deac8dedf8c98fb010acffb04b2f_,-1,Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner *,Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartnerFiredEventArgs *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *,Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_8627deac8dedf8c98fb010acffb04b2f_,-1,Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner *,Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartnerFiredEventArgs *>(
                       v9,
                       &v14);
  else
    v10 = 0LL;
  v13 = v10;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  if ( v10 )
  {
    v13 = 0LL;
    *a2 = v10;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
    AgileReference = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
    AgileReference = -2147024882;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  return (unsigned int)AgileReference;
}
