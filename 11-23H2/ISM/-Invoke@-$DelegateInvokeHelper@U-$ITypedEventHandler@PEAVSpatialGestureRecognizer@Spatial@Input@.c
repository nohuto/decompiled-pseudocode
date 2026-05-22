/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialManipulationCanceledEventArgs@2345@@Foundation@Windows@@V_lambda_03bd8b116ff6fb88940079775efc9b72_@@$0?0PEAUISpatialGestureRecognizer@Spatial@Input@UI@3@PEAUISpatialManipulationCanceledEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialGestureRecognizer@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVSpatialManipulationCanceledEventArgs@Spatial@Input@UI@Windows@@PEAUISpatialManipulationCanceledEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@3@PEAUISpatialManipulationCanceledEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationCanceledEventArgs@789Windows@@@Z @ 0x1800C2B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800C1CF8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialGestureRecognizer *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs *,Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs *>>::*)(Windows::UI::Input::Spatial::ISpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs *>,_lambda_03bd8b116ff6fb88940079775efc9b72_,-1,Windows::UI::Input::Spatial::ISpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs *>::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
