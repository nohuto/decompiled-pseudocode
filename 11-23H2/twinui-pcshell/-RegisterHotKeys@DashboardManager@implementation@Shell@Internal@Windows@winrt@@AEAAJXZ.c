/*
 * XREFs of ?RegisterHotKeys@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1801B9DA0
 * Callers:
 *     ?subscribe_to_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800E86D0 (-subscribe_to_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::RegisterHotKeys(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  _DWORD v5[8]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v5[1] = 102;
  v1 = *((_QWORD *)this + 25);
  v5[0] = 2;
  v5[2] = 16392;
  v5[3] = 87;
  v5[4] = 2;
  v5[5] = 76;
  v5[6] = 16394;
  v5[7] = 8;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v1 + 56LL))(v1, 2LL, v5);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A3,
    (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
