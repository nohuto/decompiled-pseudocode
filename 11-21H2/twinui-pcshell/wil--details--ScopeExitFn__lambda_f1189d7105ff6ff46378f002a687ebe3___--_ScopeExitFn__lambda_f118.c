/*
 * XREFs of wil::details::ScopeExitFn__lambda_f1189d7105ff6ff46378f002a687ebe3___::_ScopeExitFn__lambda_f1189d7105ff6ff46378f002a687ebe3___ @ 0x1804092AC
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_7406a721fa5d252aee7de31cc0a40e84___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x18040B400 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_18040B400.c)
 *     _WindowWrapperBase::RequestCloseAsync_::_1_::dtor$2 @ 0x18040BD1B (_WindowWrapperBase--RequestCloseAsync_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_f1189d7105ff6ff46378f002a687ebe3___::_ScopeExitFn__lambda_f1189d7105ff6ff46378f002a687ebe3___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 573) = 0;
  }
  return result;
}
