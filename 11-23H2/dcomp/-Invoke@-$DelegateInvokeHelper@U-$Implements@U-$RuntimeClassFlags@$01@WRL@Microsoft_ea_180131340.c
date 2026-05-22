/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@PEAVEdgyDetectedEventArgs@23456@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_4c148127995939dff6afbec23fb59fa2_@@$0?0PEAUIEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@PEAUIEdgyDetectedEventArgs@6789Windows@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@PEAUIEdgyExperienceSource@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@PEAUIEdgyDetectedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUIEdgyExperienceSource@Internal@Interactions@Composition@UI@3@PEAUIEdgyDetectedEventArgs@56783@@Z@Details@WRL@Microsoft@@UEAAJPEAUIEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@PEAUIEdgyDetectedEventArgs@789UI@Windows@@@Z @ 0x180131340
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18008A820 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180112524 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *,Windows::UI::Composition::Interactions::Internal::IEdgyExperienceSource *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs *>>::*)(Windows::UI::Composition::Interactions::Internal::IEdgyExperienceSource *,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *,Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_4c148127995939dff6afbec23fb59fa2_,-1,Windows::UI::Composition::Interactions::Internal::IEdgyExperienceSource *,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs *>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // ebx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = Microsoft::WRL::AgileRef::InternalResolve(
         (Microsoft::WRL::AgileRef *)(a1 + 64),
         &GUID_57221046_25cb_5627_8fb9_9785ba8330ff,
         &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2, a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v7);
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v5);
  return (unsigned int)v5;
}
