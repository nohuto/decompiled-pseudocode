/*
 * XREFs of ??0_parameters_@?4??cancel_asynchronously@?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@4@U?$IAsyncOperationWithProgress@II@Foundation@Windows@4@@Z@QEAA@$$QEAU6784@@Z @ 0x180233904
 * Callers:
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Management::Deployment::DeploymentResult_winrt::Windows::Management::Deployment::DeploymentProgress___::cancel_asynchronously$_InitCoro$2 @ 0x180249228 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperationWithProgress_winrt--Window.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_unsigned_int_unsigned_int___::cancel_asynchronously$_InitCoro$2 @ 0x180279F64 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperationWithProgress__ea_180279F64.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall `winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::cancel_asynchronously'::`5'::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  *a2 = 0LL;
  *a1 = v2;
  return a1;
}
