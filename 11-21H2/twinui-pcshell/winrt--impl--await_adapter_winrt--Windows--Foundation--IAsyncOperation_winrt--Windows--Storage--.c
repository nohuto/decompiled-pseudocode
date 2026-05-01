/*
 * XREFs of winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___::cancel_asynchronously$_InitCoro$2 @ 0x1801B3F90
 * Callers:
 *     ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperation@I@Foundation@Windows@3@@Z @ 0x1801B420C (-cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winr.c)
 * Callees:
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously$_ResumeCoro$1 @ 0x1801B4070 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncAction_--cancel_asynchronously$_Res.c)
 *     ??0_parameters_@?4??cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@4@U?$IAsyncOperation@_N@Foundation@Windows@4@@Z@QEAA@$$QEAU6784@@Z @ 0x18049A118 (--0_parameters_@-4--cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___::cancel_asynchronously__InitCoro_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  _DWORD *v5; // r10
  _BYTE *v6; // r11

  `winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>>::cancel_asynchronously'::`5'::_parameters_::_parameters_(
    a3 + 257,
    a4);
  *(_QWORD *)v4 = winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously__ResumeCoro_1;
  *(_DWORD *)(v4 + 8) = *v5 != 0 ? 2 : 65538;
  *v6 = 0;
  *(_BYTE *)(v4 + 256) = 0;
  return winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously__ResumeCoro_1(v4);
}
