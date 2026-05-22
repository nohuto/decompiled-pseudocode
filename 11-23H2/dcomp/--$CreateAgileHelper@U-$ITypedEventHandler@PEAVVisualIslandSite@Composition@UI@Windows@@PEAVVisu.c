/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVVisualIslandSiteEventArgs@234@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVVisualIslandSiteEventArgs@234@@Foundation@Windows@@PEAPEAU345@@Z @ 0x18015A514
 * Callers:
 *     ?add_RequestedSizeChanged@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVVisualIslandSiteEventArgs@234@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x18015AA70 (-add_RequestedSizeChanged@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJPEAU-$ITypedEventHan.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180064D60 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVVisualIslandSiteEventArgs@234@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_99e6d04cff3a7db6848ca69ceea3bb92_@@$0?0PEAUIVisualIslandSite@Composition@UI@Windows@@PEAUIVisualIslandSiteEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVVisualIslandSite@Composition@UI@Windows@@PEAUIVisualIslandSite@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVVisualIslandSiteEventArgs@Composition@UI@Windows@@PEAUIVisualIslandSiteEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUIVisualIslandSite@Composition@UI@3@PEAUIVisualIslandSiteEventArgs@563@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_99e6d04cff3a7db6848ca69ceea3bb92_@@@Z @ 0x18015A91C (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$_ea_18015A91C.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::VisualIslandSite *,Windows::UI::Composition::VisualIslandSiteEventArgs *>>(
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
    AgileReference = RoGetAgileReference(0LL, &GUID_dfbbbd4c_ad63_5aae_82f8_a3ad3ee4549a, a1, v5);
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
    v10 = (__int64 *)Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::VisualIslandSite *,Windows::UI::Composition::IVisualIslandSite *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::VisualIslandSiteEventArgs *,Windows::UI::Composition::IVisualIslandSiteEventArgs *>>::*)(Windows::UI::Composition::IVisualIslandSite *,Windows::UI::Composition::IVisualIslandSiteEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::VisualIslandSite *,Windows::UI::Composition::VisualIslandSiteEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_99e6d04cff3a7db6848ca69ceea3bb92_,-1,Windows::UI::Composition::IVisualIslandSite *,Windows::UI::Composition::IVisualIslandSiteEventArgs *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::VisualIslandSite *,Windows::UI::Composition::VisualIslandSiteEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_99e6d04cff3a7db6848ca69ceea3bb92_,-1,Windows::UI::Composition::IVisualIslandSite *,Windows::UI::Composition::IVisualIslandSiteEventArgs *>(
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
