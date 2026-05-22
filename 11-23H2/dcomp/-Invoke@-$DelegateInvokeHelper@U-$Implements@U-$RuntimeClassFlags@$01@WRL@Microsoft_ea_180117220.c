/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_3d496c035e90ca621831c23f7f7413fd_@@$0?0PEAUIHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@PEAUIHolographicCompositor@2345@@Internal@Foundation@Windows@@W4HolographicCompositorStatus@2Composition@UI@4@@Foundation@Windows@@EAAJPEAUIHolographicCompositor@Internal@Composition@UI@3@W4HolographicCompositorStatus@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@789Windows@@@Z @ 0x180117220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18008A820 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180112524 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::Internal::HolographicCompositor *,Windows::UI::Composition::Internal::IHolographicCompositor *>,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>::*)(Windows::UI::Composition::Internal::IHolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>,Microsoft::WRL::FtmBase>,_lambda_3d496c035e90ca621831c23f7f7413fd_,-1,Windows::UI::Composition::Internal::IHolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>::Invoke(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  int v5; // ebx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = Microsoft::WRL::AgileRef::InternalResolve(
         (Microsoft::WRL::AgileRef *)(a1 + 64),
         &GUID_4bb3f672_4104_5be4_8aa1_b0c3a73881c5,
         &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, a2, a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v7);
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v5);
  return (unsigned int)v5;
}
