/*
 * XREFs of ??0_parameters_@?4??cancel_asynchronously@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@4@UIAsyncAction@Foundation@Windows@4@@Z@QEAA@$$QEAU6784@@Z @ 0x1805BC894
 * Callers:
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously$_InitCoro$2 @ 0x1801CF008 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncAction_--cancel_asynchronously$_Ini.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall `winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction>::cancel_asynchronously'::`5'::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  *a2 = 0LL;
  *a1 = v2;
  return a1;
}
