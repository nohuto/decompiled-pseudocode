/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::UI::Composition::ICompositionSurface___::_)(Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::UI::Composition::ICompositionSurface_____lambda_14ae217e9e304371259d70194bfbaad7___1_Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::UI::Composition::ICompositionSurface_____lambda_14ae217e9e304371259d70194bfbaad7___1_Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus_ @ 0x180154BD0
 * Callers:
 *     ?put_Completed@VisualCapture@Composition@UI@Windows@@QEAAJPEAU?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@4@@Z @ 0x18015545C (-put_Completed@VisualCapture@Composition@UI@Windows@@QEAAJPEAU-$IAsyncOperationCompletedHandler@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::UI::Composition::ICompositionSurface___::___Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::UI::Composition::ICompositionSurface_____lambda_14ae217e9e304371259d70194bfbaad7___1_Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::UI::Composition::ICompositionSurface_____lambda_14ae217e9e304371259d70194bfbaad7___1_Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus_(
        __int64 a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionCapabilities *,IInspectable *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::ICompositionSurface *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_QWORD *)(a1 + 16) != a2 )
  {
    *(_QWORD *)(a1 + 16) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)a1 = &off_1801D7340;
  return a1;
}
