/*
 * XREFs of ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_3d496c035e90ca621831c23f7f7413fd_@@$0?0PEAUIHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@PEAUIHolographicCompositor@2345@@Internal@Foundation@Windows@@W4HolographicCompositorStatus@2Composition@UI@4@@Foundation@Windows@@EAAJPEAUIHolographicCompositor@Internal@Composition@UI@3@W4HolographicCompositorStatus@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_3d496c035e90ca621831c23f7f7413fd_@@@Z @ 0x1801151F0
 * Callers:
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180114904 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Win.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002DED4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::Internal::HolographicCompositor *,Windows::UI::Composition::Internal::IHolographicCompositor *>,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>::*)(Windows::UI::Composition::Internal::IHolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>,Microsoft::WRL::FtmBase>,_lambda_3d496c035e90ca621831c23f7f7413fd_,-1,Windows::UI::Composition::Internal::IHolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>,Microsoft::WRL::FtmBase>,_lambda_3d496c035e90ca621831c23f7f7413fd_,-1,Windows::UI::Composition::Internal::IHolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rsi
  struct Microsoft::WRL::Details::ModuleBase *v5; // rcx

  v3 = (_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionCapabilities *,IInspectable *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  v5 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>'};
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_DWORD *)(a1 + 60) = 1;
  if ( v5 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v5 + 8LL))(v5);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_QWORD *)(a1 + 64) != a2 )
  {
    *(_QWORD *)(a1 + 64) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)a1 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::Internal::HolographicCompositor *,Windows::UI::Composition::Internal::IHolographicCompositor *>,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>::*)(Windows::UI::Composition::Internal::IHolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>,Microsoft::WRL::FtmBase>,_lambda_3d496c035e90ca621831c23f7f7413fd_,-1,Windows::UI::Composition::Internal::IHolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>'};
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
