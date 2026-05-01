/*
 * XREFs of ??0?$notify_awaiter@AEAU?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAA@AEAU?$IAsyncOperation@_N@Foundation@Windows@2@PEAUcancellable_promise@2@@Z @ 0x18069DFA4
 * Callers:
 *     ??$await_transform@AEAU?$IAsyncOperation@_N@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_PAEAU?$IAsyncOperation@_N@Foundation@Windows@2@@Z @ 0x18069C078 (--$await_transform@AEAU-$IAsyncOperation@_N@Foundation@Windows@winrt@@@-$promise_base@Upromise_t.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<bool> &>::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<bool> &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 24) = 1;
  if ( a3 )
  {
    *(_QWORD *)a1 = a3;
    a3[1] = a1;
    *a3 = _lambda_f8e2cc796e8b9f8a5408b0712580aa8d_::_lambda_invoker_cdecl_;
  }
  return a1;
}
