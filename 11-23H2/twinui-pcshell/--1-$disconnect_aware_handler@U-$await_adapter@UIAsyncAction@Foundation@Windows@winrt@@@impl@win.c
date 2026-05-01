/*
 * XREFs of ??1?$disconnect_aware_handler@U?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@XZ @ 0x1800AD990
 * Callers:
 *     ??$?0U?$disconnect_aware_handler@U?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@@AsyncActionCompletedHandler@Foundation@Windows@winrt@@QEAA@U?$disconnect_aware_handler@U?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@@impl@3@@Z @ 0x1800AD8FC (--$-0U-$disconnect_aware_handler@U-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@.c)
 *     ?Release@?$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@U?$disconnect_aware_handler@U?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@@impl@4@@impl@winrt@@UEAAIXZ @ 0x1800DB040 (-Release@-$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@U-$disconn.c)
 *     _winrt::Windows::Foundation::AsyncActionCompletedHandler::AsyncActionCompletedHandler_winrt::impl::disconnect_aware_handler_winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction______::_1_::dtor$0 @ 0x1802B9144 (_winrt--Windows--Foundation--AsyncActionCompletedHandler--AsyncActionCompletedHandler_winrt--imp.c)
 * Callees:
 *     ?Complete@?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@AEAAXXZ @ 0x1800DB3B0 (-Complete@-$disconnect_aware_handler@U-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWit.c)
 */

__int64 __fastcall winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction>>::~disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( a1[3] )
    result = winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>>::Complete();
  if ( *a1 )
    return winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
  return result;
}
