/*
 * XREFs of WINRT_IMPL_CloseHandle @ 0x180189338
 * Callers:
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@4@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@234@AEBU6234@0@Z@@impl@winrt@@UEAAIXZ @ 0x180036F00 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@S.c)
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAIXZ @ 0x18003FAF0 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@UWindowTabDataModel@Shell@UI@In.c)
 *     ??1shared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@winrt@@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@AEBU2341@0@Z@QEAA@XZ @ 0x180041270 (--1shared_type@-1---$when_any@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@W.c)
 *     ??1?$implements_delegate@U?$AsyncOperationCompletedHandler@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA@AEBU?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@234@I@Z@@impl@winrt@@QEAA@XZ @ 0x1801C4600 (--1-$implements_delegate@U-$AsyncOperationCompletedHandler@UAppData@Internal@InstallControl@Prev.c)
 *     ??1shared_type@?1???$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@2@I@Z@QEAA@XZ @ 0x1801C4810 (--1shared_type@-1---$wait_for_completed@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal.c)
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA@AEBU?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAIXZ @ 0x180238840 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@UStorageFile@Storage@Windows@wi.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_IMPL_CloseHandle(HANDLE hObject)
{
  return CloseHandle(hObject);
}
