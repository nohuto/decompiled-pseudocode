/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::UI::Composition::ICompositionSurface___::_)(Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::UI::Composition::ICompositionSurface_____lambda_14ae217e9e304371259d70194bfbaad7___1_Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus_::_scalar_deleting_destructor_ @ 0x180154D00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::UI::Composition::ICompositionSurface___::___Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::UI::Composition::ICompositionSurface_____lambda_14ae217e9e304371259d70194bfbaad7___1_Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  v4 = (Microsoft::WRL2::NestableRuntimeClass *)a1[2];
  if ( v4 )
  {
    a1[2] = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
