/*
 * XREFs of ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_1183650d033c1ac3e961591be25d6f74_@@$0?0PEAUICompositionGraphicsDevice@Composition@UI@Windows@@PEAUIRenderingDeviceReplacedEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAUICompositionGraphicsDevice@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVRenderingDeviceReplacedEventArgs@Composition@UI@Windows@@PEAUIRenderingDeviceReplacedEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUICompositionGraphicsDevice@Composition@UI@3@PEAUIRenderingDeviceReplacedEventArgs@563@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_1183650d033c1ac3e961591be25d6f74_@@@Z @ 0x1800B7862
 * Callers:
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1800B775C (--$CreateAgileHelper@U-$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002DED4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::ICompositionGraphicsDevice *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::RenderingDeviceReplacedEventArgs *,Windows::UI::Composition::IRenderingDeviceReplacedEventArgs *>>::*)(Windows::UI::Composition::ICompositionGraphicsDevice *,Windows::UI::Composition::IRenderingDeviceReplacedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::RenderingDeviceReplacedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_1183650d033c1ac3e961591be25d6f74_,-1,Windows::UI::Composition::ICompositionGraphicsDevice *,Windows::UI::Composition::IRenderingDeviceReplacedEventArgs *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::RenderingDeviceReplacedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_1183650d033c1ac3e961591be25d6f74_,-1,Windows::UI::Composition::ICompositionGraphicsDevice *,Windows::UI::Composition::IRenderingDeviceReplacedEventArgs *>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rsi
  struct Microsoft::WRL::Details::ModuleBase *v5; // rcx

  v3 = (_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionCapabilities *,IInspectable *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  v5 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::RenderingDeviceReplacedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::RenderingDeviceReplacedEventArgs *>'};
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::RenderingDeviceReplacedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_DWORD *)(a1 + 60) = 1;
  if ( v5 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v5 + 8LL))(v5);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_QWORD *)(a1 + 64) != a2 )
  {
    *(_QWORD *)(a1 + 64) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)a1 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::ICompositionGraphicsDevice *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::RenderingDeviceReplacedEventArgs *,Windows::UI::Composition::IRenderingDeviceReplacedEventArgs *>>::*)(Windows::UI::Composition::ICompositionGraphicsDevice *,Windows::UI::Composition::IRenderingDeviceReplacedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::RenderingDeviceReplacedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_1183650d033c1ac3e961591be25d6f74_,-1,Windows::UI::Composition::ICompositionGraphicsDevice *,Windows::UI::Composition::IRenderingDeviceReplacedEventArgs *>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::RenderingDeviceReplacedEventArgs *>'};
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::RenderingDeviceReplacedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
