/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVVisualIslandSiteEventArgs@234@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_99e6d04cff3a7db6848ca69ceea3bb92_@@$0?0PEAUIVisualIslandSite@Composition@UI@Windows@@PEAUIVisualIslandSiteEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVVisualIslandSite@Composition@UI@Windows@@PEAUIVisualIslandSite@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVVisualIslandSiteEventArgs@Composition@UI@Windows@@PEAUIVisualIslandSiteEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUIVisualIslandSite@Composition@UI@3@PEAUIVisualIslandSiteEventArgs@563@@Z@Details@WRL@Microsoft@@UEAAJPEAUIVisualIslandSite@Composition@UI@Windows@@PEAUIVisualIslandSiteEventArgs@789@@Z @ 0x18015A9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18008A820 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180112524 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::VisualIslandSite *,Windows::UI::Composition::IVisualIslandSite *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::VisualIslandSiteEventArgs *,Windows::UI::Composition::IVisualIslandSiteEventArgs *>>::*)(Windows::UI::Composition::IVisualIslandSite *,Windows::UI::Composition::IVisualIslandSiteEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::VisualIslandSite *,Windows::UI::Composition::VisualIslandSiteEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_99e6d04cff3a7db6848ca69ceea3bb92_,-1,Windows::UI::Composition::IVisualIslandSite *,Windows::UI::Composition::IVisualIslandSiteEventArgs *>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // ebx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = Microsoft::WRL::AgileRef::InternalResolve(
         (Microsoft::WRL::AgileRef *)(a1 + 64),
         &GUID_dfbbbd4c_ad63_5aae_82f8_a3ad3ee4549a,
         &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2, a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v7);
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v5);
  return (unsigned int)v5;
}
