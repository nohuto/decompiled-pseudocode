/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_677fd7fe7bf9f77fdf596ecc3be033f0_@@$0?0PEAUICompositionIsland@Composition@UI@Windows@@PEAUICompositionIslandAutomationProviderRequestedEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCompositionIsland@Composition@UI@Windows@@PEAUICompositionIsland@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@PEAUICompositionIslandAutomationProviderRequestedEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUICompositionIsland@Composition@UI@3@PEAUICompositionIslandAutomationProviderRequestedEventArgs@563@@Z@Details@WRL@Microsoft@@UEAAJPEAUICompositionIsland@Composition@UI@Windows@@PEAUICompositionIslandAutomationProviderRequestedEventArgs@789@@Z @ 0x180112C40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18008A820 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180112524 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::ICompositionIsland *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs *,Windows::UI::Composition::ICompositionIslandAutomationProviderRequestedEventArgs *>>::*)(Windows::UI::Composition::ICompositionIsland *,Windows::UI::Composition::ICompositionIslandAutomationProviderRequestedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_677fd7fe7bf9f77fdf596ecc3be033f0_,-1,Windows::UI::Composition::ICompositionIsland *,Windows::UI::Composition::ICompositionIslandAutomationProviderRequestedEventArgs *>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // ebx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = Microsoft::WRL::AgileRef::InternalResolve(
         (Microsoft::WRL::AgileRef *)(a1 + 64),
         &GUID_887ebd87_ac4e_5473_a88b_f0e11d4b9a95,
         &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2, a3);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v7);
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v5);
  return (unsigned int)v5;
}
