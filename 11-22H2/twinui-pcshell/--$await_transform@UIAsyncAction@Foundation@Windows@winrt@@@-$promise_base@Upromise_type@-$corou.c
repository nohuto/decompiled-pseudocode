/*
 * XREFs of ??$await_transform@UIAsyncAction@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAUIAsyncAction@Foundation@Windows@2@@Z @ 0x18022FA74
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x180243DB0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 *     ??0?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@$$QEAUIAsyncAction@Foundation@Windows@2@PEAUcancellable_promise@2@@Z @ 0x180694EFC (--0-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@$$QEAUIAsyncAction.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::Windows::Foundation::IAsyncAction>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 88) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(
    a2,
    a3,
    (a1 + 72) & -(__int64)(*(_BYTE *)(a1 + 93) != 0));
  return v3;
}
