/*
 * XREFs of wil::details::lambda_call__lambda_95be1dc75a32746d1d0a9ea40b156189___::_lambda_call__lambda_95be1dc75a32746d1d0a9ea40b156189___ @ 0x180410DC4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_edea367c6ddb8323a5f98a4f6f2a45c2___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x1804156D0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_1804156D0.c)
 *     _UwpWindowWrapperBase::RequestCloseAsync_::_1_::dtor$2 @ 0x18041659B (_UwpWindowWrapperBase--RequestCloseAsync_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_95be1dc75a32746d1d0a9ea40b156189___::_lambda_call__lambda_95be1dc75a32746d1d0a9ea40b156189___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 565) = 0;
  }
  return result;
}
