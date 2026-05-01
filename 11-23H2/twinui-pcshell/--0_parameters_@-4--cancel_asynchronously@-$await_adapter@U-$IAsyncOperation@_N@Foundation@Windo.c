/*
 * XREFs of ??0_parameters_@?4??cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@4@U?$IAsyncOperation@_N@Foundation@Windows@4@@Z@QEAA@$$QEAU6784@@Z @ 0x1802338EC
 * Callers:
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::Rect___::cancel_asynchronously$_InitCoro$2 @ 0x1801DD1E8 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Foundatio.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Management::Deployment::PackageVolume___::cancel_asynchronously$_InitCoro$2 @ 0x18024914C (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Managemen.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::cancel_asynchronously$_InitCoro$2 @ 0x180253164 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windo_ea_180253164.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall `winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>>::cancel_asynchronously'::`5'::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  *a2 = 0LL;
  *a1 = v2;
  return a1;
}
