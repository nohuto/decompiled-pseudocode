/*
 * XREFs of ?throw_last_error@winrt@@YAXXZ @ 0x18033DC7C
 * Callers:
 *     ??$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x18001AD00 (--$wait_for_completed@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@F.c)
 *     ?resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1800296A4 (-resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180041CEC (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@imp.c)
 *     ??$check_pointer@X@winrt@@YAPEAXPEAX@Z @ 0x180043EF8 (--$check_pointer@X@winrt@@YAPEAXPEAX@Z.c)
 *     ??$check_bool@H@winrt@@YAXH@Z @ 0x1800F9CBC (--$check_bool@H@winrt@@YAXH@Z.c)
 *     ??$check_bool@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@winrt@@YAXV?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1800F9CD8 (--$check_bool@V-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@winrt@@YAXV-$ComPtr@UIServiceProvide.c)
 *     ?await_suspend@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x1800F9F14 (-await_suspend@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@ch.c)
 *     ?await_suspend@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x180164618 (-await_suspend@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x18022B998 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundati.c)
 *     ?resume_background@impl@winrt@@YAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x18033D91C (-resume_background@impl@winrt@@YAXU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?resume_apartment_on_threadpool@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1803517B0 (-resume_apartment_on_threadpool@impl@winrt@@YAXAEBU-$com_ptr@UIContextCallback@impl@winrt@@@2@U-.c)
 *     ?ExtractMonitorInfo@MiniSearchAppPositionerConfig@@UEAA?AUMonitorInfo@@AEBUtagRECT@@@Z @ 0x1803AE3E0 (-ExtractMonitorInfo@MiniSearchAppPositionerConfig@@UEAA-AUMonitorInfo@@AEBUtagRECT@@@Z.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x180570D3C (--$wait_for_completed@U-$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperation@_N@Foundation@Windows@1@I@Z @ 0x180570E2C (--$wait_for_completed@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU-$IAsy.c)
 *     ?StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B0DF0 (-StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AE.c)
 *     ?XamlExplorerHostStartThreadProc@SnapFlyoutHost@@AEAAXXZ @ 0x1805B111C (-XamlExplorerHostStartThreadProc@SnapFlyoutHost@@AEAAXXZ.c)
 * Callees:
 *     GetLastError_0 @ 0x180189308 (GetLastError_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall __noreturn winrt::throw_last_error(winrt *this)
{
  signed int LastError_0; // eax

  LastError_0 = GetLastError_0();
  if ( LastError_0 > 0 )
    LastError_0 = (unsigned __int16)LastError_0 | 0x80070000;
  winrt::throw_hresult(LastError_0);
}
