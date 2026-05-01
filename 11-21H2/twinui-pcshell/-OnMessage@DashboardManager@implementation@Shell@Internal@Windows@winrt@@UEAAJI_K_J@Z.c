/*
 * XREFs of ?OnMessage@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x18003F150
 * Callers:
 *     <none>
 * Callees:
 *     ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x18003F1D4 (-ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::OnMessage(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        __int64 a2,
        int a3)
{
  __int128 v5; // xmm6
  __int64 v6; // rdx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  struct tagPOINT Point; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 == 102 || a3 == 76 )
  {
    v5 = 0LL;
    v7 = 0LL;
    if ( GetCursorPos(&Point) )
    {
      *(float *)&v7 = (float)Point.x;
      *((float *)&v7 + 1) = (float)Point.y;
      v5 = v7;
    }
    v7 = v5;
    winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibility(this, v6, &v7);
  }
  return 0LL;
}
