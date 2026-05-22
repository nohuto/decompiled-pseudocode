/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_644c307dd9b9cb2023e3dcd56f2b9d4c_@@$0?0PEAUIInspectable@@PEAUICompositionBatchCompletedEventArgs@Composition@UI@Windows@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIInspectable@@U?$AggregateType@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@PEAUICompositionBatchCompletedEventArgs@234@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUICompositionBatchCompletedEventArgs@Composition@UI@3@@Z@Details@WRL@Microsoft@@UEAAJPEAUIInspectable@@PEAUICompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Z @ 0x18002D740
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180112524 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<IInspectable *,Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionBatchCompletedEventArgs *,Windows::UI::Composition::ICompositionBatchCompletedEventArgs *>>::*)(IInspectable *,Windows::UI::Composition::ICompositionBatchCompletedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_644c307dd9b9cb2023e3dcd56f2b9d4c_,-1,IInspectable *,Windows::UI::Composition::ICompositionBatchCompletedEventArgs *>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v11 = 0LL;
  if ( v3 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
           v3,
           &GUID_9df03456_3383_508b_9c75_ee840a7e1a39,
           &v11);
    if ( v7 < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v11);
LABEL_8:
      Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v7);
      return (unsigned int)v7;
    }
    v5 = v11;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, a2, a3);
  v9 = v11;
  v7 = v8;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v7 < 0 )
    goto LABEL_8;
  return (unsigned int)v7;
}
