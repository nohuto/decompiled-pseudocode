/*
 * XREFs of ??$await_transform@AEBV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@QEAA?A_PAEBV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@3@@Z @ 0x18063A878
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18021D1B0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type::await_transform<std::chrono::duration<__int64,std::ratio<1,1000>> const &>(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 10000000LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_DWORD *)(a2 + 32) = 0;
  return a2;
}
