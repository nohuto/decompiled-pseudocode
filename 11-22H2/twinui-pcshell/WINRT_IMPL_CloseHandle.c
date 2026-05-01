/*
 * XREFs of WINRT_IMPL_CloseHandle @ 0x1801C7938
 * Callers:
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@4@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@234@AEBU6234@0@Z@@impl@winrt@@UEAAIXZ @ 0x1800634C0 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@S.c)
 *     ??1shared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@winrt@@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@AEBU2341@0@Z@QEAA@XZ @ 0x18007071C (--1shared_type@-1---$when_any@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@W.c)
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@Uhstring@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@Uhstring@winrt@@@234@I@Z@@impl@winrt@@UEAAIXZ @ 0x1800DAE50 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@Uhstring@winrt@@@Foundation@Win.c)
 *     ??1shared_type@?1???$wait_for_completed@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@2@I@Z@QEAA@XZ @ 0x1803E2F60 (--1shared_type@-1---$wait_for_completed@U-$IAsyncOperation@UTileCollection@StartScreen@UI@Window.c)
 *     ?Release@?$implements_delegate@U?$AsyncOperationWithProgressCompletedHandler@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@234@I@Z@@impl@winrt@@UEAAIXZ @ 0x180632060 (-Release@-$implements_delegate@U-$AsyncOperationWithProgressCompletedHandler@UIBuffer@Streams@St.c)
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAIXZ @ 0x1806A4C70 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@U-$IKeyValuePair@ULogoInfo@Logo.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_IMPL_CloseHandle(HANDLE hObject)
{
  return CloseHandle(hObject);
}
