/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::UI::Composition::ICompositionSurface___::_)(Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::UI::Composition::ICompositionSurface_____lambda_14ae217e9e304371259d70194bfbaad7___1_Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x180155200
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180112524 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _lambda_14ae217e9e304371259d70194bfbaad7_::operator() @ 0x180154C54 (_lambda_14ae217e9e304371259d70194bfbaad7_--operator().c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::UI::Composition::ICompositionSurface___::___Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::UI::Composition::ICompositionSurface_____lambda_14ae217e9e304371259d70194bfbaad7___1_Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus_::Invoke(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = lambda_14ae217e9e304371259d70194bfbaad7_::operator()((__int64 *)(a1 + 16), a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v3);
  return v4;
}
