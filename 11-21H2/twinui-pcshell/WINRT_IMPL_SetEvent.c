/*
 * XREFs of WINRT_IMPL_SetEvent @ 0x180189C6A
 * Callers:
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@4@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@234@AEBU6234@0@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x18003E3F0 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@_ea_18003E3F0.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x180043AC0 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UWindowTabDataModel@Shell@UI@Internal@Windo.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA@AEBU?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x1801C8D40 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UAppData@Internal@InstallControl@Preview@St.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@4@YA@AEBU?$IAsyncOperation@_N@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x1802387E0 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@Ushared_type@-.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_IMPL_SetEvent(HANDLE hEvent)
{
  return SetEvent(hEvent);
}
