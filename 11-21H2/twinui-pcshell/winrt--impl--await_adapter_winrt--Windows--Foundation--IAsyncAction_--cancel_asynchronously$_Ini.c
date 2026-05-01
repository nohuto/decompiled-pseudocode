/*
 * XREFs of winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously$_InitCoro$2 @ 0x1801CF008
 * Callers:
 *     ?cancel_asynchronously@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@UIAsyncAction@Foundation@Windows@3@@Z @ 0x1801CF0E4 (-cancel_asynchronously@-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@CA-A.c)
 * Callees:
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously$_ResumeCoro$1 @ 0x1801B4070 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncAction_--cancel_asynchronously$_Res.c)
 *     ??0_parameters_@?4??cancel_asynchronously@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@4@UIAsyncAction@Foundation@Windows@4@@Z@QEAA@$$QEAU6784@@Z @ 0x1805BC894 (--0_parameters_@-4--cancel_asynchronously@-$await_adapter@UIAsyncAction@Foundation@Windows@winrt.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously__InitCoro_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  _DWORD *v5; // r10
  _BYTE *v6; // r11

  `winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction>::cancel_asynchronously'::`5'::_parameters_::_parameters_(
    a3 + 257,
    a4);
  *(_QWORD *)v4 = winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously__ResumeCoro_1;
  *(_DWORD *)(v4 + 8) = *v5 != 0 ? 2 : 65538;
  *v6 = 0;
  *(_BYTE *)(v4 + 256) = 0;
  winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously__ResumeCoro_1(v4);
}
