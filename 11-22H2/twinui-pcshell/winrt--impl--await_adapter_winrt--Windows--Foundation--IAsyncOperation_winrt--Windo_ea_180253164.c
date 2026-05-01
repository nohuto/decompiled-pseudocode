/*
 * XREFs of winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::cancel_asynchronously$_InitCoro$2 @ 0x180253164
 * Callers:
 *     ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x180253384 (-cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@wi.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0_parameters_@?4??cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@4@U?$IAsyncOperation@_N@Foundation@Windows@4@@Z@QEAA@$$QEAU6784@@Z @ 0x1802338EC (--0_parameters_@-4--cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windo.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::cancel_asynchronously$_ResumeCoro$1 @ 0x180253260 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windo_ea_180253260.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::cancel_asynchronously__InitCoro_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // r11
  _DWORD *v5; // r8
  _BYTE *v6; // r10

  `winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>>::cancel_asynchronously'::`5'::_parameters_::_parameters_(
    (_QWORD *)(a3 + 34),
    a4);
  *(_QWORD *)v4 = winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::cancel_asynchronously__ResumeCoro_1;
  *(_DWORD *)(v4 + 8) = *v5 != 0 ? 2 : 65538;
  *v6 = 0;
  *(_BYTE *)(v4 + 33) = 0;
  return winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::cancel_asynchronously__ResumeCoro_1(v4);
}
