/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@Windows@@PEAPEAU345@@Z @ 0x18006ADD0
 * Callers:
 *     ?AddAutomationProviderRequested_Helper@CompositionIsland@Composition@UI@Windows@@AEAAXPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x18006AB7C (-AddAutomationProviderRequested_Helper@CompositionIsland@Composition@UI@Windows@@AEAAXPEAU-$ITyp.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180064D60 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_677fd7fe7bf9f77fdf596ecc3be033f0_@@$0?0PEAUICompositionIsland@Composition@UI@Windows@@PEAUICompositionIslandAutomationProviderRequestedEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCompositionIsland@Composition@UI@Windows@@PEAUICompositionIsland@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@PEAUICompositionIslandAutomationProviderRequestedEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUICompositionIsland@Composition@UI@3@PEAUICompositionIslandAutomationProviderRequestedEventArgs@563@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_677fd7fe7bf9f77fdf596ecc3be033f0_@@@Z @ 0x18006AEAC (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$_ea_18006AEAC.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs *>>(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  int AgileReference; // ebx
  __int64 v7; // rax
  LPVOID v8; // rax
  __int64 *v9; // rbx
  __int64 *v11; // rax
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
    AgileReference = RoGetAgileReference(0LL, &GUID_887ebd87_ac4e_5473_a88b_f0e11d4b9a95, a1, v5);
    if ( AgileReference < 0 )
      goto LABEL_7;
  }
  else
  {
    v11 = (__int64 *)*v4;
    v14 = 0LL;
    *v5 = 0LL;
    v13 = v11;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  }
  v7 = v12;
  v12 = 0LL;
  v14 = v7;
  v8 = DefaultHeap::Alloc(0x48uLL);
  if ( v8 )
    v9 = (__int64 *)Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::ICompositionIsland *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs *,Windows::UI::Composition::ICompositionIslandAutomationProviderRequestedEventArgs *>>::*)(Windows::UI::Composition::ICompositionIsland *,Windows::UI::Composition::ICompositionIslandAutomationProviderRequestedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_677fd7fe7bf9f77fdf596ecc3be033f0_,-1,Windows::UI::Composition::ICompositionIsland *,Windows::UI::Composition::ICompositionIslandAutomationProviderRequestedEventArgs *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_677fd7fe7bf9f77fdf596ecc3be033f0_,-1,Windows::UI::Composition::ICompositionIsland *,Windows::UI::Composition::ICompositionIslandAutomationProviderRequestedEventArgs *>(
                      v8,
                      &v14);
  else
    v9 = 0LL;
  v13 = v9;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  if ( v9 )
  {
    v13 = 0LL;
    *a2 = v9;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
    AgileReference = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
    AgileReference = -2147024882;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  return (unsigned int)AgileReference;
}
