/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_677fd7fe7bf9f77fdf596ecc3be033f0_@@$0?0PEAUICompositionIsland@Composition@UI@Windows@@PEAUICompositionIslandAutomationProviderRequestedEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCompositionIsland@Composition@UI@Windows@@PEAUICompositionIsland@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@PEAUICompositionIslandAutomationProviderRequestedEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUICompositionIsland@Composition@UI@3@PEAUICompositionIslandAutomationProviderRequestedEventArgs@563@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000E070
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::ICompositionIsland *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs *,Windows::UI::Composition::ICompositionIslandAutomationProviderRequestedEventArgs *>>::*)(Windows::UI::Composition::ICompositionIsland *,Windows::UI::Composition::ICompositionIslandAutomationProviderRequestedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_677fd7fe7bf9f77fdf596ecc3be033f0_,-1,Windows::UI::Composition::ICompositionIsland *,Windows::UI::Composition::ICompositionIslandAutomationProviderRequestedEventArgs *>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a1 + 16);
  a1[15] = -1073741823;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a1 + 8);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x48uLL);
  return a1;
}
