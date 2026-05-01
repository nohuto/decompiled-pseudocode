/*
 * XREFs of ?OnMessage@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x18005A050
 * Callers:
 *     <none>
 * Callees:
 *     ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x18005A0D0 (-ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::OnMessage(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        __int64 a2,
        int a3)
{
  __int128 v4; // xmm6
  __int64 v5; // rdx
  struct tagPOINT Point; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  if ( a3 == 76 || a3 == 102 )
  {
    v4 = 0LL;
    v8 = 0LL;
    if ( GetCursorPos(&Point) )
    {
      *(float *)&v8 = (float)Point.x;
      *((float *)&v8 + 1) = (float)Point.y;
      v4 = v8;
    }
    v8 = v4;
    winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibility(this, v5, &v8);
  }
  return 0LL;
}
