/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_1183650d033c1ac3e961591be25d6f74_@@$0?0PEAUICompositionGraphicsDevice@Composition@UI@Windows@@PEAUIRenderingDeviceReplacedEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAUICompositionGraphicsDevice@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVRenderingDeviceReplacedEventArgs@Composition@UI@Windows@@PEAUIRenderingDeviceReplacedEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUICompositionGraphicsDevice@Composition@UI@3@PEAUIRenderingDeviceReplacedEventArgs@563@@Z@Details@WRL@Microsoft@@UEAAJPEAUICompositionGraphicsDevice@Composition@UI@Windows@@PEAUIRenderingDeviceReplacedEventArgs@789@@Z @ 0x1801573A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18008A820 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180112524 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::ICompositionGraphicsDevice *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::RenderingDeviceReplacedEventArgs *,Windows::UI::Composition::IRenderingDeviceReplacedEventArgs *>>::*)(Windows::UI::Composition::ICompositionGraphicsDevice *,Windows::UI::Composition::IRenderingDeviceReplacedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::RenderingDeviceReplacedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_1183650d033c1ac3e961591be25d6f74_,-1,Windows::UI::Composition::ICompositionGraphicsDevice *,Windows::UI::Composition::IRenderingDeviceReplacedEventArgs *>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // ebx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = Microsoft::WRL::AgileRef::InternalResolve(
         (Microsoft::WRL::AgileRef *)(a1 + 64),
         &GUID_259b32be_bd06_53c2_bd51_89e8e0f9e239,
         &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2, a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v7);
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v5);
  return (unsigned int)v5;
}
