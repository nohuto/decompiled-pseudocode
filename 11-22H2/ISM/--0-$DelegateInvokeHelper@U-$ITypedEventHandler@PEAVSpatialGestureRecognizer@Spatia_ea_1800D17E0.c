/*
 * XREFs of ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@V_lambda_e156a27bd331df06d8399b9d8943173e_@@$0?0PEAUISpatialGestureRecognizer@Spatial@Input@UI@3@PEAUISpatialNavigationUpdatedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialGestureRecognizer@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVSpatialNavigationUpdatedEventArgs@Spatial@Input@UI@Windows@@PEAUISpatialNavigationUpdatedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@3@PEAUISpatialNavigationUpdatedEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_e156a27bd331df06d8399b9d8943173e_@@@Z @ 0x1800D17E0
 * Callers:
 *     ?RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ @ 0x1800D3918 (-RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialGestureRecognizer *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *,Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs *>>::*)(Windows::UI::Input::Spatial::ISpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>,_lambda_e156a27bd331df06d8399b9d8943173e_,-1,Windows::UI::Input::Spatial::ISpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>,_lambda_e156a27bd331df06d8399b9d8943173e_,-1,Windows::UI::Input::Spatial::ISpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs *>(
        __int64 a1,
        _OWORD *a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *a2;
  *(_QWORD *)a1 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialGestureRecognizer *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *,Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs *>>::*)(Windows::UI::Input::Spatial::ISpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>,_lambda_e156a27bd331df06d8399b9d8943173e_,-1,Windows::UI::Input::Spatial::ISpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs *>::`vftable';
  return a1;
}
