/*
 * XREFs of ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x18003F1D4
 * Callers:
 *     ?OnMessage@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x18003F150 (-OnMessage@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?ToggleDashboardVisibilityAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uguid@6@W4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x1801CBFA8 (-ToggleDashboardVisibilityAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibility(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  HRESULT v5; // eax
  __int128 v6; // xmm0
  int v8; // [rsp+20h] [rbp-60h]
  _BYTE v9[16]; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v10[2]; // [rsp+40h] [rbp-40h] BYREF
  GUID pguid; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v5 = CoCreateGuid(&pguid);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x409,
      (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v5,
      v8);
  v6 = *a3;
  v10[0] = pguid;
  v10[1] = v6;
  return winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync(a1, v9, v10);
}
